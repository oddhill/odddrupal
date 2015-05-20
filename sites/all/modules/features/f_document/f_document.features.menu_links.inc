<?php
/**
 * @file
 * f_document.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_document_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_administrera-dokument:dokument/admin
  $menu_links['main-menu_administrera-dokument:dokument/admin'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dokument/admin',
    'router_path' => 'dokument/admin',
    'link_title' => 'Administrera dokument',
    'options' => array(
      'identifier' => 'main-menu_administrera-dokument:dokument/admin',
      'attributes' => array(
        'id' => 'administer',
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
    'parent_identifier' => 'main-menu_dokument:dokument',
  );
  // Exported menu link: main-menu_alla-dokument:dokument/lista
  $menu_links['main-menu_alla-dokument:dokument/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dokument/lista',
    'router_path' => 'dokument/lista',
    'link_title' => 'Alla dokument',
    'options' => array(
      'identifier' => 'main-menu_alla-dokument:dokument/lista',
      'attributes' => array(
        'class' => array(
          0 => 'all',
        ),
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
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dokument:dokument',
  );
  // Exported menu link: main-menu_dokument:dokument
  $menu_links['main-menu_dokument:dokument'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dokument',
    'router_path' => 'dokument',
    'link_title' => 'Dokument',
    'options' => array(
      'identifier' => 'main-menu_dokument:dokument',
      'attributes' => array(
        'id' => 'documents',
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
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_lgg-till-dokument:node/add/document
  $menu_links['main-menu_lgg-till-dokument:node/add/document'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/document',
    'router_path' => 'node/add/document',
    'link_title' => 'Lägg till dokument',
    'options' => array(
      'identifier' => 'main-menu_lgg-till-dokument:node/add/document',
      'attributes' => array(
        'class' => array(
          0 => 'add',
        ),
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
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dokument:dokument',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administrera dokument');
  t('Alla dokument');
  t('Dokument');
  t('Lägg till dokument');


  return $menu_links;
}
