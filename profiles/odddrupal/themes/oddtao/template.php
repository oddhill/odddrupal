<?php
/**
 * Implements preprocess_node().
 */
function oddtao_preprocess_node(&$vars, $hook) {
  // Look for node templates files in the node-nid.tpl.php pattern.
  $vars['template_files'][] = 'node-' . $vars['nid'];
  // Add classes and vars for unpublished nodes.
  if(!$vars['status']) {
    $vars['unpublished'] = TRUE;
  }
}

/**
 * Implements preprocess_page().
 */
function oddtao_preprocess_page(&$vars) {
  // Remove the link to the frontpage.
  $vars['site_name'] = theme_get_setting('toggle_name') ? variable_get('site_name', '') : '';

  // Build the html for the logo.
  $logo = theme('image', substr($vars['logo'], 1), $vars['site_name'], $vars['site_name'], array('id' => 'logo-image'));
  $header_content = theme_get_setting('toggle_name') ? $logo . '<h1 class="site-name">' . $vars['site_name'] . '</h1>' : '<h1 class="site-name">' . $logo . '</h1>';
  $vars['header_logo'] = drupal_is_front_page() ? $header_content : l($header_content, '<front>', array('html' => TRUE));
}

/**
 * Implements theme_button().
 */
function oddtao_button($element) {
  // Adds a wrapper and a throbber to the submit buttons.
  if ($element['#type'] = 'submit') {
    return '<div class="submit-wrapper">' . trim(theme_button($element)) . '<div class="submit-throbber"></div></div>';
  }
}

/**
 * Return an image with an appropriate icon for the given file.
 *
 * @param $file
 *   A file object for which to make an icon.
 */
function oddtao_filefield_icon($file) {
  if (is_object($file)) {
    $file = (array) $file;
  }
  $mime = check_plain($file['filemime']);

  $dashed_mime = strtr($mime, array('/' => '-', '+' => '-'));

  if ($icon_url = filefield_icon_url($file)) {
    return '<span class="filefield-icon field-icon-'. $dashed_mime .'"></span>';
  }
}

/**
 * Returns the path to the Oddtao theme.
 *
 * drupal_get_filename() is broken; see #341140. When that is fixed in Drupal 6,
 * replace _oddtao_path() with drupal_get_path('theme', 'oddtao').
 */
function _oddtao_path() {
  static $path = FALSE;
  if (!$path) {
    $matches = drupal_system_listing('oddtao\.info$', 'themes', 'name', 0);
    if (!empty($matches['oddtao']->filename)) {
      $path = dirname($matches['oddtao']->filename);
    }
  }
  return $path;
}