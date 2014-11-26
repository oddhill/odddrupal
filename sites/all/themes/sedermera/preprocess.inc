<?php
/**
 * @file
 * This file should contain any preprocess functions that are being used.
 *
 * Preprocess functions are functions that runs before the theme function or
 * template file. For example, the template_preprocess_node will process the
 * variables that will be available to the node.tpl.php.
 *
 * You are also able to manage the template suggestions using these functions.
 * Using the node example again, the node.tpl.php will cover any node, but
 * node-123.tpl.php will only cover the node with the id 123. This is a simple
 * template suggestion, and you could add whatever suggestions you like.
 *
 * @see http://drupal.org/node/223430
 */

/**
 * Implements template_preprocess_block().
 */
function sedermera_preprocess_block(&$variables) {
  // Alter the title for some blocks. This is manually configured here, because
  // Features doesn't export block configuration.
  switch ($variables['block']->bid) {
    case 'system-main-menu':
      $variables['block']->subject = '';
      break;

    // Change the block header for the user menu to the current users name.
    case 'system-user-menu':
      $variables['block']->subject = format_username($GLOBALS['user']);
      break;
  }
}

/**
 * Implements template_preprocess_blockify_logo().
 */
function sedermera_preprocess_blockify_logo(&$variables) {
  // Change the url of the logo to the graphics folder.
  $variables['logo_path'] = file_create_url(drupal_get_path('theme', 'sedermera') . '/graphics/logo.svg');
}

/**
 * Implements template_preprocess_date_combo().
 */
function sedermera_preprocess_date_combo(&$variables) {
  // Remove the fieldset description that gets added automatically.
  unset($variables['element']['#fieldset_description']);
}
