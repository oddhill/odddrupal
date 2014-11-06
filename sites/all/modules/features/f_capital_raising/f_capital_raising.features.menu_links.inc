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
      'identifier' => 'main-menu_alla-kapitalanskaffningar:kapitalanskaffningar',
      'attributes' => array(
        'class' => array(
          0 => 'all',
        ),
      ),
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
  // Exported menu link: main-menu_arkiverade-kapitalanskaffningar:kapitalanskaffningar/arkiverade
  $menu_links['main-menu_arkiverade-kapitalanskaffningar:kapitalanskaffningar/arkiverade'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kapitalanskaffningar/arkiverade',
    'router_path' => 'kapitalanskaffningar/arkiverade',
    'link_title' => 'Arkiverade kapitalanskaffningar',
    'options' => array(
      'identifier' => 'main-menu_arkiverade-kapitalanskaffningar:kapitalanskaffningar/arkiverade',
      'attributes' => array(
        'class' => array(
          0 => 'archive',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
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
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'identifier' => 'main-menu_kapitalanskaffningar:<firstchild>',
      'attributes' => array(
        'id' => 'transactions',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: main-menu_lgg-till-kapitalanskaffning:node/add/capital-raising
  $menu_links['main-menu_lgg-till-kapitalanskaffning:node/add/capital-raising'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/capital-raising',
    'router_path' => 'node/add/capital-raising',
    'link_title' => 'Lägg till kapitalanskaffning',
    'options' => array(
      'identifier' => 'main-menu_lgg-till-kapitalanskaffning:node/add/capital-raising',
      'query' => array(
        'destination' => 'kapitalanskaffningar',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'add',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 1,
    'parent_identifier' => 'main-menu_kapitalanskaffningar:<firstchild>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alla kapitalanskaffningar');
  t('Arkiverade kapitalanskaffningar');
  t('Kapitalanskaffningar');
  t('Lägg till kapitalanskaffning');


  return $menu_links;
}
