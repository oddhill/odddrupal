<?php

define('NBSP', html_entity_decode('&nbsp;'));

/**
 * Perform format=flowed soft wrapping for mail (RFC 3676).
 *
 * We use delsp=yes wrapping, but only break non-spaced languages when
 * absolutely necessary to avoid compatibility issues.
 *
 * We deliberately use variable_get('mail_line_endings), MAIL_LINE_ENDINGS)
 * rather than "\r\n".
 *
 * @param $text
 *   The plain text to process.
 * @param $indent (optional)
 *   A string to indent the text with. Only '>' characters are repeated on
 *   subsequent wrapped lines. Others are replaced by spaces.
 *
 * @see drupal_mail()
 */
function _mailsystem_wrap_mail($text, $indent = '') {
  // Convert CRLF into MAIL_LINE_ENDINGS.
  $eol = variable_get('mail_line_endings', MAIL_LINE_ENDINGS);
  $text = preg_replace('/\r?\n/', $eol, $text);
  // See if soft-wrapping is allowed.
  $clean_indent = _mailsystem_html_to_text_clean($indent);
  $soft = strpos($clean_indent, ' ') === FALSE;
  // Check if the string has line breaks.
  if (strpos($text, $eol) !== FALSE) {
    // Remove trailing spaces to make existing breaks hard.
    $text = preg_replace('/ +\r?\n/m', $eol, $text);
    // Wrap each line at the needed width.
    $lines = explode($eol, $text);
    array_walk($lines, '_mailsystem_wrap_mail_line', array('soft' => $soft, 'length' => drupal_strlen($indent)));
    $text = implode($eol, $lines);
  }
  else {
    // Wrap this line.
    _mailsystem_wrap_mail_line($text, 0, array('soft' => $soft, 'length' => drupal_strlen($indent)));
  }
  // Empty lines with nothing but spaces.
  $text = preg_replace('/^ +\r?\n/m', $eol, $text);
  // Space-stuff special lines.
  $text = preg_replace('/^(>|From)/m', ' $1', $text);
  // Apply indentation. We only include non-'>' indentation on the first line.
  $text = $indent . drupal_substr(preg_replace('/^/m', $clean_indent, $text), drupal_strlen($indent));
  return $text;
}

/**
 * Transform an HTML string into plain text, preserving the structure of the
 * markup. Useful for preparing the body of a node to be sent by e-mail.
 *
 * The output will be suitable for use as 'format=flowed; delsp=yes' text
 * (RFC 3676) and can be passed directly to drupal_mail() for sending.
 *
 * We deliberately use variable_get('mail_line_endings', MAIL_LINE_ENDINGS)
 * rather than "\r\n".
 *
 * This function provides suitable alternatives for the following tags:
 *
 * <a> <address> <b> <blockquote> <br /> <dd> <dl> <dt> <em>
 * <h1> <h2> <h3> <h4> <h5> <h6> <hr /> <i> <li> <ol> <p> <pre> <strong> <ul>
 *
 * The following tags are also handled:
 *
 * <del> <div> <ins> <tr>: Rendered the same as a <p> tag.
 *
 * <td>: A space is inserted between adjacent table cells.
 *
 * @param $string
 *   The string to be transformed.
 * @param $allowed_tags
 *   (optional) If supplied, a list of tags that will be transformed. If
 *   omitted, all supported tags are transformed.
 *
 * @return
 *   The transformed string.
 *
 * @see drupal_mail()
 */
function mailsystem_html_to_text($string, $allowed_tags = NULL) {
  $eol = variable_get('mail_line_endings', MAIL_LINE_ENDINGS);
  // Cache list of supported tags.
  static $supported_tags;
  if (!isset($supported_tags)) {
    $supported_tags = array(
      'a', 'address', 'b', 'blockquote', 'br', 'dd', 'del', 'div', 'dl', 'dt',
      'em', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'hr', 'i', 'ins', 'li', 'ol',
      'p', 'pre', 'strong', 'td', 'tr', 'ul',
    );
  }

  // Make sure only supported tags are kept.
  $allowed_tags = isset($allowed_tags) ? array_intersect($supported_tags, $allowed_tags) : $supported_tags;

  // Parse $string into a DOM tree.
  $dom = filter_dom_load($string);
  $notes = array();
  $text = _mailsystem_html_to_text($dom->documentElement, $allowed_tags, $notes);
  // Convert non-breaking spaces to regular spaces.
  $text = str_replace(NBSP, ' ', $text);
  // Add footnotes;
  foreach ($notes as $url => $note) {
    $text .= $eol . '[' . $note . '] ' . $url;
  }
  return trim($text, $eol);
}

