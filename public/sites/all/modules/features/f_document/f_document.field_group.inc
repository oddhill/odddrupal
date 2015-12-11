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
      1 => 'title',
      2 => 'group_document_rel',
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
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_document_files',
      2 => 'group_document_footer',
      3 => 'group_document_head',
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
    'weight' => '37',
    'children' => array(
      0 => 'field_doc_foot_address',
      1 => 'field_doc_foot_bg',
      2 => 'field_doc_foot_fax',
      3 => 'field_doc_foot_free',
      4 => 'field_doc_foot_mail',
      5 => 'field_doc_foot_moms',
      6 => 'field_doc_foot_tel',
      7 => 'field_doc_foot_vat',
      8 => 'field_doc_foot_webb',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidfot',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-document-footer field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
    'label' => 'Sidhuvud',
    'weight' => '1',
    'children' => array(
      0 => 'field_doc_head_free',
      1 => 'field_doc_head_img',
      2 => 'field_doc_head_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidhuvud',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-document-head field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
    'weight' => '7',
    'children' => array(
      0 => 'field_document_appendix',
      1 => 'field_dokument_relation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Relation',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-document-rel field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_document_rel|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manual_1|node|manual|form';
  $field_group->group_name = 'group_manual_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '3',
    'children' => array(
      0 => 'field_manual_type',
      1 => 'title',
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
  $export['group_manual_1|node|manual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manual_2|node|manual|form';
  $field_group->group_name = 'group_manual_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_manual_files',
      2 => 'group_manual_footer',
      3 => 'group_manual_head',
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
  $export['group_manual_2|node|manual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manual_footer|node|manual|form';
  $field_group->group_name = 'group_manual_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manual';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_manual_2';
  $field_group->data = array(
    'label' => 'Sidfot',
    'weight' => '9',
    'children' => array(
      0 => 'field_man_foot_tel',
      1 => 'field_man_foot_address',
      2 => 'field_man_foot_fax',
      3 => 'field_man_foot_bg',
      4 => 'field_man_foot_moms',
      5 => 'field_man_foot_vat',
      6 => 'field_man_foot_webb',
      7 => 'field_man_foot_mail',
      8 => 'field_man_foot_free',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidfot',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-manual-footer field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_manual_footer|node|manual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manual_head|node|manual|form';
  $field_group->group_name = 'group_manual_head';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manual';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_manual_2';
  $field_group->data = array(
    'label' => 'Sidhuvud',
    'weight' => '6',
    'children' => array(
      0 => 'field_man_head_img',
      1 => 'field_man_head_text',
      2 => 'field_man_head_free',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidhuvud',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-manual-head field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_manual_head|node|manual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manual_rel|node|manual|form';
  $field_group->group_name = 'group_manual_rel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manual';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_manual_1';
  $field_group->data = array(
    'label' => 'Relation',
    'weight' => '-3',
    'children' => array(
      0 => 'field_manual_appendix',
      1 => 'field_manual_relation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Relation',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-manual-rel field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_manual_rel|node|manual|form'] = $field_group;

  return $export;
}
