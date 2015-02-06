<?php
/**
 * @file
 * f_activities.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_activities_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_comm_changed|msg_capital_raising';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_comm_changed';
  $ds_fieldsetting->view_mode = 'msg_capital_raising';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_comm_changed|msg_capital_raising'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_comm_changed|msg_investor';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_comm_changed';
  $ds_fieldsetting->view_mode = 'msg_investor';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_comm_changed|msg_investor'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_created|msg_capital_raising';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_created';
  $ds_fieldsetting->view_mode = 'msg_capital_raising';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_created|msg_capital_raising'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_created|msg_investor';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_created';
  $ds_fieldsetting->view_mode = 'msg_investor';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_created|msg_investor'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_first_contact|msg_capital_raising';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_first_contact';
  $ds_fieldsetting->view_mode = 'msg_capital_raising';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_first_contact|msg_capital_raising'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_first_contact|msg_investor';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_first_contact';
  $ds_fieldsetting->view_mode = 'msg_investor';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_first_contact|msg_investor'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_guar_changed|msg_capital_raising';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_guar_changed';
  $ds_fieldsetting->view_mode = 'msg_capital_raising';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_guar_changed|msg_capital_raising'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_guar_changed|msg_investor';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_guar_changed';
  $ds_fieldsetting->view_mode = 'msg_investor';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_guar_changed|msg_investor'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_interested|msg_capital_raising';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_interested';
  $ds_fieldsetting->view_mode = 'msg_capital_raising';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_interested|msg_capital_raising'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_interested|msg_investor';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_interested';
  $ds_fieldsetting->view_mode = 'msg_investor';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_interested|msg_investor'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_signed|msg_capital_raising';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_signed';
  $ds_fieldsetting->view_mode = 'msg_capital_raising';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_signed|msg_capital_raising'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_signed|msg_investor';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_signed';
  $ds_fieldsetting->view_mode = 'msg_investor';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_signed|msg_investor'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_status|msg_capital_raising';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_status';
  $ds_fieldsetting->view_mode = 'msg_capital_raising';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_status|msg_capital_raising'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_status|msg_investor';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_status';
  $ds_fieldsetting->view_mode = 'msg_investor';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_status|msg_investor'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_uninterested|msg_capital_raising';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_uninterested';
  $ds_fieldsetting->view_mode = 'msg_capital_raising';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_uninterested|msg_capital_raising'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_uninterested|msg_investor';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_uninterested';
  $ds_fieldsetting->view_mode = 'msg_investor';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_uninterested|msg_investor'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function f_activities_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'msg_created';
  $ds_field->label = 'Created';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'message' => 'message',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[message:timestamp:short]',
      'format' => 'plain_text',
    ),
    'use_token' => 1,
  );
  $export['msg_created'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_activities_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_comm_changed|msg_capital_raising';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_comm_changed';
  $ds_layout->view_mode = 'msg_capital_raising';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__0' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_comm_changed|msg_capital_raising'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_comm_changed|msg_investor';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_comm_changed';
  $ds_layout->view_mode = 'msg_investor';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__1',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_comm_changed|msg_investor'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_created|msg_capital_raising';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_created';
  $ds_layout->view_mode = 'msg_capital_raising';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__0' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_created|msg_capital_raising'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_created|msg_investor';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_created';
  $ds_layout->view_mode = 'msg_investor';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__1',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_created|msg_investor'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_first_contact|msg_capital_raising';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_first_contact';
  $ds_layout->view_mode = 'msg_capital_raising';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__0' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_first_contact|msg_capital_raising'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_first_contact|msg_investor';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_first_contact';
  $ds_layout->view_mode = 'msg_investor';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__1',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_first_contact|msg_investor'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_guar_changed|msg_capital_raising';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_guar_changed';
  $ds_layout->view_mode = 'msg_capital_raising';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__0' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_guar_changed|msg_capital_raising'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_guar_changed|msg_investor';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_guar_changed';
  $ds_layout->view_mode = 'msg_investor';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__1',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_guar_changed|msg_investor'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_interested|msg_capital_raising';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_interested';
  $ds_layout->view_mode = 'msg_capital_raising';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__0' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_interested|msg_capital_raising'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_interested|msg_investor';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_interested';
  $ds_layout->view_mode = 'msg_investor';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__1',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_interested|msg_investor'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_signed|msg_capital_raising';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_signed';
  $ds_layout->view_mode = 'msg_capital_raising';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__0' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_signed|msg_capital_raising'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_signed|msg_investor';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_signed';
  $ds_layout->view_mode = 'msg_investor';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__1',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_signed|msg_investor'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_status|msg_capital_raising';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_status';
  $ds_layout->view_mode = 'msg_capital_raising';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__0' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_status|msg_capital_raising'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_status|msg_investor';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_status';
  $ds_layout->view_mode = 'msg_investor';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__1',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_status|msg_investor'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_uninterested|msg_capital_raising';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_uninterested';
  $ds_layout->view_mode = 'msg_capital_raising';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__0' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_uninterested|msg_capital_raising'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_uninterested|msg_investor';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_uninterested';
  $ds_layout->view_mode = 'msg_investor';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'msg_created',
        1 => 'message__message_text__1',
      ),
    ),
    'fields' => array(
      'msg_created' => 'ds_content',
      'message__message_text__1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['message|offer_uninterested|msg_investor'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function f_activities_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'msg_capital_raising';
  $ds_view_mode->label = 'Transaktion';
  $ds_view_mode->entities = array(
    'message' => 'message',
  );
  $export['msg_capital_raising'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'msg_investor';
  $ds_view_mode->label = 'Investerare';
  $ds_view_mode->entities = array(
    'message' => 'message',
  );
  $export['msg_investor'] = $ds_view_mode;

  return $export;
}
