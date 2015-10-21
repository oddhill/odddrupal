<?php
/**
 * @file
 * f_verification.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_verification_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function f_verification_eck_bundle_info() {
  $items = array(
    '' => array(
      'machine_name' => NULL,
      'entity_type' => NULL,
      'name' => NULL,
      'label' => NULL,
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function f_verification_eck_entity_type_info() {
  $items = array(
    '' => array(
      'name' => NULL,
      'label' => NULL,
      'properties' => NULL,
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function f_verification_node_info() {
  $items = array(
    'ctrl' => array(
      'name' => t('Kontrolluppgift'),
      'base' => 'node_content',
      'description' => t('Entitet för kontrolluppgift'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
