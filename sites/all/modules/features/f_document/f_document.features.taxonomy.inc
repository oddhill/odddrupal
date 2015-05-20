<?php
/**
 * @file
 * f_document.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function f_document_taxonomy_default_vocabularies() {
  return array(
    'document_type' => array(
      'name' => 'Dokument typ',
      'machine_name' => 'document_type',
      'description' => 'Lista på dokument typer',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
