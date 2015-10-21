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
  $field_group->identifier = 'group_ctrl_comp|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kompletterande fråga till investerare (Vid transaktioner över 250 000 SEK)',
    'weight' => '8',
    'children' => array(
      0 => 'field_ctrl_app_comp',
      1 => 'field_ctrl_date_comp',
      2 => 'field_ctrl_files_comp',
      3 => 'field_ctrl_note_comp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kompletterande fråga till investerare (Vid transaktioner över 250 000 SEK)',
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
  $field_group->identifier = 'group_ctrl_comp|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kompletterande fråga till investerare (Vid transaktioner över 250 000 SEK)',
    'weight' => '9',
    'children' => array(
      0 => 'field_ctrl_app_comp',
      1 => 'field_ctrl_date_comp',
      2 => 'field_ctrl_files_comp',
      3 => 'field_ctrl_note_comp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kompletterande fråga till investerare (Vid transaktioner över 250 000 SEK)',
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
  $field_group->identifier = 'group_ctrl_credit|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_credit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kreditkontroll (Vid transaktioner över 250 000 SEK och giltig 1 år)',
    'weight' => '7',
    'children' => array(
      0 => 'field_ctrl_app_credit',
      1 => 'field_ctrl_date_credit',
      2 => 'field_ctrl_files_credit',
      3 => 'field_ctrl_note_credit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kreditkontroll (Vid transaktioner över 250 000 SEK och giltig 1 år)',
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
  $field_group->identifier = 'group_ctrl_credit|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_credit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kreditkontroll (Vid transaktioner över 250 000 SEK och giltig 1 år)',
    'weight' => '8',
    'children' => array(
      0 => 'field_ctrl_app_credit',
      1 => 'field_ctrl_date_credit',
      2 => 'field_ctrl_files_credit',
      3 => 'field_ctrl_note_credit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kreditkontroll (Vid transaktioner över 250 000 SEK och giltig 1 år)',
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
  $field_group->identifier = 'group_ctrl_eu|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_eu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'EU:s sanktionsförordningar (Kontrolleras vid varje transaktion)',
    'weight' => '6',
    'children' => array(
      0 => 'field_ctrl_app_eu',
      1 => 'field_ctrl_date_eu',
      2 => 'field_ctrl_files_eu',
      3 => 'field_ctrl_note_eu',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'EU:s sanktionsförordningar (Kontrolleras vid varje transaktion)',
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
  $field_group->identifier = 'group_ctrl_eu|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_eu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'EU:s sanktionsförordningar (Kontrolleras vid varje transaktion)',
    'weight' => '7',
    'children' => array(
      0 => 'field_ctrl_app_eu',
      1 => 'field_ctrl_date_eu',
      2 => 'field_ctrl_files_eu',
      3 => 'field_ctrl_note_eu',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'EU:s sanktionsförordningar (Kontrolleras vid varje transaktion)',
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
  $field_group->identifier = 'group_ctrl_ext|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_ext';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Externt register (för addressuppgifter) (Giltig 1 år)',
    'weight' => '5',
    'children' => array(
      0 => 'field_ctrl_app_ext',
      1 => 'field_ctrl_date_ext',
      2 => 'field_ctrl_files_ext',
      3 => 'field_ctrl_note_ext',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Externt register (för addressuppgifter) (Giltig 1 år)',
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
  $field_group->identifier = 'group_ctrl_id_real|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_id_real';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ID-kontroll, verklig huvudman (Giltig till och med utgånget ID)',
    'weight' => '5',
    'children' => array(
      0 => 'field_ctrl_app_id_real',
      1 => 'field_ctrl_date_id_real',
      2 => 'field_ctrl_files_id_real',
      3 => 'field_ctrl_note_id_real',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ID-kontroll, verklig huvudman (Giltig till och med utgånget ID)',
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
  $field_group->identifier = 'group_ctrl_id|node|kontrolluppgift_privat|full';
  $field_group->group_name = 'group_ctrl_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift_privat';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identitetskontroll (Giltig till och med utgånget ID)',
    'weight' => '4',
    'children' => array(
      0 => 'field_ctrl_app_id',
      1 => 'field_ctrl_date_id',
      2 => 'field_ctrl_files_id',
      3 => 'field_ctrl_note_id',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Identitetskontroll (Giltig till och med utgånget ID)',
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
  $field_group->identifier = 'group_ctrl_id|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identitetskontroll (Giltig till och med utgånget ID)',
    'weight' => '4',
    'children' => array(
      0 => 'field_ctrl_app_id',
      1 => 'field_ctrl_date_id',
      2 => 'field_ctrl_files_id',
      3 => 'field_ctrl_note_id',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Identitetskontroll (Giltig till och med utgånget ID)',
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
  $field_group->identifier = 'group_ctrl_reg|node|kontrolluppgift|full';
  $field_group->group_name = 'group_ctrl_reg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontrolluppgift';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registreringsbevis (Giltigt 1 år för befintlig kund, 3 mån för nya kunder)',
    'weight' => '6',
    'children' => array(
      0 => 'field_ctrl_app_reg',
      1 => 'field_ctrl_date_reg',
      2 => 'field_ctrl_files_reg',
      3 => 'field_ctrl_note_reg',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Registreringsbevis (Giltigt 1 år för befintlig kund, 3 mån för nya kunder)',
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
