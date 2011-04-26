<?php

/**
 * Transform an HTML string into plain text, preserving the structure of the
 * markup. Useful for preparing the body of a node to be sent by e-mail.
 *
 * The output will be suitable for use as 'format=flowed; delsp=yes' text
 * (RFC 3676) and can be passed directly to drupal_mail() for sending.
 *
 * We deliberately use MAIL_LINE_ENDINGS rather than CRLF.
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
 * @param $allowed_tags (optional)
 *   If supplied, a list of tags that will be transformed. If omitted, all
 *   all supported tags are transformed.
 *
 * @return
 *   The transformed string.
 *
 * @see drupal_mail()
 */
function mailsystem_html_to_text($string, $allowed_tags = NULL) {
  // Cache list of supported tags.
  static $supported_tags;
  if (empty($supported_tags)) {
    $supported_tags = array(
      'a', 'address', 'b', 'blockquote', 'br', 'dd', 'del', 'div', 'dl', 'dt',
      'em', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'hr', 'i', 'ins', 'li', 'ol',
      'p', 'pre', 'strong', 'td', 'tr', 'ul',
    );
  }

  // Make sure only supported tags are kept.
  $allowed_tags = isset($allowed_tags) ? array_intersect($supported_tags, $allowed_tags) : $supported_tags;

  // Make sure tags, entities and attributes are well-formed and properly nested.
  $string = _filter_htmlcorrector(filter_xss($string, $allowed_tags));
  // Apply inline styles.
  $string = preg_replace('!</?(em|i)((?> +)[^>]*)?>!i', '/', $string);
  $string = preg_replace('!</?(strong|b)((?> +)[^>]*)?>!i', '*', $string);

  // Separate adjacent table cells.
  $string = preg_replace('!(</td>)?<td>!i', ' ', $string);

  // Replace inline <a> tags with the text of link and a footnote.
  // 'See <a href="http://drupal.org">the Drupal site</a>' becomes
  // 'See the Drupal site [1]' with the URL included as a footnote.
  _drupal_html_to_mail_urls(NULL, TRUE);
  $pattern = '@(<a[^>]+?href="([^"]*)"[^>]*?>(.+?)</a>)@i';
  $string = preg_replace_callback($pattern, '_drupal_html_to_mail_urls', $string);
  $urls = _drupal_html_to_mail_urls();
  $footnotes = '';
  if (count($urls)) {
    $footnotes .= MAIL_LINE_ENDINGS;
    for ($i = 0, $max = count($urls); $i < $max; $i++) {
      $footnotes .= '[' . ($i + 1) . '] ' . $urls[$i] . MAIL_LINE_ENDINGS;
    }
  }

  // Split tags from text.
  $split = preg_split('/<([^>]+?)>/', $string, -1, PREG_SPLIT_DELIM_CAPTURE);
  // Note: PHP ensures the array consists of alternating delimiters and literals
  // and begins and ends with a literal (inserting $null as required).

  $tag = FALSE; // Odd/even counter (tag or no tag).
  $casing = NULL; // Case conversion function.
  $br = FALSE; // Flag for linebreak <br /> tag.
  $pre = 0; // Counter for <pre> tags.
  $output = '';
  $indent = array(); // All current indentation string chunks.
  $lists = array(); // Array of counters for opened lists.
  foreach ($split as $value) {
    $chunk = NULL; // Holds a string ready to be formatted and output.

    // Process HTML tags (but don't output any literally).
    if ($tag) {
      $br = FALSE;
      list($tagname) = explode(' ', drupal_strtolower($value), 2);
      switch ($tagname) {
        // List counters.
        case 'ul':
          array_unshift($lists, '*');
          break;
        case 'ol':
          // Support start attribute.
          if (preg_match('/\bstart\s*=\s*([\'"]?)([0-9]+)\b/i', $value, $matches)) {
            array_unshift($lists, $matches[2]);
          }
          else {
            array_unshift($lists, 1);
          }
          break;
        case '/ul':
        case '/ol':
          if ($lists) {
            array_shift($lists);
            $chunk = ''; // Ensure blank new-line.
          }
          break;

        // Quotation/list markers, non-fancy headers.
        case 'blockquote':
          // Format=flowed indentation cannot be mixed with lists.
          $indent[] = count($lists) ? ' "' : '> ';
          break;
        case 'li':
          // Support value attribute.
          if (isset($lists[0]) && is_numeric($lists[0])) {
            $inc = ' ';
            if (preg_match('/\bvalue\s*=\s*([\'"]?)([0-9]+)\b/i', $value, $matches)) {
              $inc .= $matches[2];
              $lists[0] = $matches[2] + 1;
            }
            else {
              $inc .= $lists[0]++;
            }
            $indent[] = $inc . ') ';
          }
          else {
            $indent[] = ' * ';
          }
          break;
        case 'dd':
          $indent[] = '    ';
          break;
        case 'h3':
          $indent[] = '.... ';
          break;
        case 'h4':
          $indent[] = '.. ';
          break;
        case '/blockquote':
          if (count($lists)) {
            // Append closing quote for inline quotes (immediately).
            $output = rtrim($output, "> \r\n") . '"' . MAIL_LINE_ENDINGS;
            $chunk = ''; // Ensure blank new-line.
          }
          // Fall-through.
        case '/li':
        case '/dd':
          array_pop($indent);
          break;
        case '/h3':
        case '/h4':
          array_pop($indent);
        case '/h5':
        case '/h6':
          $chunk = ''; // Ensure blank new-line.
          break;

        // Fancy headers
        case 'h1':
          $indent[] = '======== ';
          $casing = 'drupal_strtoupper';
          break;
        case 'h2':
          $indent[] = '-------- ';
          $casing = 'drupal_strtoupper';
          break;
        case '/h1':
        case '/h2':
          $casing = NULL;
          // Pad the line with dashes.
          $output = _mailsystem_html_to_text_pad($output, ($tagname == '/h1') ? '=' : '-', ' ');
          array_pop($indent);
          $chunk = ''; // Ensure blank new-line.
          break;

        // Horizontal rulers.
        case 'hr':
          // Insert immediately.
          $output .= drupal_wrap_mail('', implode('', $indent));
          if ($output) {
            $output .= MAIL_LINE_ENDINGS;
          }
          $output .= str_repeat('-', 78);
          break;
        // Preformatted plain text.
        case 'pre':
          $pre++;
          break;
        case '/pre':
          if ($pre) {
            $pre--;
          }
          break;
        // Forced line break.
        case 'br':
          $output .= MAIL_LINE_ENDINGS;
          $br = TRUE;
        // Paragraphs and other block-level tags.
        case '/address':
        case '/ins':
        case '/del':
        case '/div':
        case '/p':
        case '/tr':
        case '/dl':
          $chunk = ''; // Ensure blank new-line.
        default:
          break;
      }
    }
    // Process blocks of text.
    else {
      $value = decode_entities($value);
      if ($pre) {
        // Within <pre> tags, preserve whitespace.
        if ($value) {
          $chunk = $value;
        }
      }
      else {
        $value = trim($value);
        if (drupal_strlen($value)) {
          $chunk =  preg_replace('/\s+/', ' ', $value);
        }
      }
    }
    // See if there is something waiting to be output.
    if (isset($chunk)) {
      // Apply any necessary case conversion.
      if (isset($casing)) {
        $chunk = $casing($chunk);
      }
      // Format it and apply the current indentation.
      if ($output && !$br && !$pre) {
          $output = rtrim($output) . MAIL_LINE_ENDINGS;
      }
      $output .= drupal_wrap_mail($chunk, implode('', $indent));
      // Remove non-quotation markers from indentation.
      $indent = array_map('_drupal_html_to_text_clean', $indent);
    }

    $tag = !$tag;
  }
  return ltrim(rtrim($output . $footnotes, " \r\n"), "\r\n");
}

/**
 * Helper function for drupal_html_to_text().
 *
 * Pad the last line with the given character.
 */
function _mailsystem_html_to_text_pad($text, $pad, $prefix = '') {
  // Remove last line break.
  $text = preg_replace('/\r?\n$/s', '', $text);
  // Calculate needed padding space and add it.
  if (($p = strrpos($text, MAIL_LINE_ENDINGS)) === FALSE) {
    $p = -1;
  }
  $n = max(0, 79 - (drupal_strlen($text) - $p) - drupal_strlen($prefix));
  // Add prefix and padding, and restore linebreak.
  return $text . $prefix . str_repeat($pad, $n) . MAIL_LINE_ENDINGS;
}
