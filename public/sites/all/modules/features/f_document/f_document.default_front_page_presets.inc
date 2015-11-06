<?php
/**
 * @file
 * f_document.default_front_page_presets.inc
 */

/**
 * Implements hook_default_front_page_presets().
 */
function f_document_default_front_page_presets() {
  $export = array();

  $front_page_preset = new stdClass();
  $front_page_preset->disabled = FALSE; /* Edit this to true to make a default front_page_preset disabled initially */
  $front_page_preset->api_version = 2;
  $front_page_preset->id = '9';
  $front_page_preset->role = 'Dokumentmoderator';
  $front_page_preset->mode = 'redirect';
  $front_page_preset->data = 'dokument/lista';
  $front_page_preset->filter_format = '';
  $front_page_preset->weight = 0;
  $export['Dokumentmoderator'] = $front_page_preset;

  $front_page_preset = new stdClass();
  $front_page_preset->disabled = FALSE; /* Edit this to true to make a default front_page_preset disabled initially */
  $front_page_preset->api_version = 2;
  $front_page_preset->id = '10';
  $front_page_preset->role = 'Dokumentskapare';
  $front_page_preset->mode = 'redirect';
  $front_page_preset->data = 'dokument/lista';
  $front_page_preset->filter_format = '';
  $front_page_preset->weight = 0;
  $export['Dokumentskapare'] = $front_page_preset;

  return $export;
}
