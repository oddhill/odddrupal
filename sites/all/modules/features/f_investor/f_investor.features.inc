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
