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
  $msnf->identifier = 'step_offer_1|node|offer';
  $msnf->step_name = 'step_offer_1';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'offer';
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
  $export['step_offer_1|node|offer'] = $msnf;

  $msnf = new stdClass();
  $msnf->disabled = FALSE; /* Edit this to true to make a default msnf disabled initially */
  $msnf->api_version = 1;
  $msnf->identifier = 'step_offer_2|node|offer';
  $msnf->step_name = 'step_offer_2';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'offer';
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
  $export['step_offer_2|node|offer'] = $msnf;

  $msnf = new stdClass();
  $msnf->disabled = FALSE; /* Edit this to true to make a default msnf disabled initially */
  $msnf->api_version = 1;
  $msnf->identifier = 'step_offer_3|node|offer';
  $msnf->step_name = 'step_offer_3';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'offer';
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
  $export['step_offer_3|node|offer'] = $msnf;

  $msnf = new stdClass();
  $msnf->disabled = FALSE; /* Edit this to true to make a default msnf disabled initially */
  $msnf->api_version = 1;
  $msnf->identifier = 'step_offer_4|node|offer';
  $msnf->step_name = 'step_offer_4';
  $msnf->entity_type = 'node';
  $msnf->bundle = 'offer';
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
  $export['step_offer_4|node|offer'] = $msnf;

  return $export;
}
