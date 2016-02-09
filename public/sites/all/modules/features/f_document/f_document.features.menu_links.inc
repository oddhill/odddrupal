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

  // Exported menu link: main-menu_administrera-dokument:dokument/administrera.
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
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_regelverk:dokument',
  );
  // Exported menu link: main-menu_administrera-mallar:mallar/administrera.
  $menu_links['main-menu_administrera-mallar:mallar/administrera'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mallar/administrera',
    'router_path' => 'mallar/administrera',
    'link_title' => 'Administrera mallar',
    'options' => array(
      'attributes' => array(
        'id' => 'administer',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_administrera-mallar:mallar/administrera',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_mallar:mallar',
  );
  // Exported menu link: main-menu_administrera-manualer:manualer/administrera.
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
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_manualer:manualer',
  );
  // Exported menu link: main-menu_alla-dokument:dokument/lista.
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
    'parent_identifier' => 'main-menu_regelverk:dokument',
  );
  // Exported menu link: main-menu_alla-mallar:mallar/lista.
  $menu_links['main-menu_alla-mallar:mallar/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mallar/lista',
    'router_path' => 'mallar/lista',
    'link_title' => 'Alla mallar',
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
      'identifier' => 'main-menu_alla-mallar:mallar/lista',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_mallar:mallar',
  );
  // Exported menu link: main-menu_alla-manualer:manualer/lista.
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
  // Exported menu link: main-menu_dokumentlogg:dokument/logg.
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
    'parent_identifier' => 'main-menu_regelverk:dokument',
  );
  // Exported menu link: main-menu_lgg-till-dokument:node/add/document.
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
    'parent_identifier' => 'main-menu_regelverk:dokument',
  );
  // Exported menu link: main-menu_lst-per-anvndare:dokument/last-per-anvandare.
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
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_regelverk:dokument',
  );
  // Exported menu link: main-menu_lst-per-dokument:dokument/last-per-dokument.
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
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_regelverk:dokument',
  );
  // Exported menu link: main-menu_mallar:mallar.
  $menu_links['main-menu_mallar:mallar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mallar',
    'router_path' => 'mallar',
    'link_title' => 'Mallar',
    'options' => array(
      'attributes' => array(
        'id' => 'manuals',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_mallar:mallar',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_manualer:manualer.
  $menu_links['main-menu_manualer:manualer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manualer',
    'router_path' => 'manualer',
    'link_title' => 'Manualer',
    'options' => array(
      'identifier' => 'main-menu_manualer:manualer',
      'attributes' => array(
        'id' => 'manuals',
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
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: main-menu_regelverk:dokument.
  $menu_links['main-menu_regelverk:dokument'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dokument',
    'router_path' => 'dokument',
    'link_title' => 'Regelverk',
    'options' => array(
      'identifier' => 'main-menu_regelverk:dokument',
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
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sortera-dokument:dokument/sortera.
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
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_regelverk:dokument',
  );
  // Exported menu link: main-menu_sortera-mallar:mallar/sortera.
  $menu_links['main-menu_sortera-mallar:mallar/sortera'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mallar/sortera',
    'router_path' => 'mallar/sortera',
    'link_title' => 'Sortera mallar',
    'options' => array(
      'attributes' => array(
        'id' => 'manuals-sort',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_sortera-mallar:mallar/sortera',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_mallar:mallar',
  );
  // Exported menu link: main-menu_sortera-manualer:manualer/sortera.
  $menu_links['main-menu_sortera-manualer:manualer/sortera'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manualer/sortera',
    'router_path' => 'manualer/sortera',
    'link_title' => 'Sortera manualer',
    'options' => array(
      'identifier' => 'main-menu_sortera-manualer:manualer/sortera',
      'attributes' => array(
        'id' => 'manuals-sort',
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
    'parent_identifier' => 'main-menu_manualer:manualer',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Administrera dokument');
  t('Administrera mallar');
  t('Administrera manualer');
  t('Alla dokument');
  t('Alla mallar');
  t('Alla manualer');
  t('Dokumentlogg');
  t('Lägg till dokument');
  t('Läst per användare');
  t('Läst per dokument');
  t('Mallar');
  t('Manualer');
  t('Regelverk');
  t('Sortera dokument');
  t('Sortera mallar');
  t('Sortera manualer');

  return $menu_links;
}
