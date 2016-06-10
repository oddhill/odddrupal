<?php
/**
 * @file
 * f_company.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_company_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|company|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'company';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|company|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_company_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|company|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'company';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_comp_legacy_id',
        1 => 'title',
        2 => 'field_comp_logo',
        3 => 'field_comp_org_nbr',
        4 => 'field_comp_cont_person',
        5 => 'field_comp_cust_resp',
        6 => 'field_comp_id',
        7 => 'field_comp_principal_person',
        8 => 'field_comp_address',
        9 => 'field_comp_notes',
        10 => 'field_comp_principal_persons',
      ),
    ),
    'fields' => array(
      'field_comp_legacy_id' => 'ds_content',
      'title' => 'ds_content',
      'field_comp_logo' => 'ds_content',
      'field_comp_org_nbr' => 'ds_content',
      'field_comp_cont_person' => 'ds_content',
      'field_comp_cust_resp' => 'ds_content',
      'field_comp_id' => 'ds_content',
      'field_comp_principal_person' => 'ds_content',
      'field_comp_address' => 'ds_content',
      'field_comp_notes' => 'ds_content',
      'field_comp_principal_persons' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|company|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|company|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'company';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_comp_logo',
      ),
    ),
    'fields' => array(
      'field_comp_logo' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|company|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|customer_approval|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'customer_approval';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_cust_app_credit_risk',
        1 => 'field_cust_app_cust_history',
        2 => 'field_cust_app_conflict',
        3 => 'field_cust_app_money_launder',
        4 => 'field_cust_app_suitability',
        5 => 'field_cust_app_final_app',
        6 => 'field_cust_app_signed_by',
        7 => 'field_cust_app_signed_time',
        8 => 'field_cust_app_signed',
        9 => 'field_cust_app_signed_admin',
        10 => 'field_cust_app_signed_by_admin',
        11 => 'field_cust_app_signed_time_admin',
      ),
    ),
    'fields' => array(
      'field_cust_app_credit_risk' => 'ds_content',
      'field_cust_app_cust_history' => 'ds_content',
      'field_cust_app_conflict' => 'ds_content',
      'field_cust_app_money_launder' => 'ds_content',
      'field_cust_app_suitability' => 'ds_content',
      'field_cust_app_final_app' => 'ds_content',
      'field_cust_app_signed_by' => 'ds_content',
      'field_cust_app_signed_time' => 'ds_content',
      'field_cust_app_signed' => 'ds_content',
      'field_cust_app_signed_admin' => 'ds_content',
      'field_cust_app_signed_by_admin' => 'ds_content',
      'field_cust_app_signed_time_admin' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|customer_approval|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|proposal|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'proposal';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_proposal_company',
        1 => 'field_proposal_case_number',
        2 => 'field_proposal_customer',
        3 => 'field_proposal_final',
        4 => 'field_proposal_approval',
        5 => 'field_proposal_cust_approval',
      ),
    ),
    'fields' => array(
      'field_proposal_company' => 'ds_content',
      'field_proposal_case_number' => 'ds_content',
      'field_proposal_customer' => 'ds_content',
      'field_proposal_final' => 'ds_content',
      'field_proposal_approval' => 'ds_content',
      'field_proposal_cust_approval' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|proposal|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|proposal|mail';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'proposal';
  $ds_layout->view_mode = 'mail';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_proposal_company',
      ),
    ),
    'fields' => array(
      'field_proposal_company' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|proposal|mail'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|proposal|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'proposal';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_proposal_company',
      ),
    ),
    'fields' => array(
      'field_proposal_company' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|proposal|teaser'] = $ds_layout;

  return $export;
}
