<?php
/**
 * @file
 * f_activities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_activities_ctools_plugin_api($module = NULL, $api = NULL) {
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
function f_activities_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function f_activities_default_message_type() {
  $items = array();
  $items['offer_created'] = entity_import('message_type', '{
    "name" : "offer_created",
    "description" : "Erbjudande skapat",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "sv" : [
        {
          "value" : "\\u003Cp\\u003EErbjudande har skapats.\\u003C\\/p\\u003E",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EErbjudande har skapats.\\u003C\\/p\\u003E"
        }
      ]
    }
  }');
  return $items;
}
