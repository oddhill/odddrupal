<?php
/**
 * @file
 * f_activities.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function f_activities_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_msg_offer_created_offer'
  $field_bases['field_msg_offer_created_offer'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msg_offer_created_offer',
    'foreign keys' => array(
      'eck_offer' => array(
        'columns' => array(
          'target_id' => 'id',
        ),
        'table' => 'eck_offer',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'offer' => 'offer',
        ),
      ),
      'target_type' => 'offer',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
