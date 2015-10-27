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

  // Exported menu link: main-menu_alla-investerare:investerare/lista
  $menu_links['main-menu_alla-investerare:investerare/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'investerare/lista',
    'router_path' => 'investerare/lista',
    'link_title' => 'Alla investerare',
    'options' => array(
      'identifier' => 'main-menu_alla-investerare:investerare/lista',
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
    'parent_identifier' => 'main-menu_investerare:investerare',
  );
  // Exported menu link: main-menu_investerare:investerare
  $menu_links['main-menu_investerare:investerare'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'investerare',
    'router_path' => 'investerare',
    'link_title' => 'Investerare',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_investerare:investerare',
      'attributes' => array(
        'id' => 'investors',
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
  // Exported menu link: main-menu_kontaktpersoner:investerare/kontaktperson
  $menu_links['main-menu_kontaktpersoner:investerare/kontaktperson'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'investerare/kontaktperson',
    'router_path' => 'investerare/kontaktperson',
    'link_title' => 'Kontaktpersoner',
    'options' => array(
      'attributes' => array(
        'id' => 'document-log',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_kontaktpersoner:investerare/kontaktperson',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_investerare:investerare',
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
    'parent_identifier' => 'main-menu_investerare:investerare',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alla investerare');
  t('Investerare');
  t('Kontaktpersoner');
  t('Lägg till investerare');

  return $menu_links;
}
