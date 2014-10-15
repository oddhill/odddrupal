<?php
/**
 * @file
 * f_investor.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_investor_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'investor|company|default';
  $ds_fieldsetting->entity_type = 'investor';
  $ds_fieldsetting->bundle = 'company';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['investor|company|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'investor|person|default';
  $ds_fieldsetting->entity_type = 'investor';
  $ds_fieldsetting->bundle = 'person';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['investor|person|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_investor_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'investor|company|default';
  $ds_layout->entity_type = 'investor';
  $ds_layout->bundle = 'company';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_shared_industries',
        2 => 'field_shared_address',
        3 => 'field_shared_email',
        4 => 'field_shared_cell',
        5 => 'field_shared_phone',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_shared_industries' => 'ds_content',
      'field_shared_address' => 'ds_content',
      'field_shared_email' => 'ds_content',
      'field_shared_cell' => 'ds_content',
      'field_shared_phone' => 'ds_content',
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
  $export['investor|company|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'investor|person|default';
  $ds_layout->entity_type = 'investor';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_shared_industries',
        2 => 'field_shared_address',
        3 => 'field_shared_email',
        4 => 'field_shared_cell',
        5 => 'field_shared_phone',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_shared_industries' => 'ds_content',
      'field_shared_address' => 'ds_content',
      'field_shared_email' => 'ds_content',
      'field_shared_cell' => 'ds_content',
      'field_shared_phone' => 'ds_content',
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
  $export['investor|person|default'] = $ds_layout;

  return $export;
}
