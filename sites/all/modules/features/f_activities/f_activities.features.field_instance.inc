<?php
/**
 * @file
 * f_activities.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function f_activities_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'message-offer_created-field_msg_offer_created_offer'
  $field_instances['message-offer_created-field_msg_offer_created_offer'] = array(
    'bundle' => 'offer_created',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_msg_offer_created_offer',
    'label' => 'Erbjudande',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Erbjudande');

  return $field_instances;
}
