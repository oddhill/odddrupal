<?php

/**
 * Implementation of hook_strongarm().
 */
function odd_drupal_themekey_settings_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_override_custom_theme';
  $strongarm->value = 1;

  $export['themekey_override_custom_theme'] = $strongarm;
  return $export;
}
