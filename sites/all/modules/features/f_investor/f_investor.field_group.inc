<?php
/**
 * @file
 * f_investor.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_investor_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_comp_1|investor|company|form';
  $field_group->group_name = 'group_invest_comp_1';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grundläggande',
    'weight' => '0',
    'children' => array(
      0 => 'field_invest_comp_name',
      1 => 'field_invest_comp_own',
      2 => 'field_shared_industries',
      3 => 'field_shared_temp',
      4 => 'field_shared_inv_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Grundläggande',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-invest-comp-1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_invest_comp_1|investor|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_comp_2|investor|company|form';
  $field_group->group_name = 'group_invest_comp_2';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontaktuppgifter',
    'weight' => '2',
    'children' => array(
      0 => 'field_shared_cell',
      1 => 'field_shared_email',
      2 => 'field_shared_phone',
      3 => 'field_shared_fax',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kontaktuppgifter',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-invest-comp-2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_invest_comp_2|investor|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_pers_1|investor|person|form';
  $field_group->group_name = 'group_invest_pers_1';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grundläggande',
    'weight' => '0',
    'children' => array(
      0 => 'field_invest_pers_first_name',
      1 => 'field_invest_pers_last_name',
      2 => 'field_shared_industries',
      3 => 'field_shared_temp',
      4 => 'field_shared_inv_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Grundläggande',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-invest-pers-1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_invest_pers_1|investor|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_pers_2|investor|person|form';
  $field_group->group_name = 'group_invest_pers_2';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontaktuppgifter',
    'weight' => '2',
    'children' => array(
      0 => 'field_shared_cell',
      1 => 'field_shared_email',
      2 => 'field_shared_phone',
      3 => 'field_shared_fax',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kontaktuppgifter',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-invest-pers-2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_invest_pers_2|investor|person|form'] = $field_group;

  return $export;
}
