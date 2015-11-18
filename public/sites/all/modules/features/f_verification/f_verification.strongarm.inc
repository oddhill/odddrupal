<?php
/**
 * @file
 * f_verification.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_verification_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_ctrl';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_ctrl';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_ctrl';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ctrl';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'control' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'PDF' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'mail' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'verification_status' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ctrl';
  $strongarm->value = '0';
  $export['language_content_type_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ctrl';
  $strongarm->value = array();
  $export['menu_options_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ctrl';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ctrl';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ctrl';
  $strongarm->value = '0';
  $export['node_preview_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ctrl';
  $strongarm->value = 0;
  $export['node_submitted_ctrl'] = $strongarm;

  return $export;
}
