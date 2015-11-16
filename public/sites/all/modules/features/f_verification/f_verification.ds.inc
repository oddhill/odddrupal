<?php
/**
 * @file
 * f_verification.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_verification_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ctrl|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ctrl';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'ctrl_name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|ctrl|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_verification_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ctrl|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ctrl';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ctrl_name',
        1 => 'verification_status',
        2 => 'field_ctrl_files',
        3 => 'field_ctrl_notes',
        4 => 'field_ctrl_app',
        5 => 'field_ctrl_date',
      ),
    ),
    'fields' => array(
      'ctrl_name' => 'ds_content',
      'verification_status' => 'ds_content',
      'field_ctrl_files' => 'ds_content',
      'field_ctrl_notes' => 'ds_content',
      'field_ctrl_app' => 'ds_content',
      'field_ctrl_date' => 'ds_content',
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
  $export['node|ctrl|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'verification|verification|default';
  $ds_layout->entity_type = 'verification';
  $ds_layout->bundle = 'verification';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_verification_approved',
        1 => 'field_verification_date',
        2 => 'field_verification_file',
      ),
    ),
    'fields' => array(
      'field_verification_approved' => 'ds_content',
      'field_verification_date' => 'ds_content',
      'field_verification_file' => 'ds_content',
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
  $export['verification|verification|default'] = $ds_layout;

  return $export;
}
