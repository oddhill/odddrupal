<?php

/**
 * Implementation of hook_strongarm().
 */
function odd_drupal_sevenup_settings_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sevenUp_borderColor';
  $strongarm->value = '#6699ff';

  $export['sevenUp_borderColor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sevenUp_downloadLink';
  $strongarm->value = '0';

  $export['sevenUp_downloadLink'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sevenUp_enableClosing';
  $strongarm->value = 'true';

  $export['sevenUp_enableClosing'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sevenUp_enableQuitBuggingMe';
  $strongarm->value = 'true';

  $export['sevenUp_enableQuitBuggingMe'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sevenUp_lightboxColor';
  $strongarm->value = '#ffffff';

  $export['sevenUp_lightboxColor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sevenUp_overlayColor';
  $strongarm->value = '#000000';

  $export['sevenUp_overlayColor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sevenUp_showToAllBrowsers';
  $strongarm->value = 'false';

  $export['sevenUp_showToAllBrowsers'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sevenup_black_plugin';
  $strongarm->value = '1';

  $export['sevenup_black_plugin'] = $strongarm;
  return $export;
}
