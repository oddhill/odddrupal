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
  $field_group->identifier = 'group_control_state|node|kontrolluppgift|form';
  $field_group->group_name = 'group_control_state';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '44',
    'children' => array(),
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
  $export['group_control_state|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_comp|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper_person';
  $field_group->data = array(
    'label' => 'Kompletterande fråga till investerare (Vid transaktioner över 250 000 SEK)',
    'weight' => '10',
    'children' => array(
      0 => 'field_ctrl_files_comp',
      1 => 'field_ctrl_note_comp',
      2 => 'group_ctrl_state_comp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kompletterande fråga till investerare (Vid transaktioner över 250 000 SEK)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_comp|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_comp|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kompletterande fråga till investerare',
    'weight' => '8',
    'children' => array(
      0 => 'field_ctrl_app_comp',
      1 => 'field_ctrl_date_comp',
      2 => 'field_ctrl_files_comp',
      3 => 'field_ctrl_note_comp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kompletterande fråga till investerare',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_comp|node|kontrolluppgift_privat|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_comp|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper';
  $field_group->data = array(
    'label' => 'Kompletterande fråga till investerare (Vid transaktioner över 250 000 SEK)',
    'weight' => '11',
    'children' => array(
      0 => 'field_ctrl_files_comp',
      1 => 'field_ctrl_note_comp',
      2 => 'group_ctrl_state_comp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kompletterande fråga till investerare (Vid transaktioner över 250 000 SEK)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_comp|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_comp|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kompletterande fråga till investerare',
    'weight' => '9',
    'children' => array(
      0 => 'field_ctrl_app_comp',
      1 => 'field_ctrl_date_comp',
      2 => 'field_ctrl_files_comp',
      3 => 'field_ctrl_note_comp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kompletterande fråga till investerare',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_comp|node|kontrolluppgift|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_credit|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_credit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper_person';
  $field_group->data = array(
    'label' => 'Kreditkontroll (Vid transaktioner över 250 000 SEK och giltig 1 år)',
    'weight' => '9',
    'children' => array(
      0 => 'field_ctrl_files_credit',
      1 => 'field_ctrl_note_credit',
      2 => 'group_ctrl_state_credit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kreditkontroll (Vid transaktioner över 250 000 SEK och giltig 1 år)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_credit|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_credit|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_credit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kreditkontroll',
    'weight' => '7',
    'children' => array(
      0 => 'field_ctrl_app_credit',
      1 => 'field_ctrl_date_credit',
      2 => 'field_ctrl_files_credit',
      3 => 'field_ctrl_note_credit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kreditkontroll',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_credit|node|kontrolluppgift_privat|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_credit|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_credit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper';
  $field_group->data = array(
    'label' => 'Kreditkontroll (Vid transaktioner över 250 000 SEK och giltig 1 år)',
    'weight' => '10',
    'children' => array(
      0 => 'field_ctrl_files_credit',
      1 => 'field_ctrl_note_credit',
      2 => 'group_ctrl_state_credit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kreditkontroll (Vid transaktioner över 250 000 SEK och giltig 1 år)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_credit|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_credit|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_credit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kreditkontroll',
    'weight' => '8',
    'children' => array(
      0 => 'field_ctrl_app_credit',
      1 => 'field_ctrl_date_credit',
      2 => 'field_ctrl_files_credit',
      3 => 'field_ctrl_note_credit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kreditkontroll',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_credit|node|kontrolluppgift|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_eu|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_eu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper_person';
  $field_group->data = array(
    'label' => 'EU:s sanktionsförordningar (Kontrolleras vid varje transaktion)',
    'weight' => '8',
    'children' => array(
      0 => 'field_ctrl_files_eu',
      1 => 'field_ctrl_note_eu',
      2 => 'group_ctrl_state_eu',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'EU:s sanktionsförordningar (Kontrolleras vid varje transaktion)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_eu|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_eu|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_eu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'EU:s sanktionsförordningar',
    'weight' => '6',
    'children' => array(
      0 => 'field_ctrl_app_eu',
      1 => 'field_ctrl_date_eu',
      2 => 'field_ctrl_files_eu',
      3 => 'field_ctrl_note_eu',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'EU:s sanktionsförordningar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_eu|node|kontrolluppgift_privat|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_eu|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_eu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper';
  $field_group->data = array(
    'label' => 'EU:s sanktionsförordningar (Kontrolleras vid varje transaktion)',
    'weight' => '9',
    'children' => array(
      0 => 'field_ctrl_files_eu',
      1 => 'field_ctrl_note_eu',
      2 => 'group_ctrl_state_eu',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'EU:s sanktionsförordningar (Kontrolleras vid varje transaktion)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_eu|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_eu|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_eu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'EU:s sanktionsförordningar',
    'weight' => '7',
    'children' => array(
      0 => 'field_ctrl_app_eu',
      1 => 'field_ctrl_date_eu',
      2 => 'field_ctrl_files_eu',
      3 => 'field_ctrl_note_eu',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'EU:s sanktionsförordningar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_eu|node|kontrolluppgift|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_ext|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_ext';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper_person';
  $field_group->data = array(
    'label' => 'Externt register (för addressuppgifter) (Giltig 1 år)',
    'weight' => '7',
    'children' => array(
      0 => 'field_ctrl_files_ext',
      1 => 'field_ctrl_note_ext',
      2 => 'group_ctrl_state_ext',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Externt register (för addressuppgifter) (Giltig 1 år)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_ext|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_ext|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_ext';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Externt register (för addressuppgifter)',
    'weight' => '5',
    'children' => array(
      0 => 'field_ctrl_app_ext',
      1 => 'field_ctrl_date_ext',
      2 => 'field_ctrl_files_ext',
      3 => 'field_ctrl_note_ext',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Externt register (för addressuppgifter)',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_ext|node|kontrolluppgift_privat|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_fields_wrapper_person|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_fields_wrapper_person';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'group_ctrl_comp',
      1 => 'group_ctrl_credit',
      2 => 'group_ctrl_eu',
      3 => 'group_ctrl_ext',
      4 => 'group_ctrl_id',
      5 => 'group_ctrl_oth',
      6 => 'group_ctrl_ptv',
      7 => 'group_ctrl_upp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Fields wrapper',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'control_list',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_fields_wrapper_person|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_fields_wrapper|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_fields_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'group_ctrl_comp',
      1 => 'group_ctrl_credit',
      2 => 'group_ctrl_eu',
      3 => 'group_ctrl_id_real',
      4 => 'group_ctrl_id',
      5 => 'group_ctrl_oth',
      6 => 'group_ctrl_ptv',
      7 => 'group_ctrl_reg',
      8 => 'group_ctrl_upp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Fields wrapper',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'control_list',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_fields_wrapper|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_id_real|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_id_real';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper';
  $field_group->data = array(
    'label' => 'ID-kontroll, verklig huvudman (Giltig till och med utgånget ID)',
    'weight' => '7',
    'children' => array(
      0 => 'field_ctrl_files_id_real',
      1 => 'field_ctrl_note_id_real',
      2 => 'group_ctrl_state_id_real',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ID-kontroll, verklig huvudman (Giltig till och med utgånget ID)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_id_real|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_id_real|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_id_real';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ID-kontroll, verklig huvudman',
    'weight' => '5',
    'children' => array(
      0 => 'field_ctrl_app_id_real',
      1 => 'field_ctrl_date_id_real',
      2 => 'field_ctrl_files_id_real',
      3 => 'field_ctrl_note_id_real',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ID-kontroll, verklig huvudman',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_id_real|node|kontrolluppgift|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_id|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper_person';
  $field_group->data = array(
    'label' => 'Identitetskontroll (Giltig till och med utgånget ID)',
    'weight' => '6',
    'children' => array(
      0 => 'field_ctrl_files_id',
      1 => 'field_ctrl_note_id',
      2 => 'group_ctrl_state_id',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Identitetskontroll (Giltig till och med utgånget ID)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_id|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_id|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identitetskontroll',
    'weight' => '4',
    'children' => array(
      0 => 'field_ctrl_app_id',
      1 => 'field_ctrl_date_id',
      2 => 'field_ctrl_files_id',
      3 => 'field_ctrl_note_id',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Identitetskontroll',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_id|node|kontrolluppgift_privat|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_id|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper';
  $field_group->data = array(
    'label' => 'Identitetskontroll (Giltig till och med utgånget ID)',
    'weight' => '6',
    'children' => array(
      0 => 'field_ctrl_files_id',
      1 => 'field_ctrl_note_id',
      2 => 'group_ctrl_state_id',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Identitetskontroll (Giltig till och med utgånget ID)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_id|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_id|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identitetskontroll',
    'weight' => '4',
    'children' => array(
      0 => 'field_ctrl_app_id',
      1 => 'field_ctrl_date_id',
      2 => 'field_ctrl_files_id',
      3 => 'field_ctrl_note_id',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Identitetskontroll',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_id|node|kontrolluppgift|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_oth|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_oth';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper_person';
  $field_group->data = array(
    'label' => 'Övriga dokument/tillägg',
    'weight' => '12',
    'children' => array(
      0 => 'field_ctrl_files_oth',
      1 => 'field_ctrl_note_oth',
      2 => 'group_ctrl_state_oth',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Övriga dokument/tillägg',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_oth|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_oth|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_oth';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Övriga dokument/tillägg',
    'weight' => '9',
    'children' => array(
      0 => 'field_ctrl_app_oth',
      1 => 'field_ctrl_date_oth',
      2 => 'field_ctrl_files_oth',
      3 => 'field_ctrl_note_oth',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Övriga dokument/tillägg',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_oth|node|kontrolluppgift_privat|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_oth|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_oth';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper';
  $field_group->data = array(
    'label' => 'Övriga dokument/tillägg',
    'weight' => '13',
    'children' => array(
      0 => 'field_ctrl_files_oth',
      1 => 'field_ctrl_note_oth',
      2 => 'group_ctrl_state_oth',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Övriga dokument/tillägg',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_oth|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_oth|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_oth';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Övriga dokument/tillägg',
    'weight' => '10',
    'children' => array(
      0 => 'field_ctrl_app_oth',
      1 => 'field_ctrl_date_oth',
      2 => 'field_ctrl_files_oth',
      3 => 'field_ctrl_note_oth',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Övriga dokument/tillägg',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_oth|node|kontrolluppgift|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_ptv|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_ptv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper_person';
  $field_group->data = array(
    'label' => 'PTV-blankett',
    'weight' => '6',
    'children' => array(
      0 => 'field_ctrl_files_ptv',
      1 => 'field_ctrl_note_ptv',
      2 => 'group_ctrl_state_ptv',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PTV-blankett',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_ptv|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_ptv|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_ptv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PTV-blankett',
    'weight' => '3',
    'children' => array(
      0 => 'field_ctrl_app_ptv',
      1 => 'field_ctrl_date_ptv',
      2 => 'field_ctrl_files_ptv',
      3 => 'field_ctrl_note_ptv',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PTV-blankett',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_ptv|node|kontrolluppgift_privat|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_ptv|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_ptv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper';
  $field_group->data = array(
    'label' => 'PTV-blankett',
    'weight' => '6',
    'children' => array(
      0 => 'field_ctrl_files_ptv',
      1 => 'field_ctrl_note_ptv',
      2 => 'group_ctrl_state_ptv',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PTV-blankett',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_ptv|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_ptv|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_ptv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PTV-blankett',
    'weight' => '3',
    'children' => array(
      0 => 'field_ctrl_app_ptv',
      1 => 'field_ctrl_date_ptv',
      2 => 'field_ctrl_files_ptv',
      3 => 'field_ctrl_note_ptv',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PTV-blankett',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_ptv|node|kontrolluppgift|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_reg|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_reg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper';
  $field_group->data = array(
    'label' => 'Registreringsbevis (Giltigt 1 år för befintlig kund, 3 mån för nya kunder)',
    'weight' => '8',
    'children' => array(
      0 => 'field_ctrl_files_reg',
      1 => 'field_ctrl_note_reg',
      2 => 'group_ctrl_state_reg',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Registreringsbevis (Giltigt 1 år för befintlig kund, 3 mån för nya kunder)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_reg|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_reg|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_reg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registeringsbevis',
    'weight' => '6',
    'children' => array(
      0 => 'field_ctrl_app_reg',
      1 => 'field_ctrl_date_reg',
      2 => 'field_ctrl_files_reg',
      3 => 'field_ctrl_note_reg',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Registeringsbevis',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_reg|node|kontrolluppgift|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_comp|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_state_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_comp';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '13',
    'children' => array(
      0 => 'field_ctrl_app_comp',
      1 => 'field_ctrl_date_comp',
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
  $export['group_ctrl_state_comp|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_comp|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_state_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_comp';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '18',
    'children' => array(
      0 => 'field_ctrl_app_comp',
      1 => 'field_ctrl_date_comp',
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
  $export['group_ctrl_state_comp|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_credit|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_state_credit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_credit';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '12',
    'children' => array(
      0 => 'field_ctrl_app_credit',
      1 => 'field_ctrl_date_credit',
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
  $export['group_ctrl_state_credit|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_credit|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_state_credit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_credit';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '19',
    'children' => array(
      0 => 'field_ctrl_app_credit',
      1 => 'field_ctrl_date_credit',
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
  $export['group_ctrl_state_credit|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_eu|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_state_eu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_eu';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '11',
    'children' => array(
      0 => 'field_ctrl_app_eu',
      1 => 'field_ctrl_date_eu',
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
  $export['group_ctrl_state_eu|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_eu|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_state_eu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_eu';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '20',
    'children' => array(
      0 => 'field_ctrl_app_eu',
      1 => 'field_ctrl_date_eu',
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
  $export['group_ctrl_state_eu|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_ext|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_state_ext';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_ext';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '10',
    'children' => array(
      0 => 'field_ctrl_app_ext',
      1 => 'field_ctrl_date_ext',
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
  $export['group_ctrl_state_ext|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_id_real|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_state_id_real';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_id_real';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '22',
    'children' => array(
      0 => 'field_ctrl_app_id_real',
      1 => 'field_ctrl_date_id_real',
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
  $export['group_ctrl_state_id_real|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_id|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_state_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_id';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '9',
    'children' => array(
      0 => 'field_ctrl_app_id',
      1 => 'field_ctrl_date_id',
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
  $export['group_ctrl_state_id|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_id|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_state_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_id';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '23',
    'children' => array(
      0 => 'field_ctrl_app_id',
      1 => 'field_ctrl_date_id',
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
  $export['group_ctrl_state_id|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_oth|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_state_oth';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_oth';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '14',
    'children' => array(
      0 => 'field_ctrl_app_oth',
      1 => 'field_ctrl_date_oth',
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
  $export['group_ctrl_state_oth|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_oth|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_state_oth';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_oth';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '17',
    'children' => array(
      0 => 'field_ctrl_app_oth',
      1 => 'field_ctrl_date_oth',
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
  $export['group_ctrl_state_oth|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_ptv|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_state_ptv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_ptv';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '8',
    'children' => array(
      0 => 'field_ctrl_app_ptv',
      1 => 'field_ctrl_date_ptv',
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
  $export['group_ctrl_state_ptv|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_ptv|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_state_ptv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_ptv';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '50',
    'children' => array(
      0 => 'field_ctrl_app_ptv',
      1 => 'field_ctrl_date_ptv',
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
  $export['group_ctrl_state_ptv|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_reg|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_state_reg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_reg';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '21',
    'children' => array(
      0 => 'field_ctrl_app_reg',
      1 => 'field_ctrl_date_reg',
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
  $export['group_ctrl_state_reg|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_upp|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_state_upp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_upp';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '7',
    'children' => array(
      0 => 'field_ctrl_app_upp',
      1 => 'field_ctrl_date_upp',
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
  $export['group_ctrl_state_upp|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_state_upp|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_state_upp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_upp';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '46',
    'children' => array(
      0 => 'field_ctrl_app_upp',
      1 => 'field_ctrl_date_upp',
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
  $export['group_ctrl_state_upp|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_upp|node|kontrolluppgift_privat|form';
  $field_group->group_name = 'group_ctrl_upp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper_person';
  $field_group->data = array(
    'label' => 'Uppdragsavtal',
    'weight' => '5',
    'children' => array(
      0 => 'field_ctrl_files_upp',
      1 => 'field_ctrl_note_upp',
      2 => 'group_ctrl_state_upp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Uppdragsavtal',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_upp|node|kontrolluppgift_privat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_upp|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_upp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Uppdragsavtal',
    'weight' => '2',
    'children' => array(
      0 => 'field_ctrl_app_upp',
      1 => 'field_ctrl_date_upp',
      2 => 'field_ctrl_files_upp',
      3 => 'field_ctrl_note_upp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Uppdragsavtal',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_upp|node|kontrolluppgift_privat|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_upp|node|kontrolluppgift|form';
  $field_group->group_name = 'group_ctrl_upp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ctrl_fields_wrapper';
  $field_group->data = array(
    'label' => 'Uppdragsavtal',
    'weight' => '5',
    'children' => array(
      0 => 'field_ctrl_files_upp',
      1 => 'field_ctrl_note_upp',
      2 => 'group_ctrl_state_upp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Uppdragsavtal',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_upp|node|kontrolluppgift|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctrl_upp|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_upp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Uppdragsavtal',
    'weight' => '2',
    'children' => array(
      0 => 'field_ctrl_app_upp',
      1 => 'field_ctrl_date_upp',
      2 => 'field_ctrl_files_upp',
      3 => 'field_ctrl_note_upp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Uppdragsavtal',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'approved-control',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ctrl_upp|node|kontrolluppgift|full'] = $field_group;

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

  return $export;
}
