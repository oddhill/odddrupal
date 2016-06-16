<?php
/**
 * @file
 * f_investor.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function f_investor_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unikt investerar ID';
  $rule->name = 'unique_inv_id_company';
  $rule->field_name = 'field_shared_inv_id';
  $rule->col = 'value';
  $rule->entity_type = 'investor';
  $rule->bundle = 'company';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'global',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Investerar ID [value] används redan för [existing-entity-link].';
  $export['unique_inv_id_company'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unikt investerar ID';
  $rule->name = 'unique_inv_id_person';
  $rule->field_name = 'field_shared_inv_id';
  $rule->col = 'value';
  $rule->entity_type = 'investor';
  $rule->bundle = 'person';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'global',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Investerar ID [value] används redan för [existing-entity-link].';
  $export['unique_inv_id_person'] = $rule;

  return $export;
}