/**
 * Helper function for drupal_html_to_text
 *
 * Recursively converts $node to text, wrapping and indenting as necessary.
 *
 * @param $node
 *   The source DOMNode.
 * @param $allowed_tags
 *   A list of tags that will be transformed.
 * @param $notes
 *   The list of footnotes, an associative array of (url => reference number) items.
 * @param $parents
 *   The list of ancestor tags, from nearest to most distant.
 * @param $count
 *   The number to use for the next list item within an ordered list.
 */
function _mailsystem_html_to_text(DOMNode $node, array $allowed_tags, array &$notes, $parents = array(), &$count = NULL) {
  if (is_null($count)) {
    $count = 1;
  }
  $eol = variable_get('mail_line_endings', MAIL_LINE_ENDINGS);
  if ($node->nodeType === XML_TEXT_NODE) {
    // For text nodes, we just copy the text content.
    $text = $node->textContent;
    // Collapse whitespace except within pre tags.
    if (!in_array('pre', $parents)) {
      $text = preg_replace('/[[:space:]]+/', ' ', $text);
    }
    return $text;
  }
  // Non-text node.
  $tag = '';
  $text = '';
  $child_text = '';
  $child_count = 1;
  $prefix = '';
  $indent = '';
  $suffix = '';
  if (isset($node->tagName) && in_array($node->tagName, $allowed_tags)) {
    $tag = $node->tagName;
    switch ($tag) {
      // Turn links with valid hrefs into footnotes.
      case 'a':
        if ( !empty($node->attributes)
          && ($href = $node->attributes->getNamedItem('href'))
          && ($url = $href->nodeValue)
          && valid_url($url) ) {
          // Only add links that have not already been added.
          if (isset($notes[$url])) {
            $note = $notes[$url];
          }
          else {
            $note = count($notes) + 1;
            $notes[$url] = $note;
          }
          $suffix = ' [' . $note . ']';
        }
        break;

      // Generic block-level tags.
      case 'address':
      case 'del':
      case 'div':
      case 'ins':
      case 'p':
      case 'pre':
        $text = $eol;
        $suffix = $eol;
        break;

      // Forced line break.
      case 'br':
        $text = $eol;
        break;

      // Boldface by wrapping with "*" characters.
      case 'b':
      case 'strong':
        $prefix = '*';
        $suffix = '*';
        break;

      // Italicize by wrapping with "/" characters.
      case 'em':
      case 'i':
        $prefix = '/';
        $suffix = '/';
        break;

      // Blockquotes are indented by "> " at each level.
      case 'blockquote':
        $text = $eol;
        $indent = '>' . NBSP;
        $suffix = $eol;
        break;

      // Dictionary definitions are indented by four spaces.
      case 'dd':
        $indent = NBSP . NBSP . NBSP . NBSP;
        $suffix = $eol;
        break;

      // Dictionary list.
      case 'dl':
        // Start on a newline except inside other lists.
        if (!in_array('li', $parents)) {
          $text = $eol;
        }

      // Dictionary term.
      case 'dt':
        $suffix = $eol;
        break;

      // Header level 1 is prefixed by eight "=" characters.
      case 'h1':
        $text = $eol;
        $indent = '======== ';
        $suffix = $eol;
        break;

      // Header level 2 is prefixed by six "-" characters.
      case 'h2':
        $text = $eol;
        $indent = '------ ';
        $suffix = $eol;
        break;

      // Header level 3 is prefixed by four "." characters and a space.
      case 'h3':
        $text = $eol;
        $indent = '....' . NBSP;
        $suffix = $eol;
        break;

      // Header level 4 is prefixed by three "." characters and a space.
      case 'h4':
        $text = $eol;
        $indent = '...' . NBSP;
        $suffix = $eol;
        break;

      // Header level 5 is prefixed by two "." character and a space.
      case 'h5':
        $text = $eol;
        $indent = '..' . NBSP;
        $suffix = $eol;
        break;

      // Header level 6 is prefixed by one "." character and a space.
      case 'h6':
        $text = $eol;
        $indent = '.' . NBSP;
        $suffix = $eol;
        break;

      // Horizontal rulers become a line of 78 "-" characters.
      case 'hr':
        $text = $eol . str_repeat('-', 78) . $eol;
        break;

      // List items are treated differently depending on the parent tag.
      case 'li':
        // Ordered list item.
        if (reset($parents) === 'ol') {
          // Check the value attribute.
          if ( !empty($node->attributes)
            && ($value = $node->attributes->getNamedItem('value'))) {
            $count = $value->nodeValue;
          }
          $indent = NBSP . "$count)" . NBSP;
          $count++;
        }
        // Unordered list item.
        else {
          $indent = NBSP . '*' . NBSP;
        }
        $suffix = $eol;
        break;

      // Ordered lists.
      case 'ol':
        // Start on a newline except inside other lists.
        if (!in_array('li', $parents)) {
          $text = $eol;
        }
        // Check the start attribute.
        if ( !empty($node->attributes)
          && ($value = $node->attributes->getNamedItem('start')) ) {
          $child_count = $value->nodeValue;
        }
        break;

      // Start and end tables on a new line.
      case 'table':
        $text = $eol;
        $suffix = $eol;
        break;

      // Wrap table cells in space characters.
      case 'td':
        if (!empty($node->nextSibling)) {
          $suffix = NBSP;
        }
        break;

      // End each table row with a newline.
      case 'tr':
        $suffix = $eol;
        break;

      // Unordered lists.
      case 'ul':
        // Start on a newline except inside other lists.
        if (!in_array('li', $parents)) {
          $text = $eol;
        }
        break;

      default:
        break;
    }
    // Only add allowed tags to the $parents array.
    array_unshift($parents, $tag);
  }
  // Copy each child node to output.
  if ($node->hasChildNodes()) {
    foreach ($node->childNodes as $child) {
      $child_text .= _mailsystem_html_to_text($child, $allowed_tags, $notes, $parents, $child_count);
    }
  }
  // We only add prefix and suffix if the child nodes were non-empty.
  if (drupal_strlen($child_text)) {
    // Don't add a newline to an existing newline.
    if ($suffix === $eol && drupal_substr($child_text, - drupal_strlen($eol)) === $eol) {
      $suffix = '';
    }
    $child_text = $prefix . $child_text . $suffix;
    // Remove spaces around newlines.
    $child_text = preg_replace('/ *\n */', "\n", $child_text);
    $child_text = _mailsystem_wrap_mail($child_text, $indent);
    // We capitalize the contents of h1 and h2 tags.
    if ($tag === 'h1' || $tag === 'h2') {
      $child_text = drupal_strtoupper($child_text);
      // For h1 and h2 tags at the top level, pad each non-empty line with the
      // character used for indentation.
      if (count($parents) == 1) {
        $pad = drupal_substr($indent, 0, 1);
        $lines = explode($eol, $child_text);
        foreach ($lines as $i => $line) {
          if (strlen($line)) {
            $lines[$i] = _mailsystem_html_to_text_pad($line . NBSP, $pad);
          }
        }
        $child_text = implode($eol, $lines);
      }
    }
    $text .= $child_text;
  }
  return $text;
}

