<?php
/**
 * @file
 * f_core.default_front_page_presets.inc
 */

/**
 * Implements hook_default_front_page_presets().
 */
function f_core_default_front_page_presets() {
  $export = array();

  $front_page_preset = new stdClass();
  $front_page_preset->disabled = FALSE; /* Edit this to true to make a default front_page_preset disabled initially */
  $front_page_preset->api_version = 2;
  $front_page_preset->id = '1';
  $front_page_preset->role = 'Administratör';
  $front_page_preset->mode = '';
  $front_page_preset->data = '';
  $front_page_preset->filter_format = '';
  $front_page_preset->weight = 0;
  $export['Administratör'] = $front_page_preset;

  $front_page_preset = new stdClass();
  $front_page_preset->disabled = FALSE; /* Edit this to true to make a default front_page_preset disabled initially */
  $front_page_preset->api_version = 2;
  $front_page_preset->id = '3';
  $front_page_preset->role = 'Användare';
  $front_page_preset->mode = 'redirect';
  $front_page_preset->data = 'dokument/lista';
  $front_page_preset->filter_format = '';
  $front_page_preset->weight = 0;
  $export['Användare'] = $front_page_preset;

  $front_page_preset = new stdClass();
  $front_page_preset->disabled = FALSE; /* Edit this to true to make a default front_page_preset disabled initially */
  $front_page_preset->api_version = 2;
  $front_page_preset->id = '5';
  $front_page_preset->role = 'Dokument moderator';
  $front_page_preset->mode = 'redirect';
  $front_page_preset->data = 'dokument/lista';
  $front_page_preset->filter_format = '';
  $front_page_preset->weight = 0;
  $export['Dokument moderator'] = $front_page_preset;

  $front_page_preset = new stdClass();
  $front_page_preset->disabled = FALSE; /* Edit this to true to make a default front_page_preset disabled initially */
  $front_page_preset->api_version = 2;
  $front_page_preset->id = '6';
  $front_page_preset->role = 'Dokument skapare';
  $front_page_preset->mode = 'redirect';
  $front_page_preset->data = 'dokument/lista';
  $front_page_preset->filter_format = '';
  $front_page_preset->weight = 0;
  $export['Dokument skapare'] = $front_page_preset;

  $front_page_preset = new stdClass();
  $front_page_preset->disabled = FALSE; /* Edit this to true to make a default front_page_preset disabled initially */
  $front_page_preset->api_version = 2;
  $front_page_preset->id = '7';
  $front_page_preset->role = 'Granskare';
  $front_page_preset->mode = '';
  $front_page_preset->data = '';
  $front_page_preset->filter_format = '';
  $front_page_preset->weight = 0;
  $export['Granskare'] = $front_page_preset;

  $front_page_preset = new stdClass();
  $front_page_preset->disabled = FALSE; /* Edit this to true to make a default front_page_preset disabled initially */
  $front_page_preset->api_version = 2;
  $front_page_preset->id = '8';
  $front_page_preset->role = 'Redaktör';
  $front_page_preset->mode = '';
  $front_page_preset->data = '';
  $front_page_preset->filter_format = '';
  $front_page_preset->weight = 0;
  $export['Redaktör'] = $front_page_preset;

  $front_page_preset = new stdClass();
  $front_page_preset->disabled = FALSE; /* Edit this to true to make a default front_page_preset disabled initially */
  $front_page_preset->api_version = 2;
  $front_page_preset->id = '2';
  $front_page_preset->role = 'anonymous user';
  $front_page_preset->mode = '';
  $front_page_preset->data = '';
  $front_page_preset->filter_format = '';
  $front_page_preset->weight = 0;
  $export['anonymous user'] = $front_page_preset;

  $front_page_preset = new stdClass();
  $front_page_preset->disabled = FALSE; /* Edit this to true to make a default front_page_preset disabled initially */
  $front_page_preset->api_version = 2;
  $front_page_preset->id = '4';
  $front_page_preset->role = 'authenticated user';
  $front_page_preset->mode = '';
  $front_page_preset->data = '';
  $front_page_preset->filter_format = '';
  $front_page_preset->weight = 0;
  $export['authenticated user'] = $front_page_preset;

  return $export;
}
