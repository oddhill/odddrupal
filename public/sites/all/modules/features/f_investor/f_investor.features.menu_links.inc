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

  // Exported menu link: main-menu_alla-avtalsparter:avtalsparter/lista.
  $menu_links['main-menu_alla-avtalsparter:avtalsparter/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'avtalsparter/lista',
    'router_path' => 'avtalsparter/lista',
    'link_title' => 'Alla avtalsparter',
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
      'identifier' => 'main-menu_alla-avtalsparter:avtalsparter/lista',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_avtalsparter:avtalsparter',
  );
  // Exported menu link: main-menu_alla-kontaktpersoner:kontaktpersoner/lista.
  $menu_links['main-menu_alla-kontaktpersoner:kontaktpersoner/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kontaktpersoner/lista',
    'router_path' => 'kontaktpersoner/lista',
    'link_title' => 'Alla kontaktpersoner',
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
      'identifier' => 'main-menu_alla-kontaktpersoner:kontaktpersoner/lista',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_kontaktpersoner:kontaktpersoner',
  );
  // Exported menu link: main-menu_avtalsparter:avtalsparter.
  $menu_links['main-menu_avtalsparter:avtalsparter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'avtalsparter',
    'router_path' => 'avtalsparter',
    'link_title' => 'Avtalsparter',
    'options' => array(
      'attributes' => array(
        'id' => 'investors',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_avtalsparter:avtalsparter',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_kontaktpersoner:kontaktpersoner.
  $menu_links['main-menu_kontaktpersoner:kontaktpersoner'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kontaktpersoner',
    'router_path' => 'kontaktpersoner',
    'link_title' => 'Kontaktpersoner',
    'options' => array(
      'identifier' => 'main-menu_kontaktpersoner:kontaktpersoner',
      'attributes' => array(
        'id' => 'persons',
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
    'weight' => -45,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alla avtalsparter');
  t('Alla kontaktpersoner');
  t('Avtalsparter');
  t('Kontaktpersoner');

  return $menu_links;
}
