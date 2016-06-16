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
    'Lägg till kundbolag' => array(
      'type' => 'local_action',
      'title' => 'Lägg till kundbolag',
      'link' => 'node/add/company',
      'options' => 'a:10:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:15:"advanced_target";s:7:"default";s:12:"node_options";s:4:"node";s:9:"node_type";s:7:"company";s:7:"node_id";s:28:" [nid: [nid: [nid: [nid:]]]]";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:15:"kundbolag/lista";s:8:"la_types";a:2:{s:7:"company";i:0;s:15:"capital_raising";i:0;}s:8:"la_roles";a:3:{i:1;i:0;i:2;i:0;i:3;i:0;}}',
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
function f_company_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_company_node_info() {
  $items = array(
    'company' => array(
      'name' => t('Kundbolag'),
      'base' => 'node_content',
      'description' => t('Ett kundbolag fyller ingen funktion av sig själv, utan används för att knyta transaktioner till sig. Detta görs när du lägger till en ny transaktion.'),
      'has_title' => '1',
      'title_label' => t('Bolagsnamn'),
      'help' => '',
    ),
    'conflict' => array(
      'name' => t('Intressekonflikter'),
      'base' => 'node_content',
      'description' => t('Kontroll för kundgodkännande'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'credit_risk' => array(
      'name' => t('Kredit & Motpartsrisk'),
      'base' => 'node_content',
      'description' => t('Kontroll för kundgodkännande'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'customer_approval' => array(
      'name' => t('Kundgodkännande'),
      'base' => 'node_content',
      'description' => t('Kundgodkännande används på offerter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'customer_history' => array(
      'name' => t('Kundens historik'),
      'base' => 'node_content',
      'description' => t('Kontroll för kundgodkännande'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'final_approval' => array(
      'name' => t('Slutgiltigt omdöme'),
      'base' => 'node_content',
      'description' => t('Kontroll för kundgodkännande'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'money_launder' => array(
      'name' => t('Penningtvätt'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'proposal' => array(
      'name' => t('Offert'),
      'base' => 'node_content',
      'description' => t('Används för att skapa offerter som sedan används för att skapa erbjudande'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'suitability_assessment' => array(
      'name' => t('Passandebedömning'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
