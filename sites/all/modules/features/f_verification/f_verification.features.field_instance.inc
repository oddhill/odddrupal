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

  // Exported field_instance: 'verification-verification-field_verification_approved'
  $field_instances['verification-verification-field_verification_approved'] = array(
    'bundle' => 'verification',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'verification',
    'field_name' => 'field_verification_approved',
    'label' => 'Godkänd till den',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'verification-verification-field_verification_date'
  $field_instances['verification-verification-field_verification_date'] = array(
    'bundle' => 'verification',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'verification',
    'field_name' => 'field_verification_date',
    'label' => 'Välj datum',
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
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '-0:+10',
      ),
      'type' => 'date_popup',
      'weight' => 3,
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
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
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
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Fil');
  t('Godkänd till den');
  t('Välj datum');

  return $field_instances;
}
