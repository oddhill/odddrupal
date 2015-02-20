<?php
/**
 * @file
 * f_offer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_offer_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck administer offer offer entities'.
  $permissions['eck administer offer offer entities'] = array(
    'name' => 'eck administer offer offer entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'use editablefields'.
  $permissions['use editablefields'] = array(
    'name' => 'use editablefields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'editablefields',
  );

  return $permissions;
}
