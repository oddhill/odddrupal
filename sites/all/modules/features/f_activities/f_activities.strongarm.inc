<?php
/**
 * @file
 * f_activities.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_activities_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__offer_comm_changed';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msg_capital_raising' => array(
        'custom_settings' => TRUE,
      ),
      'msg_investor' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_capital_raising' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_investor' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'message__message_text__1' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'msg_capital_raising' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'msg_investor' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__offer_comm_changed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__offer_created';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msg_capital_raising' => array(
        'custom_settings' => TRUE,
      ),
      'msg_investor' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_capital_raising' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_investor' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'message__message_text__1' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'msg_capital_raising' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'msg_investor' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__offer_created'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__offer_first_contact';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msg_capital_raising' => array(
        'custom_settings' => TRUE,
      ),
      'msg_investor' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_capital_raising' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_investor' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'message__message_text__1' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'msg_capital_raising' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'msg_investor' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__offer_first_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__offer_guar_changed';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msg_capital_raising' => array(
        'custom_settings' => TRUE,
      ),
      'msg_investor' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_capital_raising' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_investor' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'message__message_text__1' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'msg_capital_raising' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'msg_investor' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__offer_guar_changed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__offer_interested';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msg_capital_raising' => array(
        'custom_settings' => TRUE,
      ),
      'msg_investor' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_capital_raising' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_investor' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'message__message_text__1' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'msg_capital_raising' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'msg_investor' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__offer_interested'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__offer_signed';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msg_capital_raising' => array(
        'custom_settings' => TRUE,
      ),
      'msg_investor' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_capital_raising' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_investor' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'message__message_text__1' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'msg_capital_raising' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'msg_investor' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__offer_signed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__offer_status';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msg_capital_raising' => array(
        'custom_settings' => TRUE,
      ),
      'msg_investor' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'msg_capital_raising' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_investor' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
        'message__message_text__1' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'msg_capital_raising' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'msg_investor' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__offer_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__offer_uninterested';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msg_capital_raising' => array(
        'custom_settings' => TRUE,
      ),
      'msg_investor' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_capital_raising' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'msg_investor' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'message__message_text__1' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'msg_capital_raising' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'msg_investor' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__offer_uninterested'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_delete_on_entity_delete';
  $strongarm->value = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
  $export['message_delete_on_entity_delete'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_purge_days';
  $strongarm->value = '';
  $export['message_purge_days'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_purge_enable';
  $strongarm->value = 0;
  $export['message_purge_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_purge_quota';
  $strongarm->value = '';
  $export['message_purge_quota'] = $strongarm;

  return $export;
}
