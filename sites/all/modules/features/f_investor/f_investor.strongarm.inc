<?php
/**
 * @file
 * f_investor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_investor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_investor_company';
  $strongarm->value = '1';
  $export['auto_entitylabel_investor_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_investor_person';
  $strongarm->value = '1';
  $export['auto_entitylabel_investor_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_investor_company';
  $strongarm->value = '[investor:field-invest-comp-name]';
  $export['auto_entitylabel_pattern_investor_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_investor_person';
  $strongarm->value = '[investor:field-invest-pers-first-name] [investor:field-invest-pers-last-name]';
  $export['auto_entitylabel_pattern_investor_person'] = $strongarm;

  return $export;
}
