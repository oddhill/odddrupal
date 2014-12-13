<?php
/**
 * @file
 * f_verification.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function f_verification_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'verification-verification-field_verification_date'
  $field_instances['verification-verification-field_verification_date'] = array(
    'bundle' => 'verification',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'verification',
    'field_name' => 'field_verification_date',
    'label' => 'Godkänd till den',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+10',
      ),
      'type' => 'date_popup',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'verification-verification-field_verification_file'
  $field_instances['verification-verification-field_verification_file'] = array(
    'bundle' => 'verification',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'verification',
    'field_name' => 'field_verification_file',
    'label' => 'Fil',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'verifications',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Fil');
  t('Godkänd till den');

  return $field_instances;
}
