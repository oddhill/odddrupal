<?php

/**
 * Implementation of hook_strongarm().
 */
function odd_drupal_mimemail_settings_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_alter';
  $strongarm->value = 1;

  $export['mimemail_alter'] = $strongarm;
  return $export;
}
