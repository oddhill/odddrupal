<?php
/**
 * @file
 * f_verification.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_verification_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function f_verification_eck_bundle_info() {
  $items = array(
    'verification_verification' => array(
      'machine_name' => 'verification_verification',
      'entity_type' => 'verification',
      'name' => 'verification',
      'label' => 'Kontrolluppgift',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function f_verification_eck_entity_type_info() {
  $items = array(
    'verification' => array(
      'name' => 'verification',
      'label' => 'Kontrolluppgift',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
