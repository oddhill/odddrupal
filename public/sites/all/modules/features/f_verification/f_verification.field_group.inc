<?php
/**
 * @file
 * f_verification.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_verification_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_status|node|ctrl|form';
  $field_group->group_name = 'group_ctrl_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontrollstatus',
    'weight' => '5',
    'children' => array(
      0 => 'field_ctrl_app',
      1 => 'field_ctrl_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kontrollstatus',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'ctrl-status',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_status|node|ctrl|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_verification_1|verification|verification|form';
  $field_group->group_name = 'group_verification_1';
  $field_group->entity_type = 'verification';
  $field_group->bundle = 'verification';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '1',
    'children' => array(
      0 => 'field_verification_approved',
      1 => 'field_verification_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Status',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'status-fields',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_verification_1|verification|verification|form'] = $field_group;

  return $export;
}
