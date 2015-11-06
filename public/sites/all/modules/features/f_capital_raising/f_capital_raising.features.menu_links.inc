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

  // Exported menu link: main-menu_alla-erbjudande:erbjudande/lista.
  $menu_links['main-menu_alla-erbjudande:erbjudande/lista'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'erbjudande/lista',
    'router_path' => 'erbjudande/lista',
    'link_title' => 'Alla erbjudande',
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
      'identifier' => 'main-menu_alla-erbjudande:erbjudande/lista',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_erbjudande:erbjudande',
  );
  // Exported menu link: main-menu_erbjudande:erbjudande.
  $menu_links['main-menu_erbjudande:erbjudande'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'erbjudande',
    'router_path' => 'erbjudande',
    'link_title' => 'Erbjudande',
    'options' => array(
      'identifier' => 'main-menu_erbjudande:erbjudande',
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
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alla erbjudande');
  t('Erbjudande');

  return $menu_links;
}
