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

  // Exported menu link: main-menu_administrera-dokument:dokument/administrera
  $menu_links['main-menu_administrera-dokument:dokument/administrera'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dokument/administrera',
    'router_path' => 'dokument/administrera',
    'link_title' => 'Administrera dokument',
    'options' => array(
      'identifier' => 'main-menu_administrera-dokument:dokument/administrera',
      'attributes' => array(
        'id' => 'administer',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dokument:dokument',
  );
  // Exported menu link: main-menu_administrera-manualer:manualer/administrera
  $menu_links['main-menu_administrera-manualer:manualer/administrera'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manualer/administrera',
    'router_path' => 'manualer/administrera',
    'link_title' => 'Administrera manualer',
    'options' => array(
      'attributes' => array(
        'id' => 'administer',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_administrera-manualer:manualer/administrera',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_manualer:manualer',
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
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dokument:dokument',
  );
  // Exported menu link: main-menu_alla-manualer:manualer/lista
  $menu_links['main-menu_alla-manualer:manualer/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manualer/lista',
    'router_path' => 'manualer/lista',
    'link_title' => 'Alla manualer',
    'options' => array(
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
      'identifier' => 'main-menu_alla-manualer:manualer/lista',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_manualer:manualer',
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
  // Exported menu link: main-menu_dokumentlogg:dokument/logg
  $menu_links['main-menu_dokumentlogg:dokument/logg'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dokument/logg',
    'router_path' => 'dokument/logg',
    'link_title' => 'Dokumentlogg',
    'options' => array(
      'identifier' => 'main-menu_dokumentlogg:dokument/logg',
      'attributes' => array(
        'id' => 'document-log',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dokument:dokument',
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
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dokument:dokument',
  );
  // Exported menu link: main-menu_lst-per-anvndare:dokument/last-per-anvandare
  $menu_links['main-menu_lst-per-anvndare:dokument/last-per-anvandare'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dokument/last-per-anvandare',
    'router_path' => 'dokument/last-per-anvandare',
    'link_title' => 'Läst per användare',
    'options' => array(
      'identifier' => 'main-menu_lst-per-anvndare:dokument/last-per-anvandare',
      'attributes' => array(
        'id' => 'read-per-user',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dokument:dokument',
  );
  // Exported menu link: main-menu_lst-per-dokument:dokument/last-per-dokument
  $menu_links['main-menu_lst-per-dokument:dokument/last-per-dokument'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dokument/last-per-dokument',
    'router_path' => 'dokument/last-per-dokument',
    'link_title' => 'Läst per dokument',
    'options' => array(
      'identifier' => 'main-menu_lst-per-dokument:dokument/last-per-dokument',
      'attributes' => array(
        'id' => 'read-per-doc',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dokument:dokument',
  );
  // Exported menu link: main-menu_sortera-dokument:dokument/sortera
  $menu_links['main-menu_sortera-dokument:dokument/sortera'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dokument/sortera',
    'router_path' => 'dokument/sortera',
    'link_title' => 'Sortera dokument',
    'options' => array(
      'identifier' => 'main-menu_sortera-dokument:dokument/sortera',
      'attributes' => array(
        'id' => 'documents-sort',
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
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dokument:dokument',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Administrera dokument');
  t('Administrera manualer');
  t('Alla dokument');
  t('Alla manualer');
  t('Dokument');
  t('Dokumentlogg');
  t('Lägg till dokument');
  t('Läst per användare');
  t('Läst per dokument');
  t('Sortera dokument');

  return $menu_links;
}