/**
 * Helper function for array_walk in drupal_wrap_mail().
 *
 * Wraps words on a single line.
 */
function _mailsystem_wrap_mail_line(&$line, $key, $values) {
  $eol = variable_get('mail_line_endings', MAIL_LINE_ENDINGS);
  // Use soft-breaks only for purely quoted or unindented text.
  $line = wordwrap($line, 77 - $values['length'], ($values['soft'] ? ' ' : '') . $eol);
  // Break really long words at the maximum width allowed.
  $line = wordwrap($line, 996 - $values['length'], ($values['soft'] ? ' ' : '') . $eol);
}

/**
 * Helper function for drupal_wrap_mail() and drupal_html_to_text().
 *
 * Replace all non-quotation markers from a given piece of indentation with spaces.
 */
function _mailsystem_html_to_text_clean($indent) {
  return preg_replace('/[^>]/', NBSP, $indent);
}

/**
 * Helper function for drupal_html_to_text().
 *
 * Pad the last line with the given character.
 */
function _mailsystem_html_to_text_pad($text, $pad, $prefix = '') {
  $eol = variable_get('mail_line_endings', MAIL_LINE_ENDINGS);

  // Calculate needed padding space and add it.
  if (($p = strrpos($text, $eol)) === FALSE) {
    $p = -1;
  }
  else {
    // Convert position from byte count to character count. Must use substr()
    // instead of drupal_substr() to match the previous strrpos() for which
    // Drupal has no unicode-safe alternative.
    $p = drupal_strlen(substr($text, 0, $p));
  }
  // Subtract the result of strrpos().
  $n = max(0, 78 - (drupal_strlen($text) - $p) - drupal_strlen($prefix));
  // Add prefix and padding.
  return $text . $prefix . str_repeat($pad, $n);
}
