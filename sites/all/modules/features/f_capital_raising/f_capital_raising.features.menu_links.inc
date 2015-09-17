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

  // Exported menu link: main-menu_alla-transaktioner:transaktioner/lista
  $menu_links['main-menu_alla-transaktioner:transaktioner/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transaktioner/lista',
    'router_path' => 'transaktioner/lista',
    'link_title' => 'Alla transaktioner',
    'options' => array(
      'identifier' => 'main-menu_alla-transaktioner:transaktioner/lista',
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
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transaktioner:transaktioner',
  );
  // Exported menu link: main-menu_arkiverade-transaktioner:transaktioner/arkiverade
  $menu_links['main-menu_arkiverade-transaktioner:transaktioner/arkiverade'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transaktioner/arkiverade',
    'router_path' => 'transaktioner/arkiverade',
    'link_title' => 'Arkiverade transaktioner',
    'options' => array(
      'identifier' => 'main-menu_arkiverade-transaktioner:transaktioner/arkiverade',
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
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transaktioner:transaktioner',
  );
  // Exported menu link: main-menu_lgg-till-transaktion:node/add/capital-raising
  $menu_links['main-menu_lgg-till-transaktion:node/add/capital-raising'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/capital-raising',
    'router_path' => 'node/add/capital-raising',
    'link_title' => 'Lägg till transaktion',
    'options' => array(
      'identifier' => 'main-menu_lgg-till-transaktion:node/add/capital-raising',
      'query' => array(
        'destination' => 'transaktioner',
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
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transaktioner:transaktioner',
  );
  // Exported menu link: main-menu_transaktioner:transaktioner
  $menu_links['main-menu_transaktioner:transaktioner'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transaktioner',
    'router_path' => 'transaktioner',
    'link_title' => 'Transaktioner',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_transaktioner:transaktioner',
      'attributes' => array(
        'id' => 'transactions',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_transaktionshistoria:transaktioner/historik
  $menu_links['main-menu_transaktionshistoria:transaktioner/historik'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transaktioner/historik',
    'router_path' => 'transaktioner',
    'link_title' => 'Transaktionshistoria',
    'options' => array(
      'identifier' => 'main-menu_transaktionshistoria:transaktioner/historik',
      'attributes' => array(
        'id' => 'document-log',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transaktioner:transaktioner',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alla transaktioner');
  t('Arkiverade transaktioner');
  t('Lägg till transaktion');
  t('Transaktioner');
  t('Transaktionshistoria');

  return $menu_links;
}
