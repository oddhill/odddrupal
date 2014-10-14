<?php
/**
 * @file
 * f_investor.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_investor_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_alla-investerare:investerare
  $menu_links['main-menu_alla-investerare:investerare'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'investerare',
    'router_path' => 'investerare',
    'link_title' => 'Alla investerare',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_alla-investerare:investerare',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_investerare:<firstchild>',
  );
  // Exported menu link: main-menu_investerare:<firstchild>
  $menu_links['main-menu_investerare:<firstchild>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<firstchild>',
    'router_path' => '<firstchild>',
    'link_title' => 'Investerare',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'identifier' => 'main-menu_investerare:<firstchild>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alla investerare');
  t('Investerare');


  return $menu_links;
}
