<?php
/**
 * @file
 * f_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function f_core_taxonomy_default_vocabularies() {
  return array(
    'document_type' => array(
      'name' => 'Dokument typ',
      'machine_name' => 'document_type',
      'description' => 'Lista på dokument typer',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'industries' => array(
      'name' => 'Brancher',
      'machine_name' => 'industries',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
