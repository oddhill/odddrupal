<?php
/**
 * @file
 * f_offer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_offer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_offer_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function f_offer_eck_bundle_info() {
  $items = array(
    'offer_offer' => array(
      'machine_name' => 'offer_offer',
      'entity_type' => 'offer',
      'name' => 'offer',
      'label' => 'Erbjudande',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function f_offer_eck_entity_type_info() {
  $items = array(
    'offer' => array(
      'name' => 'offer',
      'label' => 'Erbjudande',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
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
