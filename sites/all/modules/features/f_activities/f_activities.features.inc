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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E l\\u00e4mnade ett \\u00e5tagande p\\u00e5 [message:field-msg-offer-created-offer:field_offer_amount].",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E l\\u00e4mnade ett \\u00e5tagande p\\u00e5 [message:field-msg-offer-created-offer:field_offer_amount].\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "L\\u00e4mnade ett \\u00e5tagande p\\u00e5 [message:field-msg-offer-created-offer:field_offer_amount] f\\u00f6r \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EL\\u00e4mnade ett \\u00e5tagande p\\u00e5 [message:field-msg-offer-created-offer:field_offer_amount] f\\u00f6r \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har lagts till.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har lagts till.\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Har lagts till p\\u00e5 \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EHar lagts till p\\u00e5 \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
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
          "value" : "F\\u00f6rsta kontakt med \\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E togs den [message:field-msg-offer-created-offer:field_offer_first_contact].",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EF\\u00f6rsta kontakt med \\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E togs den [message:field-msg-offer-created-offer:field_offer_first_contact].\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "F\\u00f6rsta kontakt ang\\u00e5ende \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E togs den [message:field-msg-offer-created-offer:field_offer_first_contact].",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EF\\u00f6rsta kontakt ang\\u00e5ende \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E togs den [message:field-msg-offer-created-offer:field_offer_first_contact].\\u003C\\/p\\u003E\\n"
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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E l\\u00e4mnade en garant p\\u00e5 [message:field-msg-offer-created-offer:field_offer_amount_guar].",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E l\\u00e4mnade en garant p\\u00e5 [message:field-msg-offer-created-offer:field_offer_amount_guar].\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "L\\u00e4mnade en garant p\\u00e5 [message:field-msg-offer-created-offer:field_offer_amount_guar] f\\u00f6r \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EL\\u00e4mnade en garant p\\u00e5 [message:field-msg-offer-created-offer:field_offer_amount_guar] f\\u00f6r \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har markerats som intresserad.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har markerats som intresserad.\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Har markerats som intresserad av \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EHar markerats som intresserad av \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har tecknats.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har tecknats.\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Tecknades f\\u00f6r \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003ETecknades f\\u00f6r \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
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
          "value" : "\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har markerats som ointresserad.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-shared-investor:url]\\u0022\\u003E[message:field-shared-investor:title]\\u003C\\/a\\u003E har markerats som ointresserad.\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Har markerats som ointresserad av \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EHar markerats som ointresserad av \\u003Ca href=\\u0022[message:field-shared-cap-rais:url]\\u0022\\u003E[message:field-shared-cap-rais:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
