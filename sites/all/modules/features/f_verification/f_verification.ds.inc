<?php
/**
 * @file
 * f_verification.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_verification_ds_layout_settings_info() {
  $export = array();

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
