<?php
/**
 * @file
 * f_capital_raising.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_capital_raising_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|capital_raising|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'capital_raising';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|capital_raising|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|capital_raising|mail';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'capital_raising';
  $ds_fieldsetting->view_mode = 'mail';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|capital_raising|mail'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_capital_raising_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|capital_raising|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'capital_raising';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_cap_rais_text_def',
        3 => 'field_cap_rais_comp',
        4 => 'field_cap_rais_date',
        5 => 'field_cap_rais_post',
        6 => 'field_cap_rais_post_units',
        7 => 'field_cap_rais_rate',
        8 => 'field_cap_rais_vol',
        9 => 'field_cap_rais_vol_units',
        10 => 'field_cap_rais_stock_no',
        11 => 'field_cap_rais_units_no',
        12 => 'field_cap_rais_estim',
        13 => 'field_cap_rais_file',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_cap_rais_text_def' => 'ds_content',
      'field_cap_rais_comp' => 'ds_content',
      'field_cap_rais_date' => 'ds_content',
      'field_cap_rais_post' => 'ds_content',
      'field_cap_rais_post_units' => 'ds_content',
      'field_cap_rais_rate' => 'ds_content',
      'field_cap_rais_vol' => 'ds_content',
      'field_cap_rais_vol_units' => 'ds_content',
      'field_cap_rais_stock_no' => 'ds_content',
      'field_cap_rais_units_no' => 'ds_content',
      'field_cap_rais_estim' => 'ds_content',
      'field_cap_rais_file' => 'ds_content',
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
  $export['node|capital_raising|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|capital_raising|mail';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'capital_raising';
  $ds_layout->view_mode = 'mail';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_cap_rais_text_def',
        3 => 'field_cap_rais_comp',
        4 => 'field_cap_rais_date',
        5 => 'field_cap_rais_post',
        6 => 'field_cap_rais_post_units',
        7 => 'field_cap_rais_rate',
        8 => 'field_cap_rais_vol',
        9 => 'field_cap_rais_vol_units',
        10 => 'field_cap_rais_stock_no',
        11 => 'field_cap_rais_units_no',
        12 => 'field_cap_rais_estim',
        13 => 'field_cap_rais_file',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_cap_rais_text_def' => 'ds_content',
      'field_cap_rais_comp' => 'ds_content',
      'field_cap_rais_date' => 'ds_content',
      'field_cap_rais_post' => 'ds_content',
      'field_cap_rais_post_units' => 'ds_content',
      'field_cap_rais_rate' => 'ds_content',
      'field_cap_rais_vol' => 'ds_content',
      'field_cap_rais_vol_units' => 'ds_content',
      'field_cap_rais_stock_no' => 'ds_content',
      'field_cap_rais_units_no' => 'ds_content',
      'field_cap_rais_estim' => 'ds_content',
      'field_cap_rais_file' => 'ds_content',
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
  $export['node|capital_raising|mail'] = $ds_layout;

  return $export;
}
