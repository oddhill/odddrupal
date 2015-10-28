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
    'label' => 'Sidebar',
    'weight' => '1',
    'children' => array(
      0 => 'field_cap_rais_date',
      1 => 'group_cap_rais_3',
      2 => 'group_cap_rais_details',
      3 => 'group_cap_rais_title',
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
    'label' => 'Body',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_cap_rais_file',
      2 => 'field_cap_rais_text_def',
      3 => 'field_cap_rais_info_mail',
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
  $export['group_cap_rais_2|node|capital_raising|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_rais_3|node|capital_raising|form';
  $field_group->group_name = 'group_cap_rais_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'capital_raising';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cap_rais_1';
  $field_group->data = array(
    'label' => 'Mål för emission',
    'weight' => '28',
    'children' => array(
      0 => 'field_cap_rais_goal_com',
      1 => 'field_cap_rais_goal_guar',
      2 => 'field_cap_rais_goal_tot',
      3 => 'field_cap_rais_goal_oth',
      4 => 'field_cap_rais_goal_newem',
      5 => 'field_cap_rais_goal_pp',
      6 => 'field_cap_rais_goal_loan',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Mål för emission',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_rais_3|node|capital_raising|form'] = $field_group;

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
    'weight' => '27',
    'children' => array(
      0 => 'field_cap_rais_estim',
      1 => 'field_cap_rais_post',
      2 => 'field_cap_rais_rate',
      3 => 'field_cap_rais_stock_no',
      4 => 'field_cap_rais_vol',
      5 => 'field_cap_rais_post_units',
      6 => 'field_cap_rais_type',
      7 => 'field_cap_rais_units_no',
      8 => 'field_cap_rais_vol_units',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_rais_title|node|capital_raising|form';
  $field_group->group_name = 'group_cap_rais_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'capital_raising';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cap_rais_1';
  $field_group->data = array(
    'label' => 'Titel och kund',
    'weight' => '25',
    'children' => array(
      0 => 'field_cap_rais_comp',
      1 => 'title',
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
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_rais_title|node|capital_raising|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_bl|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_bl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erbjudande';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Brygglån',
    'weight' => '15',
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
        'classes' => 'group-offer-type-bl field-group-fieldset group-offer-type-bl-hidden',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_bl|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_bp|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_bp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erbjudande';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Blockpost',
    'weight' => '16',
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
        'classes' => 'group-offer-type-bp field-group-fieldset group-offer-type-bp-hidden',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_bp|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_fe|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_fe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erbjudande';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Företrädesemission',
    'weight' => '11',
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
        'classes' => 'group-offer-type-fe field-group-fieldset group-offer-type-fe-hidden',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_fe|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_le|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_le';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erbjudande';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Listningsemission',
    'weight' => '12',
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
        'classes' => 'group-offer-type-le field-group-fieldset group-offer-type-le-hidden',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_le|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_pp|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_pp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erbjudande';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Private Placement',
    'weight' => '13',
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
        'classes' => 'group-offer-type-pp field-group-fieldset group-offer-type-pp-hidden',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_pp|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_re|node|erbjudande|form';
  $field_group->group_name = 'group_offer_type_re';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erbjudande';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Riktad emission',
    'weight' => '14',
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
        'classes' => 'group-offer-type-re field-group-fieldset group-offer-type-re-hidden',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offer_type_re|node|erbjudande|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_types|node|erbjudande|form';
  $field_group->group_name = 'group_offer_types';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erbjudande';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Transaktions typ',
    'weight' => '10',
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

  return $export;
}
