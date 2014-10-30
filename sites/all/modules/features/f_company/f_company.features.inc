<?php
/**
 * @file
 * f_company.features.inc
 */

/**
 * Implements hook_ccl_features_preset().
 */
function f_company_ccl_features_preset() {
  return array(
    'Lägg till bolag' => array(
      'type' => 'local_action',
      'title' => 'Lägg till bolag',
      'link' => 'node/add/company',
      'options' => 'a:10:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:15:"advanced_target";s:7:"default";s:12:"node_options";s:4:"node";s:9:"node_type";s:7:"company";s:7:"node_id";s:7:" [nid:]";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:5:"bolag";s:8:"la_types";a:1:{s:7:"company";i:0;}s:8:"la_roles";a:3:{i:1;i:0;i:2;i:0;i:3;i:0;}}',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function f_company_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_company_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_company_node_info() {
  $items = array(
    'company' => array(
      'name' => t('Bolag'),
      'base' => 'node_content',
      'description' => t('Ett bolag fyller ingen funktion av sig själv, utan används för att knyta kapitalanskaffningar till sig. Detta görs när du lägger till en ny kapitalanskaffning.'),
      'has_title' => '1',
      'title_label' => t('Bolagsnamn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
