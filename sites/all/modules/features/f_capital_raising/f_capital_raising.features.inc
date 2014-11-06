<?php
/**
 * @file
 * f_capital_raising.features.inc
 */

/**
 * Implements hook_ccl_features_preset().
 */
function f_capital_raising_ccl_features_preset() {
  return array(
    'Lägg till transaktion' => array(
      'type' => 'local_action',
      'title' => 'Lägg till transaktion',
      'link' => 'node/add/capital-raising',
      'options' => 'a:10:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:15:"advanced_target";s:7:"default";s:12:"node_options";s:4:"node";s:9:"node_type";s:7:"company";s:7:"node_id";s:0:"";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:13:"transaktioner";s:8:"la_types";a:2:{s:7:"company";i:0;s:15:"capital_raising";i:0;}s:8:"la_roles";a:3:{i:1;i:0;i:2;i:0;i:3;i:0;}}',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function f_capital_raising_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
 * Implements hook_views_api().
 */
function f_capital_raising_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_capital_raising_node_info() {
  $items = array(
    'capital_raising' => array(
      'name' => t('Transaktion'),
      'base' => 'node_content',
      'description' => t('Transaktioner utgör navet för webbplatsen. Dessa knyts till ett bolag, och innehåller all information som är relevant för transaktionen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
