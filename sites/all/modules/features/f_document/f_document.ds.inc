<?php
/**
 * @file
 * f_document.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_document_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'message|document_view|dashboard';
  $ds_fieldsetting->entity_type = 'message';
  $ds_fieldsetting->bundle = 'document_view';
  $ds_fieldsetting->view_mode = 'dashboard';
  $ds_fieldsetting->settings = array(
    'msg_created' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['message|document_view|dashboard'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|document|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'document';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|document|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_document_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'message|document_view|dashboard';
  $ds_layout->entity_type = 'message';
  $ds_layout->bundle = 'document_view';
  $ds_layout->view_mode = 'dashboard';
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
  $export['message|document_view|dashboard'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|document|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'document';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_dokument_relation',
        3 => 'field_document_appendix',
        4 => 'field_document_files',
        5 => 'field_doc_foot_free',
        6 => 'field_doc_foot_mail',
        7 => 'field_doc_foot_webb',
        8 => 'field_doc_foot_vat',
        9 => 'field_doc_head_free',
        10 => 'field_doc_head_text',
        11 => 'field_doc_head_img',
        12 => 'field_doc_foot_tel',
        13 => 'field_doc_foot_address',
        14 => 'field_doc_foot_moms',
        15 => 'field_doc_foot_bg',
        16 => 'field_doc_foot_fax',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_dokument_relation' => 'ds_content',
      'field_document_appendix' => 'ds_content',
      'field_document_files' => 'ds_content',
      'field_doc_foot_free' => 'ds_content',
      'field_doc_foot_mail' => 'ds_content',
      'field_doc_foot_webb' => 'ds_content',
      'field_doc_foot_vat' => 'ds_content',
      'field_doc_head_free' => 'ds_content',
      'field_doc_head_text' => 'ds_content',
      'field_doc_head_img' => 'ds_content',
      'field_doc_foot_tel' => 'ds_content',
      'field_doc_foot_address' => 'ds_content',
      'field_doc_foot_moms' => 'ds_content',
      'field_doc_foot_bg' => 'ds_content',
      'field_doc_foot_fax' => 'ds_content',
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
  $export['node|document|full'] = $ds_layout;

  return $export;
}
