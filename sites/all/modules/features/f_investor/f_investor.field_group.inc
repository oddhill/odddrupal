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
  $field_group->identifier = 'group_ap|node|investor_bolag|form';
  $field_group->group_name = 'group_ap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'investor_bolag';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_head';
  $field_group->data = array(
    'label' => 'Allmänt',
    'weight' => '18',
    'children' => array(
      0 => 'field_investor_comp_notes',
      1 => 'field_investor_comp_address',
      2 => 'field_investor_comp_owners',
      3 => 'field_investor_comp_org_nbr',
      4 => 'field_shared_cust_id',
      5 => 'field_investor_comp_real',
      6 => 'field_shared_cont_pers',
      7 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ap|node|investor_bolag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ap|node|investor_privat|form';
  $field_group->group_name = 'group_ap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'investor_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_head';
  $field_group->data = array(
    'label' => 'Allmänt',
    'weight' => '14',
    'children' => array(
      0 => 'field_invest_pvt_notes',
      1 => 'field_shared_cust_id',
      2 => 'field_shared_cont_pers',
      3 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ap|node|investor_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comp_ctrl|node|investor_bolag|form';
  $field_group->group_name = 'group_comp_ctrl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'investor_bolag';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_head';
  $field_group->data = array(
    'label' => 'Kontroll',
    'weight' => '20',
    'children' => array(
      0 => 'field_investor_comp_ctrl_ua',
      1 => 'field_investor_comp_ctrl_ptv',
      2 => 'field_investor_comp_ctrl_cred',
      3 => 'field_investor_comp_ctrl_reg',
      4 => 'field_investor_comp_ctrl_oth',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Kontroll',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_comp_ctrl|node|investor_bolag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_head|node|investor_bolag|form';
  $field_group->group_name = 'group_head';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'investor_bolag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Head',
    'weight' => '4',
    'children' => array(
      0 => 'group_ap',
      1 => 'group_comp_ctrl',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_head|node|investor_bolag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_head|node|investor_privat|form';
  $field_group->group_name = 'group_head';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'investor_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Head',
    'weight' => '4',
    'children' => array(
      0 => 'group_prv_ctrl',
      1 => 'group_ap',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_head|node|investor_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_head|node|person|form';
  $field_group->group_name = 'group_head';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Head',
    'weight' => '3',
    'children' => array(
      0 => 'group_id_ctrl',
      1 => 'group_user',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_head|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_id_ctrl|node|person|form';
  $field_group->group_name = 'group_id_ctrl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_head';
  $field_group->data = array(
    'label' => 'ID-kontroll',
    'weight' => '5',
    'children' => array(
      0 => 'field_user_id_ctrl',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_id_ctrl|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_comp_1|investor|company|form';
  $field_group->group_name = 'group_invest_comp_1';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_invest_comp_sidebar';
  $field_group->data = array(
    'label' => 'Grundläggande',
    'weight' => '9',
    'children' => array(
      0 => 'field_invest_comp_name',
      1 => 'field_invest_comp_own',
      2 => 'field_shared_industries',
      3 => 'field_shared_temp',
      4 => 'field_invest_comp_id',
      5 => 'field_shared_inv_id',
      6 => 'field_shared_interests',
      7 => 'field_shared_custresp',
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
  $field_group->parent_name = 'group_invest_comp_body';
  $field_group->data = array(
    'label' => 'Kontaktuppgifter',
    'weight' => '11',
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
  $field_group->identifier = 'group_invest_comp_body|investor|company|form';
  $field_group->group_name = 'group_invest_comp_body';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '1',
    'children' => array(
      0 => 'field_shared_address',
      1 => 'field_shared_notes',
      2 => 'field_invest_cont_person',
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
  $export['group_invest_comp_body|investor|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_comp_sidebar|investor|company|form';
  $field_group->group_name = 'group_invest_comp_sidebar';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '0',
    'children' => array(
      0 => 'group_invest_comp_1',
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
  $export['group_invest_comp_sidebar|investor|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_lead_1|investor|lead|form';
  $field_group->group_name = 'group_invest_lead_1';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'lead';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_invest_lead_sidebar';
  $field_group->data = array(
    'label' => 'Grundläggande',
    'weight' => '11',
    'children' => array(
      0 => 'field_lead_first_name',
      1 => 'field_lead_last_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Grundläggande',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-invest-lead-1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_invest_lead_1|investor|lead|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_lead_2|investor|lead|form';
  $field_group->group_name = 'group_invest_lead_2';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'lead';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_invest_lead_body';
  $field_group->data = array(
    'label' => 'Kontaktuppgifter',
    'weight' => '16',
    'children' => array(
      0 => 'field_shared_cell',
      1 => 'field_shared_email',
      2 => 'field_shared_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kontaktuppgifter',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-invest-lead-2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_invest_lead_2|investor|lead|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_lead_body|investor|lead|form';
  $field_group->group_name = 'group_invest_lead_body';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'lead';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '1',
    'children' => array(
      0 => 'field_shared_notes',
      1 => 'field_invest_lead_cont',
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
  $export['group_invest_lead_body|investor|lead|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_lead_sidebar|investor|lead|form';
  $field_group->group_name = 'group_invest_lead_sidebar';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'lead';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '0',
    'children' => array(
      0 => 'group_invest_lead_1',
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
  $export['group_invest_lead_sidebar|investor|lead|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_pers_1|investor|person|form';
  $field_group->group_name = 'group_invest_pers_1';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_invest_pers_sidebar';
  $field_group->data = array(
    'label' => 'Grundläggande',
    'weight' => '1',
    'children' => array(
      0 => 'field_invest_pers_first_name',
      1 => 'field_invest_pers_last_name',
      2 => 'field_shared_industries',
      3 => 'field_shared_temp',
      4 => 'field_invest_pers_id',
      5 => 'field_shared_inv_id',
      6 => 'field_shared_interests',
      7 => 'field_shared_custresp',
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
  $field_group->parent_name = 'group_invest_pers_body';
  $field_group->data = array(
    'label' => 'Kontaktuppgifter',
    'weight' => '3',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_pers_body|investor|person|form';
  $field_group->group_name = 'group_invest_pers_body';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '1',
    'children' => array(
      0 => 'field_shared_address',
      1 => 'field_shared_notes',
      2 => 'field_invest_cont_person_prvt',
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
  $export['group_invest_pers_body|investor|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_pers_sidebar|investor|person|form';
  $field_group->group_name = 'group_invest_pers_sidebar';
  $field_group->entity_type = 'investor';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '0',
    'children' => array(
      0 => 'group_invest_pers_1',
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
  $export['group_invest_pers_sidebar|investor|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prv_ctrl|node|investor_privat|form';
  $field_group->group_name = 'group_prv_ctrl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'investor_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_head';
  $field_group->data = array(
    'label' => 'Kontroll',
    'weight' => '15',
    'children' => array(
      0 => 'field_invest_pvt_ctrl_ua',
      1 => 'field_invest_pvt_ctrl_ptv',
      2 => 'field_invest_pvt_ctrl_cred',
      3 => 'field_invest_pvt_ctrl_ext',
      4 => 'field_invest_pvt_ctrl_oth',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Kontroll',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_prv_ctrl|node|investor_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user|node|person|form';
  $field_group->group_name = 'group_user';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_head';
  $field_group->data = array(
    'label' => 'Allmänt',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_mail',
      1 => 'field_user_cell',
      2 => 'field_user_phone',
      3 => 'field_user_fax',
      4 => 'field_user_owner',
      5 => 'field_user_ssn',
      6 => 'field_user_branches',
      7 => 'field_user_interests',
      8 => 'field_user_notes',
      9 => 'field_user_lead',
      10 => 'field_user_id_address',
      11 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_user|node|person|form'] = $field_group;

  return $export;
}
