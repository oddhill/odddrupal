<?php
/**
 * @file
 * f_document.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_document_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_1|node|document|form';
  $field_group->group_name = 'group_doc_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '4',
    'children' => array(
      0 => 'field_document_type',
      1 => 'field_document_files',
      2 => 'title',
      3 => 'group_document_rel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'form-sidebar column',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_doc_1|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_2|node|document|form';
  $field_group->group_name = 'group_doc_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'group_document_head',
      2 => 'group_document_footer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Body',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'form-body column',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_doc_2|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document_footer|node|document|form';
  $field_group->group_name = 'group_document_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_2';
  $field_group->data = array(
    'label' => 'Sidfot',
    'weight' => '20',
    'children' => array(
      0 => 'field_doc_foot_address',
      1 => 'field_doc_foot_tel',
      2 => 'field_doc_foot_fax',
      3 => 'field_doc_foot_bg',
      4 => 'field_doc_foot_moms',
      5 => 'field_doc_foot_vat',
      6 => 'field_doc_foot_webb',
      7 => 'field_doc_foot_mail',
      8 => 'field_doc_foot_free',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-document-footer field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_document_footer|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document_head|node|document|form';
  $field_group->group_name = 'group_document_head';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_2';
  $field_group->data = array(
    'label' => 'SIdhuvud',
    'weight' => '18',
    'children' => array(
      0 => 'field_doc_head_img',
      1 => 'field_doc_head_text',
      2 => 'field_doc_head_free',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-document-head field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_document_head|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document_rel|node|document|form';
  $field_group->group_name = 'group_document_rel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_1';
  $field_group->data = array(
    'label' => 'Relation',
    'weight' => '14',
    'children' => array(
      0 => 'field_dokument_relation',
      1 => 'field_document_appendix',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-document-rel field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_document_rel|node|document|form'] = $field_group;

  return $export;
}
