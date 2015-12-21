<?php
/**
 * @file
 * f_core.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function f_core_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'message_type-message_type-message_text'.
  $field_instances['message_type-message_type-message_text'] = array(
    'bundle' => 'message_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the text of all messages of this type.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'message_type',
    'field_name' => 'message_text',
    'label' => 'Message text',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'user-user-field_user_details'.
  $field_instances['user-user-field_user_details'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kontaktuppgifter för användning i mailutskick',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_details',
    'label' => 'Kontaktuppgifter',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'document_html' => 0,
          'ds_code' => 0,
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'document_html' => array(
              'weight' => 0,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Kontaktuppgifter');
  t('Kontaktuppgifter för användning i mailutskick');
  t('Message text');
  t('This is the text of all messages of this type.');

  return $field_instances;
}
