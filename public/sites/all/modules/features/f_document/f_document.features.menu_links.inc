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

  // Exported menu link: main-menu_administrera-dokument:regelverk/administrera.
  $menu_links['main-menu_administrera-dokument:regelverk/administrera'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'regelverk/administrera',
    'router_path' => 'regelverk/administrera',
    'link_title' => 'Administrera dokument',
    'options' => array(
      'attributes' => array(
        'id' => 'administer',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_administrera-dokument:regelverk/administrera',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_regelverk:regelverk',
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
  // Exported menu link: main-menu_alla-dokument:regelverk/lista.
  $menu_links['main-menu_alla-dokument:regelverk/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'regelverk/lista',
    'router_path' => 'regelverk/lista',
    'link_title' => 'Alla dokument',
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
      'identifier' => 'main-menu_alla-dokument:regelverk/lista',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_regelverk:regelverk',
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
  // Exported menu link: main-menu_dokumentlogg:regelverk/logg.
  $menu_links['main-menu_dokumentlogg:regelverk/logg'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'regelverk/logg',
    'router_path' => 'regelverk/logg',
    'link_title' => 'Dokumentlogg',
    'options' => array(
      'attributes' => array(
        'id' => 'document-log',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_dokumentlogg:regelverk/logg',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_regelverk:regelverk',
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
    'parent_identifier' => 'main-menu_regelverk:regelverk',
  );
  // Exported menu link: main-menu_lst-per-anvndare:regelverk/last-per-anvandare.
  $menu_links['main-menu_lst-per-anvndare:regelverk/last-per-anvandare'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'regelverk/last-per-anvandare',
    'router_path' => 'regelverk/last-per-anvandare',
    'link_title' => 'Läst per användare',
    'options' => array(
      'attributes' => array(
        'id' => 'read-per-user',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_lst-per-anvndare:regelverk/last-per-anvandare',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_regelverk:regelverk',
  );
  // Exported menu link: main-menu_lst-per-dokument:regelverk/last-per-dokument.
  $menu_links['main-menu_lst-per-dokument:regelverk/last-per-dokument'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'regelverk/last-per-dokument',
    'router_path' => 'regelverk/last-per-dokument',
    'link_title' => 'Läst per dokument',
    'options' => array(
      'attributes' => array(
        'id' => 'read-per-doc',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_lst-per-dokument:regelverk/last-per-dokument',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_regelverk:regelverk',
  );
  // Exported menu link: main-menu_mallar:mallar.
  $menu_links['main-menu_mallar:mallar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mallar',
    'router_path' => 'mallar',
    'link_title' => 'Mallar',
    'options' => array(
      'identifier' => 'main-menu_mallar:mallar',
      'attributes' => array(
        'id' => 'templates',
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
  // Exported menu link: main-menu_regelverk:regelverk.
  $menu_links['main-menu_regelverk:regelverk'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'regelverk',
    'router_path' => 'regelverk',
    'link_title' => 'Regelverk',
    'options' => array(
      'identifier' => 'main-menu_regelverk:regelverk',
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
  // Exported menu link: main-menu_sortera-dokument:regelverk/sortera.
  $menu_links['main-menu_sortera-dokument:regelverk/sortera'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'regelverk/sortera',
    'router_path' => 'regelverk/sortera',
    'link_title' => 'Sortera dokument',
    'options' => array(
      'identifier' => 'main-menu_sortera-dokument:regelverk/sortera',
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
    'parent_identifier' => 'main-menu_regelverk:regelverk',
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
