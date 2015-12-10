<?php
/**
 * @file
 * f_company.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_company_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comp_1|node|company|form';
  $field_group->group_name = 'group_comp_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'group_comp_basics',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $export['group_comp_1|node|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comp_basics|node|company|form';
  $field_group->group_name = 'group_comp_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_comp_1';
  $field_group->data = array(
    'label' => 'Grundläggande',
    'weight' => '11',
    'children' => array(
      0 => 'field_comp_logo',
      1 => 'field_comp_legacy_id',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Grundläggande',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_comp_basics|node|company|form'] = $field_group;

  return $export;
}
