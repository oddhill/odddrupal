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
 * Implements template_preprocess().
 */
function sedermera_preprocess(&$variables, $hook) {
  // Add contextual links to everything. If contaxtual links already have been
  // added in the normal manner, we'll use them. If they haven't, we'll add the
  // tabs for the current page, as these will be rendered as contextual links
  // thanks to sedermera_menu_local_tasks().
  $variables['contextual_links'] = isset($variables['title_suffix']['contextual_links']) ? $variables['title_suffix']['contextual_links'] : menu_local_tabs();
}

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
  }
}

/**
 * Implements template_preprocess_blockify_logo().
 */
function sedermera_preprocess_blockify_logo(&$variables) {
  // Change the url of the logo to the graphics folder.
  $variables['logo_path'] = file_create_url(drupal_get_path('theme', 'sedermera') . '/graphics/logo.png');
}
