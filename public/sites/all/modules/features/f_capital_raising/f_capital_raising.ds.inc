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
  $ds_fieldsetting->id = 'node|offer|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'offer';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|offer|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|offer|mail';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'offer';
  $ds_fieldsetting->view_mode = 'mail';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|offer|mail'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|transaction_agreement|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'transaction_agreement';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|transaction_agreement|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_capital_raising_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|offer|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'offer';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_offer_company',
        2 => 'field_offer_time',
        3 => 'field_offer_text',
        4 => 'field_offer_additional',
        5 => 'group_offer_view_sidebar',
        6 => 'group_offer_view_description',
        7 => 'field_offer_type_fe_sum',
        8 => 'field_offer_type_fe_rate',
        9 => 'field_offer_type_fe_pre',
        10 => 'field_offer_type_fe_sign',
        11 => 'field_offer_type_fe_warrant',
        12 => 'field_offer_type_fe_warrant_type',
        13 => 'field_offer_type_fe_bonus',
        14 => 'field_offer_type_fe_terms',
        15 => 'field_offer_type_fe_payment',
        16 => 'field_offer_type_le_sum',
        17 => 'field_offer_type_le_rate',
        18 => 'field_offer_type_le_pre',
        19 => 'field_offer_type_le_sign',
        20 => 'field_offer_type_le_warrant',
        21 => 'field_offer_type_le_warrant_type',
        22 => 'field_offer_type_le_low',
        23 => 'field_offer_type_le_terms',
        24 => 'field_offer_type_le_bonus',
        25 => 'field_offer_type_le_market',
        26 => 'field_offer_type_le_count',
        27 => 'field_offer_type_le_payment',
        28 => 'field_offer_type_pp_sum',
        29 => 'field_offer_type_pp_pre',
        30 => 'field_offer_type_pp_rate',
        31 => 'field_offer_type_pp_sign',
        32 => 'field_offer_type_pp_payment',
        33 => 'field_offer_type_re_sum',
        34 => 'field_offer_type_re_pre',
        35 => 'field_offer_type_re_rate',
        36 => 'field_offer_type_re_sign',
        37 => 'field_offer_type_re_payment',
        38 => 'field_offer_type_bl_sum',
        39 => 'field_offer_type_bl_time',
        40 => 'field_offer_type_bl_interest',
        41 => 'field_offer_type_bl_planned',
        42 => 'field_offer_type_bp_sum',
        43 => 'field_offer_type_bp_price',
        44 => 'field_offer_type_bp_planned',
        45 => 'field_offer_files',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_offer_company' => 'ds_content',
      'field_offer_time' => 'ds_content',
      'field_offer_text' => 'ds_content',
      'field_offer_additional' => 'ds_content',
      'group_offer_view_sidebar' => 'ds_content',
      'group_offer_view_description' => 'ds_content',
      'field_offer_type_fe_sum' => 'ds_content',
      'field_offer_type_fe_rate' => 'ds_content',
      'field_offer_type_fe_pre' => 'ds_content',
      'field_offer_type_fe_sign' => 'ds_content',
      'field_offer_type_fe_warrant' => 'ds_content',
      'field_offer_type_fe_warrant_type' => 'ds_content',
      'field_offer_type_fe_bonus' => 'ds_content',
      'field_offer_type_fe_terms' => 'ds_content',
      'field_offer_type_fe_payment' => 'ds_content',
      'field_offer_type_le_sum' => 'ds_content',
      'field_offer_type_le_rate' => 'ds_content',
      'field_offer_type_le_pre' => 'ds_content',
      'field_offer_type_le_sign' => 'ds_content',
      'field_offer_type_le_warrant' => 'ds_content',
      'field_offer_type_le_warrant_type' => 'ds_content',
      'field_offer_type_le_low' => 'ds_content',
      'field_offer_type_le_terms' => 'ds_content',
      'field_offer_type_le_bonus' => 'ds_content',
      'field_offer_type_le_market' => 'ds_content',
      'field_offer_type_le_count' => 'ds_content',
      'field_offer_type_le_payment' => 'ds_content',
      'field_offer_type_pp_sum' => 'ds_content',
      'field_offer_type_pp_pre' => 'ds_content',
      'field_offer_type_pp_rate' => 'ds_content',
      'field_offer_type_pp_sign' => 'ds_content',
      'field_offer_type_pp_payment' => 'ds_content',
      'field_offer_type_re_sum' => 'ds_content',
      'field_offer_type_re_pre' => 'ds_content',
      'field_offer_type_re_rate' => 'ds_content',
      'field_offer_type_re_sign' => 'ds_content',
      'field_offer_type_re_payment' => 'ds_content',
      'field_offer_type_bl_sum' => 'ds_content',
      'field_offer_type_bl_time' => 'ds_content',
      'field_offer_type_bl_interest' => 'ds_content',
      'field_offer_type_bl_planned' => 'ds_content',
      'field_offer_type_bp_sum' => 'ds_content',
      'field_offer_type_bp_price' => 'ds_content',
      'field_offer_type_bp_planned' => 'ds_content',
      'field_offer_files' => 'ds_content',
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
  $export['node|offer|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|offer|mail';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'offer';
  $ds_layout->view_mode = 'mail';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'verification_status',
        1 => 'verification_status_id',
        2 => 'title',
        3 => 'field_offer_company',
        4 => 'field_offer_time',
        5 => 'field_offer_text',
        6 => 'field_offer_additional',
        7 => 'field_offer_files',
        8 => 'field_offer_logout_info',
        9 => 'field_offer_type_pp',
        10 => 'field_offer_type_fe',
        11 => 'field_offer_type_le',
        12 => 'field_offer_type_re',
        13 => 'field_offer_type_bl',
        14 => 'field_offer_type_bp',
        15 => 'field_offer_type_fe_sum',
        16 => 'field_offer_type_fe_rate',
        17 => 'field_offer_type_fe_time',
        18 => 'field_offer_type_fe_pre',
        19 => 'field_offer_type_fe_sign',
        20 => 'field_offer_type_fe_warrant',
        21 => 'field_offer_type_fe_bonus',
        22 => 'field_offer_type_fe_terms',
        23 => 'field_offer_type_fe_payment',
        24 => 'field_offer_type_le_sum',
        25 => 'field_offer_type_le_rate',
        26 => 'field_offer_type_le_time',
        27 => 'field_offer_type_le_pre',
        28 => 'field_offer_type_le_sign',
        29 => 'field_offer_type_le_warrant',
        30 => 'field_offer_type_le_warrant_type',
        31 => 'field_offer_type_le_low',
        32 => 'field_offer_type_le_terms',
        33 => 'field_offer_type_le_bonus',
        34 => 'field_offer_type_le_market',
        35 => 'field_offer_type_le_count',
        36 => 'field_offer_type_le_payment',
        37 => 'field_offer_type_pp_sum',
        38 => 'field_offer_type_pp_time',
        39 => 'field_offer_type_pp_pre',
        40 => 'field_offer_type_pp_rate',
        41 => 'field_offer_type_pp_sign',
        42 => 'field_offer_type_pp_payment',
        43 => 'field_offer_type_re_sum',
        44 => 'field_offer_type_re_time',
        45 => 'field_offer_type_re_pre',
        46 => 'field_offer_type_re_rate',
        47 => 'field_offer_type_re_sign',
        48 => 'field_offer_type_re_payment',
        49 => 'field_offer_type_bl_sum',
        50 => 'field_offer_type_bl_time',
        51 => 'field_offer_type_bl_interest',
        52 => 'field_offer_type_bl_planned',
        53 => 'field_offer_type_bp_sum',
        54 => 'field_offer_type_bp_time',
        55 => 'field_offer_type_bp_price',
        56 => 'field_offer_type_bp_planned',
        57 => 'field_offer_type_fe_warrant_type',
      ),
    ),
    'fields' => array(
      'verification_status' => 'ds_content',
      'verification_status_id' => 'ds_content',
      'title' => 'ds_content',
      'field_offer_company' => 'ds_content',
      'field_offer_time' => 'ds_content',
      'field_offer_text' => 'ds_content',
      'field_offer_additional' => 'ds_content',
      'field_offer_files' => 'ds_content',
      'field_offer_logout_info' => 'ds_content',
      'field_offer_type_pp' => 'ds_content',
      'field_offer_type_fe' => 'ds_content',
      'field_offer_type_le' => 'ds_content',
      'field_offer_type_re' => 'ds_content',
      'field_offer_type_bl' => 'ds_content',
      'field_offer_type_bp' => 'ds_content',
      'field_offer_type_fe_sum' => 'ds_content',
      'field_offer_type_fe_rate' => 'ds_content',
      'field_offer_type_fe_time' => 'ds_content',
      'field_offer_type_fe_pre' => 'ds_content',
      'field_offer_type_fe_sign' => 'ds_content',
      'field_offer_type_fe_warrant' => 'ds_content',
      'field_offer_type_fe_bonus' => 'ds_content',
      'field_offer_type_fe_terms' => 'ds_content',
      'field_offer_type_fe_payment' => 'ds_content',
      'field_offer_type_le_sum' => 'ds_content',
      'field_offer_type_le_rate' => 'ds_content',
      'field_offer_type_le_time' => 'ds_content',
      'field_offer_type_le_pre' => 'ds_content',
      'field_offer_type_le_sign' => 'ds_content',
      'field_offer_type_le_warrant' => 'ds_content',
      'field_offer_type_le_warrant_type' => 'ds_content',
      'field_offer_type_le_low' => 'ds_content',
      'field_offer_type_le_terms' => 'ds_content',
      'field_offer_type_le_bonus' => 'ds_content',
      'field_offer_type_le_market' => 'ds_content',
      'field_offer_type_le_count' => 'ds_content',
      'field_offer_type_le_payment' => 'ds_content',
      'field_offer_type_pp_sum' => 'ds_content',
      'field_offer_type_pp_time' => 'ds_content',
      'field_offer_type_pp_pre' => 'ds_content',
      'field_offer_type_pp_rate' => 'ds_content',
      'field_offer_type_pp_sign' => 'ds_content',
      'field_offer_type_pp_payment' => 'ds_content',
      'field_offer_type_re_sum' => 'ds_content',
      'field_offer_type_re_time' => 'ds_content',
      'field_offer_type_re_pre' => 'ds_content',
      'field_offer_type_re_rate' => 'ds_content',
      'field_offer_type_re_sign' => 'ds_content',
      'field_offer_type_re_payment' => 'ds_content',
      'field_offer_type_bl_sum' => 'ds_content',
      'field_offer_type_bl_time' => 'ds_content',
      'field_offer_type_bl_interest' => 'ds_content',
      'field_offer_type_bl_planned' => 'ds_content',
      'field_offer_type_bp_sum' => 'ds_content',
      'field_offer_type_bp_time' => 'ds_content',
      'field_offer_type_bp_price' => 'ds_content',
      'field_offer_type_bp_planned' => 'ds_content',
      'field_offer_type_fe_warrant_type' => 'ds_content',
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
  $export['node|offer|mail'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|transaction_agreement|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'transaction_agreement';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_transaction_agree_doc',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_transaction_agree_doc' => 'ds_content',
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
  $export['node|transaction_agreement|full'] = $ds_layout;

  return $export;
}
