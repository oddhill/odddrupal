<?php
/**
 * @file
 * f_investor.features.inc
 */

/**
 * Implements hook_ccl_features_preset().
 */
function f_investor_ccl_features_preset() {
  return array(
    'Lägg till investerare' => array(
      'type' => 'local_action',
      'title' => 'Lägg till investerare',
      'link' => 'investerare/skapa',
      'options' => 'a:10:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:15:"advanced_target";s:7:"default";s:12:"node_options";s:4:"node";s:9:"node_type";s:7:"company";s:7:"node_id";s:14:" [nid: [nid:]]";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:17:"investerare/lista";s:8:"la_types";a:2:{s:7:"company";i:0;s:15:"capital_raising";i:0;}s:8:"la_roles";a:3:{i:1;i:0;i:2;i:0;i:3;i:0;}}',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function f_investor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
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
        'publish' => array(
          'label' => 'Publish',
          'type' => 'integer',
          'behavior' => '',
        ),
      ),
    ),
  );
  return $items;
}
