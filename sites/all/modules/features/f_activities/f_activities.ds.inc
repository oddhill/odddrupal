<?php
/**
 * @file
 * f_activities.ds.inc
 */

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
        0 => 'message__message_text__0',
      ),
    ),
    'fields' => array(
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

  return $export;
}
