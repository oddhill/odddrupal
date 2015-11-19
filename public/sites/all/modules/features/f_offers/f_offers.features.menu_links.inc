<?php
/**
 * @file
 * f_offers.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_offers_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_alla-erbjudanden:erbjudanden/lista.
  $menu_links['main-menu_alla-erbjudanden:erbjudanden/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'erbjudanden/lista',
    'router_path' => 'erbjudanden/lista',
    'link_title' => 'Alla erbjudanden',
    'options' => array(
      'identifier' => 'main-menu_alla-erbjudanden:erbjudanden/lista',
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
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_erbjudanden:erbjudanden',
  );
  // Exported menu link: main-menu_erbjudanden:erbjudanden.
  $menu_links['main-menu_erbjudanden:erbjudanden'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'erbjudanden',
    'router_path' => 'erbjudanden',
    'link_title' => 'Erbjudanden',
    'options' => array(
      'identifier' => 'main-menu_erbjudanden:erbjudanden',
      'attributes' => array(
        'id' => 'offers',
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
    'weight' => -40,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alla erbjudanden');
  t('Erbjudanden');

  return $menu_links;
}
