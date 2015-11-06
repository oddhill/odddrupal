<?php
/**
 * @file
 * f_capital_raising.msnf.inc
 */

/**
 * Implements hook_msnf_step_info().
 */
function f_capital_raising_msnf_step_info() {
  $export = array();

  $msnf = new stdClass();
  $msnf->disabled = FALSE; /* Edit this to true to make a default msnf disabled initially */
  $msnf->api_version = 1;
  $msnf->identifier = 'step_cap_rais_1|node|capital_raising';
  $msnf->step_name = 'step_cap_rais_1';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'capital_raising';
  $msnf->data = array(
    'label' => '1',
    'weight' => '0',
    'children' => array(
      0 => 'group_cap_rais_1',
      1 => 'group_cap_rais_2',
    ),
    'format_type' => 'default',
    'format_settings' => array(
      'label' => '1',
      'instance_settings' => array(
        'skip_non_required' => 0,
        'hide_if_empty' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'buttons' => array(
          'previous' => 'Tillbaka',
          'next' => 'Nästa steg',
          'skip' => '',
        ),
      ),
    ),
  );
  $export['step_cap_rais_1|node|capital_raising'] = $msnf;

  $msnf = new stdClass();
  $msnf->disabled = FALSE; /* Edit this to true to make a default msnf disabled initially */
  $msnf->api_version = 1;
  $msnf->identifier = 'step_cap_rais_2|node|capital_raising';
  $msnf->step_name = 'step_cap_rais_2';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'capital_raising';
  $msnf->data = array(
    'label' => '2',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'default',
    'format_settings' => array(
      'label' => '2',
      'instance_settings' => array(
        'skip_non_required' => 0,
        'hide_if_empty' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'buttons' => array(
          'previous' => 'Tillbaka',
          'next' => 'Nästa steg',
          'skip' => '',
        ),
      ),
    ),
  );
  $export['step_cap_rais_2|node|capital_raising'] = $msnf;

  $msnf = new stdClass();
  $msnf->disabled = FALSE; /* Edit this to true to make a default msnf disabled initially */
  $msnf->api_version = 1;
  $msnf->identifier = 'step_cap_rais_3|node|capital_raising';
  $msnf->step_name = 'step_cap_rais_3';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'capital_raising';
  $msnf->data = array(
    'label' => '3',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'default',
    'format_settings' => array(
      'label' => '3',
      'instance_settings' => array(
        'skip_non_required' => 0,
        'hide_if_empty' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'buttons' => array(
          'previous' => 'Tillbaka',
          'next' => 'Nästa steg',
          'skip' => '',
        ),
      ),
    ),
  );
  $export['step_cap_rais_3|node|capital_raising'] = $msnf;

  $msnf = new stdClass();
  $msnf->disabled = FALSE; /* Edit this to true to make a default msnf disabled initially */
  $msnf->api_version = 1;
  $msnf->identifier = 'step_offer_1|node|erbjudande';
  $msnf->step_name = 'step_offer_1';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'erbjudande';
  $msnf->data = array(
    'label' => '1. Allmän information',
    'weight' => '0',
    'children' => array(
      0 => 'group_sidebar',
      1 => 'group_body',
    ),
    'format_type' => 'default',
    'format_settings' => array(
      'label' => '1. Allmän information',
      'instance_settings' => array(
        'skip_non_required' => 0,
        'hide_if_empty' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'buttons' => array(
          'previous' => 'Tillbaka',
          'next' => 'Nästa steg',
          'skip' => '',
        ),
      ),
    ),
  );
  $export['step_offer_1|node|erbjudande'] = $msnf;

  $msnf = new stdClass();
  $msnf->disabled = FALSE; /* Edit this to true to make a default msnf disabled initially */
  $msnf->api_version = 1;
  $msnf->identifier = 'step_offer_2|node|erbjudande';
  $msnf->step_name = 'step_offer_2';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'erbjudande';
  $msnf->data = array(
    'label' => '2. Information om investering',
    'weight' => '1',
    'children' => array(
      0 => 'group_types',
    ),
    'format_type' => 'default',
    'format_settings' => array(
      'label' => '2. Information om investering',
      'instance_settings' => array(
        'skip_non_required' => 0,
        'hide_if_empty' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'buttons' => array(
          'previous' => 'Tillbaka',
          'next' => 'Nästa steg',
          'skip' => '',
        ),
      ),
    ),
  );
  $export['step_offer_2|node|erbjudande'] = $msnf;

  $msnf = new stdClass();
  $msnf->disabled = FALSE; /* Edit this to true to make a default msnf disabled initially */
  $msnf->api_version = 1;
  $msnf->identifier = 'step_offer_3|node|erbjudande';
  $msnf->step_name = 'step_offer_3';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'erbjudande';
  $msnf->data = array(
    'label' => '3',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'default',
    'format_settings' => array(
      'label' => '3',
      'instance_settings' => array(
        'skip_non_required' => 0,
        'hide_if_empty' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'buttons' => array(
          'previous' => 'Tillbaka',
          'next' => 'Nästa steg',
          'skip' => '',
        ),
      ),
    ),
  );
  $export['step_offer_3|node|erbjudande'] = $msnf;

  $msnf = new stdClass();
  $msnf->disabled = FALSE; /* Edit this to true to make a default msnf disabled initially */
  $msnf->api_version = 1;
  $msnf->identifier = 'step_offer_4|node|erbjudande';
  $msnf->step_name = 'step_offer_4';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'erbjudande';
  $msnf->data = array(
    'label' => '4',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'default',
    'format_settings' => array(
      'label' => '4',
      'instance_settings' => array(
        'skip_non_required' => 0,
        'hide_if_empty' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'buttons' => array(
          'previous' => 'Tillbaka',
          'next' => 'Nästa steg',
          'skip' => '',
        ),
      ),
    ),
  );
  $export['step_offer_4|node|erbjudande'] = $msnf;

  return $export;
}
