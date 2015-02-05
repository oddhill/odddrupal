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
  $items['offer_comm_changed'] = entity_import('message_type', '{
    "name" : "offer_comm_changed",
    "description" : "Erbjudande \\u00e5tagande \\u00e4ndrat",
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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har ett \\u00e5tagande p\\u00e5 [message:field-msg-offer-created-offer:field-offer-amount] p\\u00e5 \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har ett \\u00e5tagande p\\u00e5 [message:field-msg-offer-created-offer:field-offer-amount] p\\u00e5 \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
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
  $items['offer_first_contact'] = entity_import('message_type', '{
    "name" : "offer_first_contact",
    "description" : "Erbjudande kontaktat",
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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har kontaktats ang\\u00e5ende \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E den [message:field-msg-offer-created-offer:field-offer-first-contact:short].",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har kontaktats ang\\u00e5ende \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E den [message:field-msg-offer-created-offer:field-offer-first-contact:short].\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['offer_guar_changed'] = entity_import('message_type', '{
    "name" : "offer_guar_changed",
    "description" : "Erbjudande garant \\u00e4ndrat",
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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har en garant p\\u00e5 [message:field-msg-offer-created-offer:field-offer-amount-guar] p\\u00e5 \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har en garant p\\u00e5 [message:field-msg-offer-created-offer:field-offer-amount-guar] p\\u00e5 \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
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
  $items['offer_signed'] = entity_import('message_type', '{
    "name" : "offer_signed",
    "description" : "Erbjudande tecknat",
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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har tecknats f\\u00f6r \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har tecknats f\\u00f6r \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['offer_uninterested'] = entity_import('message_type', '{
    "name" : "offer_uninterested",
    "description" : "Erbjudande ointresserat",
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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har markerats som ointresserad av \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har markerats som ointresserad av \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
