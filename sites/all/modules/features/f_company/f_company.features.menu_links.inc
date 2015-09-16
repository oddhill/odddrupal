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

  // Exported menu link: main-menu_alla-kundbolag:kundbolag/lista
  $menu_links['main-menu_alla-kundbolag:kundbolag/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kundbolag/lista',
    'router_path' => 'kundbolag/lista',
    'link_title' => 'Alla kundbolag',
    'options' => array(
      'identifier' => 'main-menu_alla-kundbolag:kundbolag/lista',
      'attributes' => array(
        'class' => array(
          0 => 'all',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:kundbolag',
  );
  // Exported menu link: main-menu_kundbolag:kundbolag
  $menu_links['main-menu_kundbolag:kundbolag'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kundbolag',
    'router_path' => 'kundbolag',
    'link_title' => 'Kundbolag',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_kundbolag:kundbolag',
      'attributes' => array(
        'id' => 'companies',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_lgg-till-kundbolag:node/add/company
  $menu_links['main-menu_lgg-till-kundbolag:node/add/company'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/company',
    'router_path' => 'node/add/company',
    'link_title' => 'Lägg till kundbolag',
    'options' => array(
      'identifier' => 'main-menu_lgg-till-kundbolag:node/add/company',
      'query' => array(
        'destination' => 'kundbolag',
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
    'weight' => 10,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:kundbolag',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alla kundbolag');
  t('Kundbolag');
  t('Lägg till kundbolag');

  return $menu_links;
}
