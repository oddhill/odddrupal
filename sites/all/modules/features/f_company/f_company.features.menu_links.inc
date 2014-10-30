<?php
/**
 * @file
 * f_company.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_company_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_alla-bolag:bolag
  $menu_links['main-menu_alla-bolag:bolag'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'bolag',
    'router_path' => 'bolag',
    'link_title' => 'Alla bolag',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_alla-bolag:bolag',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_bolag:<firstchild>',
  );
  // Exported menu link: main-menu_bolag:<firstchild>
  $menu_links['main-menu_bolag:<firstchild>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<firstchild>',
    'router_path' => '<firstchild>',
    'link_title' => 'Bolag',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'identifier' => 'main-menu_bolag:<firstchild>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alla bolag');
  t('Bolag');


  return $menu_links;
}
