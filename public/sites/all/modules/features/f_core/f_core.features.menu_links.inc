<?php
/**
 * @file
 * f_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_versikt:oversikt.
  $menu_links['main-menu_versikt:oversikt'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'oversikt',
    'router_path' => 'oversikt',
    'link_title' => 'Översikt',
    'options' => array(
      'attributes' => array(
        'id' => 'overview',
      ),
      'identifier' => 'main-menu_versikt:oversikt',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Översikt');

  return $menu_links;
}
