<?php
/**
 * @file
 * f_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "config_perms" && $api == "config_perms") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
function f_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function f_core_default_message_type() {
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
          "value" : "[message:user:name] \\u00f6ppnade dokumentet \\u003Ca href=\\u0022[message:field-message-reference:url]\\u0022\\u003E[message:field-message-reference:title]\\u003C\\/a\\u003E den [current-date:short]",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] \\u00f6ppnade dokumentet \\u003Ca href=\\u0022[message:field-message-reference:url]\\u0022\\u003E[message:field-message-reference:title]\\u003C\\/a\\u003E den [current-date:short]\\u003C\\/p\\u003E\\n"
        }
      ],
      "sv" : [
        {
          "value" : "[message:user:name] \\u00f6ppnade dokumentet \\u003Ca href=\\u0022[message:field-message-reference:url]\\u0022\\u003E[message:field-message-reference:title]\\u003C\\/a\\u003E den [current-date:short]",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] \\u00f6ppnade dokumentet \\u003Ca href=\\u0022[message:field-message-reference:url]\\u0022\\u003E[message:field-message-reference:title]\\u003C\\/a\\u003E den [current-date:short]\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function f_core_node_info() {
  $items = array(
    'document' => array(
      'name' => t('Dokument'),
      'base' => 'node_content',
      'description' => t('Grundläggande dokument'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_themekey_features_rule_chain().
 */
function f_core_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'user/%/yubikey',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'f_core',
    ),
    'string' => '"drupal:path = user/%/yubikey >>> ThemeKeyAdminTheme"',
    'childs' => array(),
  ),
);

return $rules;
}
