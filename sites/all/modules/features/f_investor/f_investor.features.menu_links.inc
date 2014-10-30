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
      'identifier' => 'main-menu_alla-investerare:investerare',
      'attributes' => array(
        'id' => 'all_investors',
      ),
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
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'identifier' => 'main-menu_investerare:<firstchild>',
      'attributes' => array(
        'id' => 'investors',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_lgg-till-investerare:investerare/skapa
  $menu_links['main-menu_lgg-till-investerare:investerare/skapa'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'investerare/skapa',
    'router_path' => 'investerare/skapa',
    'link_title' => 'Lägg till investerare',
    'options' => array(
      'identifier' => 'main-menu_lgg-till-investerare:investerare/skapa',
      'attributes' => array(
        'id' => 'add_investor',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
    'parent_identifier' => 'main-menu_investerare:<firstchild>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alla investerare');
  t('Investerare');
  t('Lägg till investerare');


  return $menu_links;
}