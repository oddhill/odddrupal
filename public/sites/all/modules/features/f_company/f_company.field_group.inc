<?php
/**
 * @file
 * f_company.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_company_field_group_info() {
  $field_groups = array();

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
  $field_groups['group_comp_1|node|company|form'] = $field_group;

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
      2 => 'field_comp_org_nbr',
      3 => 'field_comp_cust_resp',
      4 => 'field_comp_cont_person',
      5 => 'field_comp_principal_person',
      6 => 'field_comp_address',
      7 => 'field_comp_notes',
      8 => 'field_comp_id',
      9 => 'title',
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
  $field_groups['group_comp_basics|node|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conflict_items|node|conflict|form';
  $field_group->group_name = 'group_conflict_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conflict';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form items',
    'weight' => '4',
    'children' => array(
      0 => 'field_conflict_1',
      1 => 'field_conflict_2',
      2 => 'field_conflict_3',
      3 => 'field_conflict_4',
      4 => 'field_conflict_5',
      5 => 'field_conflict_6',
      6 => 'field_conflict_assessment',
      7 => 'field_conflict_handling',
      8 => 'field_conflict_7',
      9 => 'field_conflict_8',
      10 => 'field_conflict_9',
      11 => 'field_conflict_10',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Form items',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'form-items-wrapper',
        'description' => 'Markera de konflikter som föreligger.',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_conflict_items|node|conflict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_credit_risk_emission|node|credit_risk|form';
  $field_group->group_name = 'group_credit_risk_emission';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'credit_risk';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_credit_risk_items';
  $field_group->data = array(
    'label' => 'Emission',
    'weight' => '42',
    'children' => array(
      0 => 'field_credit_risk_emission',
      1 => 'field_credit_risk_emission_value',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Emission',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'emission',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_credit_risk_emission|node|credit_risk|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_credit_risk_items|node|credit_risk|form';
  $field_group->group_name = 'group_credit_risk_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'credit_risk';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form items',
    'weight' => '4',
    'children' => array(
      0 => 'field_credit_risk_pot_inc',
      1 => 'field_credit_risk_signee',
      2 => 'field_credit_risk_comp_risk',
      3 => 'field_shared_signed_app_ctrl',
      4 => 'field_credit_risk_cred',
      5 => 'field_credit_risk_annual',
      6 => 'field_credit_risk_assessment',
      7 => 'group_credit_risk_emission',
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
  $field_groups['group_credit_risk_items|node|credit_risk|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cust_app_control|node|customer_approval|form';
  $field_group->group_name = 'group_cust_app_control';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer_approval';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontroll',
    'weight' => '11',
    'children' => array(
      0 => 'field_cust_app_credit_risk',
      1 => 'field_cust_app_cust_history',
      2 => 'field_cust_app_conflict',
      3 => 'field_cust_app_money_launder',
      4 => 'field_cust_app_suitability',
      5 => 'field_cust_app_final_app',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cust_app_control|node|customer_approval|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_history_badwill|node|customer_history|form';
  $field_group->group_name = 'group_customer_history_badwill';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer_history';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_customer_history_items';
  $field_group->data = array(
    'label' => 'Undersökning gällande risker för medial badwill',
    'weight' => '17',
    'children' => array(
      0 => 'field_customer_history_badwill',
      1 => 'field_customer_history_bad_file',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Undersökning gällande risker för medial badwill',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'badwill',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_customer_history_badwill|node|customer_history|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_history_items|node|customer_history|form';
  $field_group->group_name = 'group_customer_history_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer_history';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form items',
    'weight' => '4',
    'children' => array(
      0 => 'field_customer_history_assessmen',
      1 => 'field_customer_history_etics',
      2 => 'field_customer_history_hist',
      3 => 'field_customer_history_executive',
      4 => 'group_customer_history_badwill',
      5 => 'group_customer_history_registry',
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
  $field_groups['group_customer_history_items|node|customer_history|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_history_registry|node|customer_history|form';
  $field_group->group_name = 'group_customer_history_registry';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer_history';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_customer_history_items';
  $field_group->data = array(
    'label' => 'Registreringsbevis',
    'weight' => '14',
    'children' => array(
      0 => 'field_customer_history_off_ctrl',
      1 => 'field_customer_history_reg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Registreringsbevis',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'registry',
        'description' => 'Ej äldre än 6 månader',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_customer_history_registry|node|customer_history|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exec_badwill|field_collection_item|field_customer_history_executive|form';
  $field_group->group_name = 'group_exec_badwill';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_customer_history_executive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Undersökning gällande risker för medial badwill',
    'weight' => '1',
    'children' => array(
      0 => 'field_exec_badwill',
      1 => 'field_exec_badwill_file',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Undersökning gällande risker för medial badwill',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'badwill',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_exec_badwill|field_collection_item|field_customer_history_executive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_final_items|node|final_approval|form';
  $field_group->group_name = 'group_final_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'final_approval';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form items',
    'weight' => '4',
    'children' => array(
      0 => 'field_final_assessment',
      1 => 'field_final_competence',
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
  $field_groups['group_final_items|node|final_approval|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_money_launder_items|node|money_launder|form';
  $field_group->group_name = 'group_money_launder_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'money_launder';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form items',
    'weight' => '4',
    'children' => array(
      0 => 'field_money_launder_head',
      1 => 'field_money_launder_regime',
      2 => 'field_money_launder_company',
      3 => 'field_money_launder_eu_file',
      4 => 'field_money_launder_assessment',
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
  $field_groups['group_money_launder_items|node|money_launder|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_details|node|proposal|form';
  $field_group->group_name = 'group_proposal_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal';
  $field_group->data = array(
    'label' => 'Detaljer',
    'weight' => '13',
    'children' => array(
      0 => 'field_proposal_company',
      1 => 'field_proposal_customer',
      2 => 'field_proposal_final',
      3 => 'field_proposal_approval',
      4 => 'field_proposal_cust_approval',
      5 => 'field_proposal_case_number',
      6 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposal-details field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_proposal_details|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal|node|proposal|form';
  $field_group->group_name = 'group_proposal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Proposal',
    'weight' => '0',
    'children' => array(
      0 => 'group_proposal_details',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-proposal field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_proposal|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_suitability_quest_items|node|suitability_assessment|form';
  $field_group->group_name = 'group_suitability_quest_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'suitability_assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form items',
    'weight' => '4',
    'children' => array(
      0 => 'field_suitability_quest_1_note',
      1 => 'field_suitability_quest_2',
      2 => 'field_suitability_quest_2_note',
      3 => 'field_suitability_quest_3',
      4 => 'field_suitability_quest_3_note',
      5 => 'field_suitability_quest_4',
      6 => 'field_suitability_quest_4_note',
      7 => 'field_suitability_quest_5',
      8 => 'field_suitability_quest_5_note',
      9 => 'field_suitability_quest_6',
      10 => 'field_suitability_quest_6_note',
      11 => 'field_suitability_quest_7',
      12 => 'field_suitability_quest_7_note',
      13 => 'field_suitability_quest_8',
      14 => 'field_suitability_quest_8_note',
      15 => 'field_suitability_quest_1',
      16 => 'field_suitability_quest_assessme',
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
  $field_groups['group_suitability_quest_items|node|suitability_assessment|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Detaljer');
  t('Emission');
  t('Form items');
  t('Grundläggande');
  t('Kontroll');
  t('Proposal');
  t('Registreringsbevis');
  t('Undersökning gällande risker för medial badwill');

  return $field_groups;
}
