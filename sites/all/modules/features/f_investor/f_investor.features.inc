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
    'Lägg till avtalspart' => array(
      'type' => 'local_action',
      'title' => 'Lägg till avtalspart',
      'link' => 'avtalsparter/skapa',
      'options' => 'a:10:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:15:"advanced_target";s:7:"default";s:12:"node_options";s:4:"node";s:9:"node_type";s:7:"company";s:7:"node_id";s:35:" [nid: [nid: [nid: [nid: [nid:]]]]]";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:18:"avtalsparter/lista";s:8:"la_types";a:9:{s:14:"investor_bolag";i:0;s:15:"investor_privat";i:0;s:8:"document";i:0;s:4:"ctrl";i:0;s:7:"company";i:0;s:6:"manual";i:0;s:6:"person";i:0;s:15:"capital_raising";i:0;s:19:"transaction_history";i:0;}s:8:"la_roles";a:8:{i:1;i:0;i:2;i:0;i:3;i:0;i:5;i:0;i:4;i:0;i:9;i:0;i:8;i:0;i:10;i:0;}}',
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
    'contact_person_contact_person' => array(
      'machine_name' => 'contact_person_contact_person',
      'entity_type' => 'contact_person',
      'name' => 'contact_person',
      'label' => 'Contact person',
    ),
    'investor_company' => array(
      'machine_name' => 'investor_company',
      'entity_type' => 'investor',
      'name' => 'company',
      'label' => 'Bolag',
    ),
    'investor_lead' => array(
      'machine_name' => 'investor_lead',
      'entity_type' => 'investor',
      'name' => 'lead',
      'label' => 'Lead',
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
    'contact_person' => array(
      'name' => 'contact_person',
      'label' => 'Kontaktperson',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
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

/**
 * Implements hook_node_info().
 */
function f_investor_node_info() {
  $items = array(
    'investor_bolag' => array(
      'name' => t('Avtalspart bolag'),
      'base' => 'node_content',
      'description' => t('Bolag som kan investera'),
      'has_title' => '1',
      'title_label' => t('Bolagsnamn'),
      'help' => '',
    ),
    'investor_privat' => array(
      'name' => t('Avtalspart privat'),
      'base' => 'node_content',
      'description' => t('Person som kan investera'),
      'has_title' => '1',
      'title_label' => t('Namn'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Kontaktperson'),
      'has_title' => '1',
      'title_label' => t('Namn'),
      'help' => '',
    ),
    'transaction_history' => array(
      'name' => t('Transaktions historik'),
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
