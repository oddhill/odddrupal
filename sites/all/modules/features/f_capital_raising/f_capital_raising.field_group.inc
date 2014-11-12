<?php
/**
 * @file
 * f_capital_raising.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_capital_raising_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_rais_1|node|capital_raising|form';
  $field_group->group_name = 'group_cap_rais_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'capital_raising';
  $field_group->mode = 'form';
  $field_group->parent_name = 'step_cap_rais_1';
  $field_group->data = array(
    'label' => 'Grundläggande',
    'weight' => '1',
    'children' => array(
      0 => 'field_cap_rais_comp',
      1 => 'field_cap_rais_date',
      2 => 'title',
      3 => 'group_cap_rais_details',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Grundläggande',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => 'transaction_basics',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_rais_1|node|capital_raising|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_rais_2|node|capital_raising|form';
  $field_group->group_name = 'group_cap_rais_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'capital_raising';
  $field_group->mode = 'form';
  $field_group->parent_name = 'step_cap_rais_1';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_cap_rais_file',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => 'transaction_text',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_rais_2|node|capital_raising|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_rais_details|node|capital_raising|form';
  $field_group->group_name = 'group_cap_rais_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'capital_raising';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cap_rais_1';
  $field_group->data = array(
    'label' => 'Detaljer',
    'weight' => '17',
    'children' => array(
      0 => 'field_cap_rais_estim',
      1 => 'field_cap_rais_post',
      2 => 'field_cap_rais_rate',
      3 => 'field_cap_rais_stock_no',
      4 => 'field_cap_rais_vol',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Detaljer',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-cap-rais-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_rais_details|node|capital_raising|form'] = $field_group;

  return $export;
}
