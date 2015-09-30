<?php
/**
 * @file
 * f_document.features.inc
 */

/**
 * Implements hook_ccl_features_preset().
 */
function f_document_ccl_features_preset() {
  return array(
    'Lägg till dokument' => array(
      'type' => 'local_action',
      'title' => 'Lägg till dokument',
      'link' => 'node/add/document',
      'options' => 'a:10:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:15:"advanced_target";s:7:"default";s:12:"node_options";s:4:"node";s:9:"node_type";s:8:"document";s:7:"node_id";s:0:"";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:14:"dokument/lista";s:8:"la_types";a:3:{s:8:"document";i:0;s:7:"company";i:0;s:15:"capital_raising";i:0;}s:8:"la_roles";a:7:{i:1;i:0;i:2;i:0;i:3;i:0;i:5;i:0;i:4;i:0;i:6;i:0;i:7;i:0;}}',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function f_document_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "config_perms" && $api == "config_perms") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "front_page" && $api == "default_front_page_presets") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_document_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function f_document_default_message_type() {
  $items = array();
  $items['document_view'] = entity_import('message_type', '{
    "name" : "document_view",
    "description" : "Dokument visning",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : {
      "en" : [
        {
          "value" : "[message:user:name] \\u00f6ppnade dokumentet \\u003Ca href=\\u0022[message:field-message-reference:url]\\u0022\\u003E[message:field-message-reference:title]\\u003C\\/a\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] \\u00f6ppnade dokumentet \\u003Ca href=\\u0022[message:field-message-reference:url]\\u0022\\u003E[message:field-message-reference:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ],
      "sv" : [
        {
          "value" : "[message:user:name] \\u00f6ppnade dokumentet \\u003Ca href=\\u0022[message:field-message-reference:url]\\u0022\\u003E[message:field-message-reference:title]\\u003C\\/a\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] \\u00f6ppnade dokumentet \\u003Ca href=\\u0022[message:field-message-reference:url]\\u0022\\u003E[message:field-message-reference:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function f_document_node_info() {
  $items = array(
    'document' => array(
      'name' => t('Dokument'),
      'base' => 'node_content',
      'description' => t('Grundläggande dokument'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'manual' => array(
      'name' => t('Manual'),
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
