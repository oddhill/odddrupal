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
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "sv",
    "arguments" : null,
    "message_text" : { "sv" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har lagts till p\\u00e5 \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har lagts till p\\u00e5 \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['offer_interested'] = entity_import('message_type', '{
    "name" : "offer_interested",
    "description" : "Erbjudande intresserat",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "sv",
    "arguments" : null,
    "message_text" : { "sv" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har markerats som intresserad av \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har markerats som intresserad av \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
