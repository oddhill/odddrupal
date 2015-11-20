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
  $field_group->identifier = 'group_body|node|erbjudande|form';
  $field_group->group_name = 'group_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'step_offer_1';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '34',
    'children' => array(
      0 => 'field_offer_text',
      1 => 'field_offer_additional',
      2 => 'field_offer_files',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_body|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body|node|offer|form';
  $field_group->group_name = 'group_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'step_offer_1';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '34',
    'children' => array(
      0 => 'field_offer_text',
      1 => 'field_offer_additional',
      2 => 'field_offer_files',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_body|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_define|node|offer|form';
  $field_group->group_name = 'group_offer_define';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_step_2';
  $field_group->data = array(
    'label' => 'Definiera',
    'weight' => '47',
    'children' => array(
      0 => 'group_offer_type_bl',
      1 => 'group_offer_type_bp',
      2 => 'group_offer_type_fe',
      3 => 'group_offer_type_le',
      4 => 'group_offer_type_pp',
      5 => 'group_offer_type_re',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-offer-define field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_offer_define|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_description|node|offer|form';
  $field_group->group_name = 'group_offer_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_step_1';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '42',
    'children' => array(
      0 => 'field_offer_additional',
      1 => 'field_offer_files',
      2 => 'field_offer_text',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-offer-description field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_offer_description|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_details|node|offer|form';
  $field_group->group_name = 'group_offer_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_step_1';
  $field_group->data = array(
    'label' => 'Detaljer',
    'weight' => '41',
    'children' => array(
      0 => 'field_offer_company',
      1 => 'field_offer_time',
      2 => 'title',
      3 => 'group_offer_types',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-offer-details field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_offer_details|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_step_1|node|offer|form';
  $field_group->group_name = 'group_offer_step_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'step_offer_1';
  $field_group->data = array(
    'label' => 'Step 1',
    'weight' => '41',
    'children' => array(
      0 => 'group_offer_details',
      1 => 'group_offer_description',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-offer-step-1 field-group-htabs',
      ),
    ),
  );
  $export['group_offer_step_1|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_step_2|node|offer|form';
  $field_group->group_name = 'group_offer_step_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'step_offer_2';
  $field_group->data = array(
    'label' => 'Step 2',
    'weight' => '35',
    'children' => array(
      0 => 'group_offer_define',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-offer-step-2 field-group-htabs',
      ),
    ),
  );
  $export['group_offer_step_2|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_bl|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_bl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_types';
  $field_group->data = array(
    'label' => 'Brygglån',
    'weight' => '38',
    'children' => array(
      0 => 'field_offer_type_bl_sum',
      1 => 'field_offer_type_bl_time',
      2 => 'field_offer_type_bl_interest',
      3 => 'field_offer_type_bl_planned',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Brygglån',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-bl field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_bl|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_bl|node|offer|form';
  $field_group->group_name = 'group_offer_type_bl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_define';
  $field_group->data = array(
    'label' => 'Brygglån',
    'weight' => '52',
    'children' => array(
      0 => 'field_offer_type_bl_interest',
      1 => 'field_offer_type_bl_planned',
      2 => 'field_offer_type_bl_sum',
      3 => 'field_offer_type_bl_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Brygglån',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-bl field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_bl|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_bp|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_bp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_types';
  $field_group->data = array(
    'label' => 'Blockpost',
    'weight' => '39',
    'children' => array(
      0 => 'field_offer_type_bp_sum',
      1 => 'field_offer_type_bp_time',
      2 => 'field_offer_type_bp_price',
      3 => 'field_offer_type_bp_planned',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Blockpost',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-bp field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_bp|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_bp|node|offer|form';
  $field_group->group_name = 'group_offer_type_bp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_define';
  $field_group->data = array(
    'label' => 'Blockpost',
    'weight' => '53',
    'children' => array(
      0 => 'field_offer_type_bp_planned',
      1 => 'field_offer_type_bp_price',
      2 => 'field_offer_type_bp_sum',
      3 => 'field_offer_type_bp_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Blockpost',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-bp field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_bp|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_fe|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_fe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_types';
  $field_group->data = array(
    'label' => 'Företrädesemission',
    'weight' => '34',
    'children' => array(
      0 => 'field_offer_type_fe_sum',
      1 => 'field_offer_type_fe_rate',
      2 => 'field_offer_type_fe_time',
      3 => 'field_offer_type_fe_pre',
      4 => 'field_offer_type_fe_sign',
      5 => 'field_offer_type_fe_warrant',
      6 => 'field_offer_type_fe_warrant_type',
      7 => 'field_offer_type_fe_bonus',
      8 => 'field_offer_type_fe_terms',
      9 => 'field_offer_type_fe_payment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Företrädesemission',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-fe field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_fe|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_fe|node|offer|form';
  $field_group->group_name = 'group_offer_type_fe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_define';
  $field_group->data = array(
    'label' => 'Företrädesemission',
    'weight' => '48',
    'children' => array(
      0 => 'field_offer_type_fe_bonus',
      1 => 'field_offer_type_fe_payment',
      2 => 'field_offer_type_fe_pre',
      3 => 'field_offer_type_fe_rate',
      4 => 'field_offer_type_fe_sign',
      5 => 'field_offer_type_fe_sum',
      6 => 'field_offer_type_fe_terms',
      7 => 'field_offer_type_fe_time',
      8 => 'field_offer_type_fe_warrant',
      9 => 'field_offer_type_fe_warrant_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Företrädesemission',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-fe field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_fe|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_le|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_le';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_types';
  $field_group->data = array(
    'label' => 'Listningsemission',
    'weight' => '35',
    'children' => array(
      0 => 'field_offer_type_le_sum',
      1 => 'field_offer_type_le_rate',
      2 => 'field_offer_type_le_time',
      3 => 'field_offer_type_le_pre',
      4 => 'field_offer_type_le_sign',
      5 => 'field_offer_type_le_warrant',
      6 => 'field_offer_type_le_warrant_type',
      7 => 'field_offer_type_le_low',
      8 => 'field_offer_type_le_terms',
      9 => 'field_offer_type_le_bonus',
      10 => 'field_offer_type_le_market',
      11 => 'field_offer_type_le_count',
      12 => 'field_offer_type_le_payment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Listningsemission',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-le field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_le|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_le|node|offer|form';
  $field_group->group_name = 'group_offer_type_le';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_define';
  $field_group->data = array(
    'label' => 'Listningsemission',
    'weight' => '49',
    'children' => array(
      0 => 'field_offer_type_le_bonus',
      1 => 'field_offer_type_le_count',
      2 => 'field_offer_type_le_low',
      3 => 'field_offer_type_le_market',
      4 => 'field_offer_type_le_payment',
      5 => 'field_offer_type_le_pre',
      6 => 'field_offer_type_le_rate',
      7 => 'field_offer_type_le_sign',
      8 => 'field_offer_type_le_sum',
      9 => 'field_offer_type_le_terms',
      10 => 'field_offer_type_le_time',
      11 => 'field_offer_type_le_warrant',
      12 => 'field_offer_type_le_warrant_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Listningsemission',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-le field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_le|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_pp|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_pp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_types';
  $field_group->data = array(
    'label' => 'Private Placement',
    'weight' => '36',
    'children' => array(
      0 => 'field_offer_type_pp_sum',
      1 => 'field_offer_type_pp_time',
      2 => 'field_offer_type_pp_pre',
      3 => 'field_offer_type_pp_rate',
      4 => 'field_offer_type_pp_sign',
      5 => 'field_offer_type_pp_payment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Private Placement',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-pp field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_pp|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_pp|node|offer|form';
  $field_group->group_name = 'group_offer_type_pp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_define';
  $field_group->data = array(
    'label' => 'Private Placement',
    'weight' => '50',
    'children' => array(
      0 => 'field_offer_type_pp_payment',
      1 => 'field_offer_type_pp_pre',
      2 => 'field_offer_type_pp_rate',
      3 => 'field_offer_type_pp_sign',
      4 => 'field_offer_type_pp_sum',
      5 => 'field_offer_type_pp_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Private Placement',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-pp field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_pp|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_re|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_re';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_types';
  $field_group->data = array(
    'label' => 'Riktad emission',
    'weight' => '37',
    'children' => array(
      0 => 'field_offer_type_re_sum',
      1 => 'field_offer_type_re_time',
      2 => 'field_offer_type_re_pre',
      3 => 'field_offer_type_re_rate',
      4 => 'field_offer_type_re_sign',
      5 => 'field_offer_type_re_payment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Riktad emission',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-re field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_re|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_re|node|offer|form';
  $field_group->group_name = 'group_offer_type_re';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_define';
  $field_group->data = array(
    'label' => 'Riktad emission',
    'weight' => '51',
    'children' => array(
      0 => 'field_offer_type_re_payment',
      1 => 'field_offer_type_re_pre',
      2 => 'field_offer_type_re_rate',
      3 => 'field_offer_type_re_sign',
      4 => 'field_offer_type_re_sum',
      5 => 'field_offer_type_re_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Riktad emission',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-re field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_re|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_types|node|erbjudande|form';
  $field_group->group_name = 'group_offer_types';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sidebar';
  $field_group->data = array(
    'label' => 'Transaktions typ',
    'weight' => '33',
    'children' => array(
      0 => 'field_offer_type_pp',
      1 => 'field_offer_type_fe',
      2 => 'field_offer_type_le',
      3 => 'field_offer_type_re',
      4 => 'field_offer_type_bl',
      5 => 'field_offer_type_bp',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Transaktions typ',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-types field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_types|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_types|node|offer|form';
  $field_group->group_name = 'group_offer_types';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_details';
  $field_group->data = array(
    'label' => 'Transaktionstyp',
    'weight' => '7',
    'children' => array(
      0 => 'field_offer_type_bl',
      1 => 'field_offer_type_bp',
      2 => 'field_offer_type_fe',
      3 => 'field_offer_type_le',
      4 => 'field_offer_type_pp',
      5 => 'field_offer_type_re',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Transaktionstyp',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-types field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_types|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|erbjudande|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'step_offer_1';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '33',
    'children' => array(
      0 => 'field_offer_logout_info',
      1 => 'group_offer_types',
      2 => 'group_title',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|offer|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'step_offer_1';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '33',
    'children' => array(
      0 => 'field_offer_logout_info',
      1 => 'group_offer_types',
      2 => 'group_title',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|node|erbjudande|form';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sidebar';
  $field_group->data = array(
    'label' => 'Titel och kund',
    'weight' => '32',
    'children' => array(
      0 => 'field_offer_company',
      1 => 'field_offer_time',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Titel och kund',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => 'title-wrapper',
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
  $export['group_title|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|node|offer|form';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sidebar';
  $field_group->data = array(
    'label' => 'Titel och kund',
    'weight' => '32',
    'children' => array(
      0 => 'field_offer_company',
      1 => 'field_offer_time',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Titel och kund',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => 'title-wrapper',
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
  $export['group_title|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_types|node|offer|form';
  $field_group->group_name = 'group_types';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'step_offer_2';
  $field_group->data = array(
    'label' => 'Types',
    'weight' => '35',
    'children' => array(
      0 => 'group_offer_type_fe',
      1 => 'group_offer_type_le',
      2 => 'group_offer_type_pp',
      3 => 'group_offer_type_re',
      4 => 'group_offer_type_bl',
      5 => 'group_offer_type_bp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Types',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-types field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_types|node|offer|form'] = $field_group;

  return $export;
}
