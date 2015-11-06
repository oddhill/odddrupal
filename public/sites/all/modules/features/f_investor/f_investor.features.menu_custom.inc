<?php
/**
 * @file
 * f_investor.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function f_investor_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => '<em>Huvudmenyn</em> används på många webbplatser för att visa webbplatsens huvudsektioner, ofta i en navigationsrad högst upp.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<em>Huvudmenyn</em> används på många webbplatser för att visa webbplatsens huvudsektioner, ofta i en navigationsrad högst upp.');
  t('Main menu');


  return $menus;
}
