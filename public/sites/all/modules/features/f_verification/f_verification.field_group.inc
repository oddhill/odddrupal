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
  $field_group->identifier = 'group_ctrl_complex_notes|node|ctrl_complementing|form';
  $field_group->group_name = 'group_ctrl_complex_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_complex';
  $field_group->data = array(
    'label' => 'Övrig kommentar',
    'weight' => '44',
    'children' => array(
      0 => 'field_ctrl_complex_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Övrig kommentar',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-complex-notes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_complex_notes|node|ctrl_complementing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_complex|node|ctrl_complementing|form';
  $field_group->group_name = 'group_ctrl_complex';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_pen_items';
  $field_group->data = array(
    'label' => 'Komplex',
    'weight' => '7',
    'children' => array(
      0 => 'field_ctrl_complex',
      1 => 'group_ctrl_complex_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Komplex',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-complex field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_complex|node|ctrl_complementing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_fitting|node|ctrl_pen|form';
  $field_group->group_name = 'group_ctrl_fitting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_pen_items';
  $field_group->data = array(
    'label' => 'Passande',
    'weight' => '5',
    'children' => array(
      0 => 'field_ctrl_fitting',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Passande',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-fitting field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_fitting|node|ctrl_pen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_followup_notes|node|ctrl_pen|form';
  $field_group->group_name = 'group_ctrl_followup_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_followup';
  $field_group->data = array(
    'label' => 'Övrig kommentar',
    'weight' => '10',
    'children' => array(
      0 => 'field_ctrl_followup_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Övrig kommentar',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-followup-notes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_followup_notes|node|ctrl_pen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_followup|node|ctrl_pen|form';
  $field_group->group_name = 'group_ctrl_followup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_pen_items';
  $field_group->data = array(
    'label' => 'Uppföljning',
    'weight' => '9',
    'children' => array(
      0 => 'field_ctrl_followup',
      1 => 'group_ctrl_followup_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Uppföljning',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-followup field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_followup|node|ctrl_pen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_items|node|ctrl|form';
  $field_group->group_name = 'group_ctrl_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form items',
    'weight' => '1',
    'children' => array(
      0 => 'field_ctrl_files',
      1 => 'field_ctrl_notes',
      2 => 'group_ctrl_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Form items',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'form-items-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_items|node|ctrl|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_low_risk_notes|node|ctrl_pen|form';
  $field_group->group_name = 'group_ctrl_low_risk_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_low_risk';
  $field_group->data = array(
    'label' => 'Övrig kommentar',
    'weight' => '48',
    'children' => array(
      0 => 'field_ctrl_low_risk_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Övrig kommentar',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-low-risk-notes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_low_risk_notes|node|ctrl_pen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_low_risk|node|ctrl_pen|form';
  $field_group->group_name = 'group_ctrl_low_risk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_pen_items';
  $field_group->data = array(
    'label' => 'Låg risk',
    'weight' => '10',
    'children' => array(
      0 => 'field_ctrl_low_risk',
      1 => 'group_ctrl_low_risk_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Låg risk',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-low-risk field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_low_risk|node|ctrl_pen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_pen_items|node|ctrl_pen|form';
  $field_group->group_name = 'group_ctrl_pen_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form items',
    'weight' => '4',
    'children' => array(
      0 => 'field_ctrl_pen_ok',
      1 => 'group_ctrl_complex',
      2 => 'group_ctrl_fitting',
      3 => 'group_ctrl_followup',
      4 => 'group_ctrl_low_risk',
      5 => 'group_ctrl_risk',
      6 => 'group_ctrl_source',
      7 => 'group_ctrl_suspected',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Form items',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'form-items-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_pen_items|node|ctrl_pen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_risk_notes|node|ctrl_pen|form';
  $field_group->group_name = 'group_ctrl_risk_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_risk';
  $field_group->data = array(
    'label' => 'Övrig kommentar',
    'weight' => '51',
    'children' => array(
      0 => 'field_ctrl_risk_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Övrig kommentar',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-risk-notes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_risk_notes|node|ctrl_pen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_risk|node|ctrl_pen|form';
  $field_group->group_name = 'group_ctrl_risk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_pen_items';
  $field_group->data = array(
    'label' => 'Risk',
    'weight' => '11',
    'children' => array(
      0 => 'field_ctrl_risk',
      1 => 'group_ctrl_risk_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Risk',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-risk field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_risk|node|ctrl_pen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_source|node|ctrl_pen|form';
  $field_group->group_name = 'group_ctrl_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_pen_items';
  $field_group->data = array(
    'label' => 'Ursprung',
    'weight' => '6',
    'children' => array(
      0 => 'field_ctrl_source',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ursprung',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-source field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_source|node|ctrl_pen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_status|node|ctrl|form';
  $field_group->group_name = 'group_ctrl_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_items';
  $field_group->data = array(
    'label' => 'Kontrollstatus',
    'weight' => '3',
    'children' => array(
      0 => 'field_ctrl_app',
      1 => 'field_ctrl_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kontrollstatus',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'ctrl-status',
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
  $field_group->identifier = 'group_ctrl_suspect_notes|node|ctrl_complementing|form';
  $field_group->group_name = 'group_ctrl_suspect_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_suspected';
  $field_group->data = array(
    'label' => 'Övrig kommentar',
    'weight' => '46',
    'children' => array(
      0 => 'field_ctrl_suspect_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Övrig kommentar',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-suspect-notes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_suspect_notes|node|ctrl_complementing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_suspected|node|ctrl_complementing|form';
  $field_group->group_name = 'group_ctrl_suspected';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ctrl_pen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_pen_items';
  $field_group->data = array(
    'label' => 'Misstänkt',
    'weight' => '8',
    'children' => array(
      0 => 'field_ctrl_suspect',
      1 => 'group_ctrl_suspect_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Misstänkt',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ctrl-suspected field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ctrl_suspected|node|ctrl_complementing|form'] = $field_group;

  return $export;
}
