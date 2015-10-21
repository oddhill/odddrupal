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
  $ds_fieldsetting->id = 'node|kontrolluppgift_privat|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'kontrolluppgift_privat';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'handle_control' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|kontrolluppgift_privat|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|kontrolluppgift|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'kontrolluppgift';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'handle_control' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|kontrolluppgift|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_verification_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|kontrolluppgift_privat|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'kontrolluppgift_privat';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ctrl_ok',
        1 => 'group_ctrl_upp',
        2 => 'group_ctrl_ptv',
        3 => 'group_ctrl_id',
        4 => 'group_ctrl_ext',
        5 => 'group_ctrl_eu',
        6 => 'group_ctrl_credit',
        7 => 'group_ctrl_comp',
        8 => 'group_ctrl_oth',
        9 => 'handle_control',
        10 => 'field_ctrl_files_upp',
        11 => 'field_ctrl_files_ptv',
        12 => 'field_ctrl_app_upp',
        13 => 'field_ctrl_app_ptv',
        14 => 'field_ctrl_date_upp',
        15 => 'field_ctrl_files_id',
        16 => 'field_ctrl_files_ext',
        17 => 'field_ctrl_app_id',
        18 => 'field_ctrl_note_upp',
        19 => 'field_ctrl_date_ptv',
        20 => 'field_ctrl_files_eu',
        21 => 'field_ctrl_note_ptv',
        22 => 'field_ctrl_date_id',
        23 => 'field_ctrl_app_ext',
        24 => 'field_ctrl_date_ext',
        25 => 'field_ctrl_app_eu',
        26 => 'field_ctrl_files_credit',
        27 => 'field_ctrl_note_id',
        28 => 'field_ctrl_app_credit',
        29 => 'field_ctrl_date_eu',
        30 => 'field_ctrl_note_ext',
        31 => 'field_ctrl_files_comp',
        32 => 'field_ctrl_date_credit',
        33 => 'field_ctrl_files_oth',
        34 => 'field_ctrl_note_eu',
        35 => 'field_ctrl_app_comp',
        36 => 'field_ctrl_app_oth',
        37 => 'field_ctrl_date_comp',
        38 => 'field_ctrl_note_credit',
        39 => 'field_ctrl_note_comp',
        40 => 'field_ctrl_date_oth',
        41 => 'field_ctrl_note_oth',
      ),
    ),
    'fields' => array(
      'field_ctrl_ok' => 'ds_content',
      'group_ctrl_upp' => 'ds_content',
      'group_ctrl_ptv' => 'ds_content',
      'group_ctrl_id' => 'ds_content',
      'group_ctrl_ext' => 'ds_content',
      'group_ctrl_eu' => 'ds_content',
      'group_ctrl_credit' => 'ds_content',
      'group_ctrl_comp' => 'ds_content',
      'group_ctrl_oth' => 'ds_content',
      'handle_control' => 'ds_content',
      'field_ctrl_files_upp' => 'ds_content',
      'field_ctrl_files_ptv' => 'ds_content',
      'field_ctrl_app_upp' => 'ds_content',
      'field_ctrl_app_ptv' => 'ds_content',
      'field_ctrl_date_upp' => 'ds_content',
      'field_ctrl_files_id' => 'ds_content',
      'field_ctrl_files_ext' => 'ds_content',
      'field_ctrl_app_id' => 'ds_content',
      'field_ctrl_note_upp' => 'ds_content',
      'field_ctrl_date_ptv' => 'ds_content',
      'field_ctrl_files_eu' => 'ds_content',
      'field_ctrl_note_ptv' => 'ds_content',
      'field_ctrl_date_id' => 'ds_content',
      'field_ctrl_app_ext' => 'ds_content',
      'field_ctrl_date_ext' => 'ds_content',
      'field_ctrl_app_eu' => 'ds_content',
      'field_ctrl_files_credit' => 'ds_content',
      'field_ctrl_note_id' => 'ds_content',
      'field_ctrl_app_credit' => 'ds_content',
      'field_ctrl_date_eu' => 'ds_content',
      'field_ctrl_note_ext' => 'ds_content',
      'field_ctrl_files_comp' => 'ds_content',
      'field_ctrl_date_credit' => 'ds_content',
      'field_ctrl_files_oth' => 'ds_content',
      'field_ctrl_note_eu' => 'ds_content',
      'field_ctrl_app_comp' => 'ds_content',
      'field_ctrl_app_oth' => 'ds_content',
      'field_ctrl_date_comp' => 'ds_content',
      'field_ctrl_note_credit' => 'ds_content',
      'field_ctrl_note_comp' => 'ds_content',
      'field_ctrl_date_oth' => 'ds_content',
      'field_ctrl_note_oth' => 'ds_content',
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
  $export['node|kontrolluppgift_privat|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|kontrolluppgift|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'kontrolluppgift';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ctrl_ok',
        1 => 'group_ctrl_upp',
        2 => 'group_ctrl_ptv',
        3 => 'group_ctrl_id',
        4 => 'group_ctrl_id_real',
        5 => 'group_ctrl_reg',
        6 => 'group_ctrl_eu',
        7 => 'group_ctrl_credit',
        8 => 'group_ctrl_comp',
        9 => 'field_ctrl_files_reg',
        10 => 'group_ctrl_oth',
        11 => 'field_ctrl_files_eu',
        12 => 'field_ctrl_app_reg',
        13 => 'handle_control',
        14 => 'field_ctrl_files_credit',
        15 => 'field_ctrl_date_reg',
        16 => 'field_ctrl_app_eu',
        17 => 'field_ctrl_date_eu',
        18 => 'field_ctrl_note_reg',
        19 => 'field_ctrl_app_credit',
        20 => 'field_ctrl_files_id_real',
        21 => 'field_ctrl_note_eu',
        22 => 'field_ctrl_files_id',
        23 => 'field_ctrl_date_credit',
        24 => 'field_ctrl_app_id_real',
        25 => 'field_ctrl_app_id',
        26 => 'field_ctrl_date_id_real',
        27 => 'field_ctrl_files_comp',
        28 => 'field_ctrl_note_credit',
        29 => 'field_ctrl_note_id_real',
        30 => 'field_ctrl_files_oth',
        31 => 'field_ctrl_app_comp',
        32 => 'field_ctrl_date_id',
        33 => 'field_ctrl_note_id',
        34 => 'field_ctrl_files_ptv',
        35 => 'field_ctrl_app_oth',
        36 => 'field_ctrl_date_comp',
        37 => 'field_ctrl_note_comp',
        38 => 'field_ctrl_app_ptv',
        39 => 'field_ctrl_date_oth',
        40 => 'field_ctrl_note_oth',
        41 => 'field_ctrl_date_ptv',
        42 => 'field_ctrl_note_ptv',
        43 => 'field_ctrl_files_upp',
        44 => 'field_ctrl_app_upp',
        45 => 'field_ctrl_date_upp',
        46 => 'field_ctrl_note_upp',
      ),
    ),
    'fields' => array(
      'field_ctrl_ok' => 'ds_content',
      'group_ctrl_upp' => 'ds_content',
      'group_ctrl_ptv' => 'ds_content',
      'group_ctrl_id' => 'ds_content',
      'group_ctrl_id_real' => 'ds_content',
      'group_ctrl_reg' => 'ds_content',
      'group_ctrl_eu' => 'ds_content',
      'group_ctrl_credit' => 'ds_content',
      'group_ctrl_comp' => 'ds_content',
      'field_ctrl_files_reg' => 'ds_content',
      'group_ctrl_oth' => 'ds_content',
      'field_ctrl_files_eu' => 'ds_content',
      'field_ctrl_app_reg' => 'ds_content',
      'handle_control' => 'ds_content',
      'field_ctrl_files_credit' => 'ds_content',
      'field_ctrl_date_reg' => 'ds_content',
      'field_ctrl_app_eu' => 'ds_content',
      'field_ctrl_date_eu' => 'ds_content',
      'field_ctrl_note_reg' => 'ds_content',
      'field_ctrl_app_credit' => 'ds_content',
      'field_ctrl_files_id_real' => 'ds_content',
      'field_ctrl_note_eu' => 'ds_content',
      'field_ctrl_files_id' => 'ds_content',
      'field_ctrl_date_credit' => 'ds_content',
      'field_ctrl_app_id_real' => 'ds_content',
      'field_ctrl_app_id' => 'ds_content',
      'field_ctrl_date_id_real' => 'ds_content',
      'field_ctrl_files_comp' => 'ds_content',
      'field_ctrl_note_credit' => 'ds_content',
      'field_ctrl_note_id_real' => 'ds_content',
      'field_ctrl_files_oth' => 'ds_content',
      'field_ctrl_app_comp' => 'ds_content',
      'field_ctrl_date_id' => 'ds_content',
      'field_ctrl_note_id' => 'ds_content',
      'field_ctrl_files_ptv' => 'ds_content',
      'field_ctrl_app_oth' => 'ds_content',
      'field_ctrl_date_comp' => 'ds_content',
      'field_ctrl_note_comp' => 'ds_content',
      'field_ctrl_app_ptv' => 'ds_content',
      'field_ctrl_date_oth' => 'ds_content',
      'field_ctrl_note_oth' => 'ds_content',
      'field_ctrl_date_ptv' => 'ds_content',
      'field_ctrl_note_ptv' => 'ds_content',
      'field_ctrl_files_upp' => 'ds_content',
      'field_ctrl_app_upp' => 'ds_content',
      'field_ctrl_date_upp' => 'ds_content',
      'field_ctrl_note_upp' => 'ds_content',
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
  $export['node|kontrolluppgift|full'] = $ds_layout;

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
