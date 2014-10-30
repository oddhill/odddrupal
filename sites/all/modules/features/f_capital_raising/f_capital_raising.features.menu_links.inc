<?php
/**
 * @file
 * f_capital_raising.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_capital_raising_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_alla-kapitalanskaffningar:kapitalanskaffningar
  $menu_links['main-menu_alla-kapitalanskaffningar:kapitalanskaffningar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kapitalanskaffningar',
    'router_path' => 'kapitalanskaffningar',
    'link_title' => 'Alla kapitalanskaffningar',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_alla-kapitalanskaffningar:kapitalanskaffningar',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_kapitalanskaffningar:<firstchild>',
  );
  // Exported menu link: main-menu_kapitalanskaffningar:<firstchild>
  $menu_links['main-menu_kapitalanskaffningar:<firstchild>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<firstchild>',
    'router_path' => '<firstchild>',
    'link_title' => 'Kapitalanskaffningar',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'identifier' => 'main-menu_kapitalanskaffningar:<firstchild>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alla kapitalanskaffningar');
  t('Kapitalanskaffningar');


  return $menu_links;
}
