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
