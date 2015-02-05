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
  $ds_fieldsetting->id = 'message|offer_created|full';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_created';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'message_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_created|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_first_contact|full';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_first_contact';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'message_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_first_contact|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_interested|full';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_interested';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'message_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_interested|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|offer_uninterested|full';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'offer_uninterested';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'message_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|offer_uninterested|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function f_activities_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'message_created';
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
  $export['message_created'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_activities_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_created|full';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_created';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'message_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'message_created' => 'ds_content',
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
  $export['message|offer_created|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_first_contact|full';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_first_contact';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'message_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'message_created' => 'ds_content',
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
  $export['message|offer_first_contact|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_interested|full';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_interested';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'message_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'message_created' => 'ds_content',
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
  $export['message|offer_interested|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|offer_uninterested|full';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'offer_uninterested';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'message_created',
        1 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
      'message_created' => 'ds_content',
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
  $export['message|offer_uninterested|full'] = $ds_layout;

  return $export;
}
