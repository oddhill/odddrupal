<?php

/**
 * Implementation of hook_strongarm().
 */
function odd_drupal_simplemenu_settings_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_detect_popup';
  $strongarm->value = 1;

  $export['simplemenu_detect_popup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_dropdown_zindex';
  $strongarm->value = '9999';

  $export['simplemenu_dropdown_zindex'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_effect';
  $strongarm->value = 'opacity';

  $export['simplemenu_effect'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_effect_speed';
  $strongarm->value = 'fast';

  $export['simplemenu_effect_speed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_element';
  $strongarm->value = 'body';

  $export['simplemenu_element'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_element_method';
  $strongarm->value = 'prepend';

  $export['simplemenu_element_method'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_exclusions';
  $strongarm->value = array(
    'cube' => 0,
    'rubik' => 0,
    'tao' => 0,
    'bluemarine' => 0,
    'chameleon' => 0,
    'marvin' => 0,
    'minnelli' => 0,
    'pushbutton' => 0,
    'ODDSITE' => 0,
    'oddtao' => 0,
    'garland' => 0,
  );

  $export['simplemenu_exclusions'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_fix';
  $strongarm->value = 'scroll';

  $export['simplemenu_fix'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_hide_delay';
  $strongarm->value = '800';

  $export['simplemenu_hide_delay'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_hide_when_empty';
  $strongarm->value = 0;

  $export['simplemenu_hide_when_empty'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_menubar_zindex';
  $strongarm->value = '9999';

  $export['simplemenu_menubar_zindex'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_running';
  $strongarm->value = FALSE;

  $export['simplemenu_running'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_superfish_version';
  $strongarm->value = 'superfish-1.4.1.js';

  $export['simplemenu_superfish_version'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_theme';
  $strongarm->value = 'simpleblack';

  $export['simplemenu_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_uid1';
  $strongarm->value = 0;

  $export['simplemenu_uid1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_visibility_operator';
  $strongarm->value = '0';

  $export['simplemenu_visibility_operator'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_visibility_pages';
  $strongarm->value = 'imce*
';

  $export['simplemenu_visibility_pages'] = $strongarm;
  return $export;
}
