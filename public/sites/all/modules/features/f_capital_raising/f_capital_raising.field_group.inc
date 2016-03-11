<?php
/**
 * @file
 * f_capital_raising.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_capital_raising_field_group_info() {
  $field_groups = array();

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
    'label' => 'Beskrivning',
    'weight' => '42',
    'children' => array(
      0 => 'field_offer_additional',
      1 => 'field_offer_files',
      2 => 'field_offer_text',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Beskrivning',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-offer-description field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_offer_description|node|offer|form'] = $field_group;

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
      1 => 'field_offer_logout_info',
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
  $field_groups['group_offer_details|node|offer|form'] = $field_group;

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
      0 => 'group_offer_description',
      1 => 'group_offer_details',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-offer-step-1 field-group-htabs',
      ),
    ),
  );
  $field_groups['group_offer_step_1|node|offer|form'] = $field_group;

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
    'weight' => '47',
    'children' => array(
      0 => 'group_offer_type_bl',
      1 => 'group_offer_type_bp',
      2 => 'group_offer_type_fe',
      3 => 'group_offer_type_le',
      4 => 'group_offer_type_pp',
      5 => 'group_offer_type_re',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Step 2',
      'instance_settings' => array(
        'classes' => 'group-offer-step-2 field-group-htabs ',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_offer_step_2|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_bl|node|offer|form';
  $field_group->group_name = 'group_offer_type_bl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_step_2';
  $field_group->data = array(
    'label' => 'Brygglån',
    'weight' => '52',
    'children' => array(
      0 => 'field_offer_type_bl_interest',
      1 => 'field_offer_type_bl_planned',
      2 => 'field_offer_type_bl_time',
      3 => 'field_offer_type_bl_sum',
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
  $field_groups['group_offer_type_bl|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_bp|node|offer|form';
  $field_group->group_name = 'group_offer_type_bp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_step_2';
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
  $field_groups['group_offer_type_bp|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_fe|node|offer|form';
  $field_group->group_name = 'group_offer_type_fe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_step_2';
  $field_group->data = array(
    'label' => 'Företrädesemission',
    'weight' => '48',
    'children' => array(
      0 => 'field_offer_type_fe_bonus',
      1 => 'field_offer_type_fe_payment',
      2 => 'field_offer_type_fe_pre',
      3 => 'field_offer_type_fe_rate',
      4 => 'field_offer_type_fe_terms',
      5 => 'field_offer_type_fe_sum',
      6 => 'field_offer_type_fe_time',
      7 => 'field_offer_type_fe_sign',
      8 => 'field_offer_type_fe_warrant',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Företrädesemission',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-offer-type-fe field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_offer_type_fe|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_le|node|offer|form';
  $field_group->group_name = 'group_offer_type_le';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_step_2';
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
      7 => 'field_offer_type_le_terms',
      8 => 'field_offer_type_le_sum',
      9 => 'field_offer_type_le_time',
      10 => 'field_offer_type_le_sign',
      11 => 'field_offer_type_le_warrant',
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
  $field_groups['group_offer_type_le|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_pp|node|offer|form';
  $field_group->group_name = 'group_offer_type_pp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_step_2';
  $field_group->data = array(
    'label' => 'Private Placement',
    'weight' => '50',
    'children' => array(
      0 => 'field_offer_type_pp_payment',
      1 => 'field_offer_type_pp_pre',
      2 => 'field_offer_type_pp_rate',
      3 => 'field_offer_type_pp_sum',
      4 => 'field_offer_type_pp_time',
      5 => 'field_offer_type_pp_sign',
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
  $field_groups['group_offer_type_pp|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_type_re|node|offer|form';
  $field_group->group_name = 'group_offer_type_re';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_offer_step_2';
  $field_group->data = array(
    'label' => 'Riktad emission',
    'weight' => '51',
    'children' => array(
      0 => 'field_offer_type_re_payment',
      1 => 'field_offer_type_re_pre',
      2 => 'field_offer_type_re_rate',
      3 => 'field_offer_type_re_sum',
      4 => 'field_offer_type_re_time',
      5 => 'field_offer_type_re_sign',
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
  $field_groups['group_offer_type_re|node|offer|form'] = $field_group;

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
    'weight' => '8',
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
  $field_groups['group_offer_types|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_view_description|node|offer|full';
  $field_group->group_name = 'group_offer_view_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'field_offer_additional',
      1 => 'field_offer_company',
      2 => 'field_offer_text',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'offer-description',
        'wrapper' => 'article',
      ),
    ),
  );
  $field_groups['group_offer_view_description|node|offer|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_view_sidebar|node|offer|full';
  $field_group->group_name = 'group_offer_view_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '2',
    'children' => array(
      0 => 'field_offer_files',
      1 => 'group_offer_view_type_bl',
      2 => 'group_offer_view_type_bp',
      3 => 'group_offer_view_type_fe',
      4 => 'group_offer_view_type_le',
      5 => 'group_offer_view_type_pp',
      6 => 'group_offer_view_type_re',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'offer-sidebar',
        'wrapper' => 'aside',
      ),
    ),
  );
  $field_groups['group_offer_view_sidebar|node|offer|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_view_type_bl|node|offer|full';
  $field_group->group_name = 'group_offer_view_type_bl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_offer_view_sidebar';
  $field_group->data = array(
    'label' => 'Brygglån',
    'weight' => '6',
    'children' => array(
      0 => 'field_offer_type_bl_interest',
      1 => 'field_offer_type_bl_planned',
      2 => 'field_offer_type_bl_time',
      3 => 'field_offer_type_bl_sum',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'offer-sidebar-type',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_offer_view_type_bl|node|offer|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_view_type_bp|node|offer|full';
  $field_group->group_name = 'group_offer_view_type_bp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_offer_view_sidebar';
  $field_group->data = array(
    'label' => 'Blockpost',
    'weight' => '7',
    'children' => array(
      0 => 'field_offer_type_bp_planned',
      1 => 'field_offer_type_bp_price',
      2 => 'field_offer_type_bp_sum',
      3 => 'field_offer_type_bp_time',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'offer-sidebar-type',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_offer_view_type_bp|node|offer|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_view_type_fe|node|offer|full';
  $field_group->group_name = 'group_offer_view_type_fe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_offer_view_sidebar';
  $field_group->data = array(
    'label' => 'Företrädesemission',
    'weight' => '2',
    'children' => array(
      0 => 'field_offer_type_fe_bonus',
      1 => 'field_offer_type_fe_payment',
      2 => 'field_offer_type_fe_pre',
      3 => 'field_offer_type_fe_rate',
      4 => 'field_offer_type_fe_terms',
      5 => 'field_offer_type_fe_sum',
      6 => 'field_offer_type_fe_time',
      7 => 'field_offer_type_fe_sign',
      8 => 'field_offer_type_fe_warrant',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Företrädesemission',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'offer-sidebar-type',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_offer_view_type_fe|node|offer|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_view_type_le|node|offer|full';
  $field_group->group_name = 'group_offer_view_type_le';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_offer_view_sidebar';
  $field_group->data = array(
    'label' => 'Listningsemission',
    'weight' => '3',
    'children' => array(
      0 => 'field_offer_type_le_bonus',
      1 => 'field_offer_type_le_count',
      2 => 'field_offer_type_le_low',
      3 => 'field_offer_type_le_market',
      4 => 'field_offer_type_le_payment',
      5 => 'field_offer_type_le_pre',
      6 => 'field_offer_type_le_rate',
      7 => 'field_offer_type_le_terms',
      8 => 'field_offer_type_le_sum',
      9 => 'field_offer_type_le_time',
      10 => 'field_offer_type_le_sign',
      11 => 'field_offer_type_le_warrant',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'offer-sidebar-type',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_offer_view_type_le|node|offer|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_view_type_pp|node|offer|full';
  $field_group->group_name = 'group_offer_view_type_pp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_offer_view_sidebar';
  $field_group->data = array(
    'label' => 'Private placement',
    'weight' => '4',
    'children' => array(
      0 => 'field_offer_type_pp_payment',
      1 => 'field_offer_type_pp_pre',
      2 => 'field_offer_type_pp_rate',
      3 => 'field_offer_type_pp_sum',
      4 => 'field_offer_type_pp_time',
      5 => 'field_offer_type_pp_sign',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'offer-sidebar-type',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_offer_view_type_pp|node|offer|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offer_view_type_re|node|offer|full';
  $field_group->group_name = 'group_offer_view_type_re';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_offer_view_sidebar';
  $field_group->data = array(
    'label' => 'Riktad emission',
    'weight' => '5',
    'children' => array(
      0 => 'field_offer_type_re_payment',
      1 => 'field_offer_type_re_pre',
      2 => 'field_offer_type_re_rate',
      3 => 'field_offer_type_re_sum',
      4 => 'field_offer_type_re_time',
      5 => 'field_offer_type_re_sign',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'offer-sidebar-type',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_offer_view_type_re|node|offer|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_transaction_agree_wrap|node|transaction_agreement|form';
  $field_group->group_name = 'group_transaction_agree_wrap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'transaction_agreement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Modal form wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'field_transaction_agree_doc',
      1 => 'field_transaction_agree_sign',
      2 => 'field_transaction_agree_to_sign',
      3 => 'field_transaction_agree_sign_day',
      4 => 'field_transaction_agree_to_sign_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Modal form wrapper',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'modal-form-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_transaction_agree_wrap|node|transaction_agreement|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Beskrivning');
  t('Blockpost');
  t('Brygglån');
  t('Description');
  t('Detaljer');
  t('Företrädesemission');
  t('Listningsemission');
  t('Modal form wrapper');
  t('Private Placement');
  t('Private placement');
  t('Riktad emission');
  t('Sidebar');
  t('Step 1');
  t('Step 2');
  t('Transaktionstyp');

  return $field_groups;
}
