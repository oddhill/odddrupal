<?php
/**
 * @file
 * f_company.features.inc
 */

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
