<?php
/**
 * @file
 * f_investor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_investor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_investor_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function f_investor_eck_bundle_info() {
  $items = array(
    'investor_company' => array(
      'machine_name' => 'investor_company',
      'entity_type' => 'investor',
      'name' => 'company',
      'label' => 'Bolag',
    ),
    'investor_person' => array(
      'machine_name' => 'investor_person',
      'entity_type' => 'investor',
      'name' => 'person',
      'label' => 'Privatperson',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function f_investor_eck_entity_type_info() {
  $items = array(
    'investor' => array(
      'name' => 'investor',
      'label' => 'Investerare',
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
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
