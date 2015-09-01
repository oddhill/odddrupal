<?php
/**
 * @file
 * f_investor.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function f_investor_taxonomy_default_vocabularies() {
  return array(
    'intressen' => array(
      'name' => 'Intressen',
      'machine_name' => 'intressen',
      'description' => 'Intressen för investerare',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
