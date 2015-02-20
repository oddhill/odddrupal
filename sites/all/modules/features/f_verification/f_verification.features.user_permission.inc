<?php
/**
 * @file
 * f_verification.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_verification_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add verification verification entities'.
  $permissions['eck add verification verification entities'] = array(
    'name' => 'eck add verification verification entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit verification verification entities'.
  $permissions['eck edit verification verification entities'] = array(
    'name' => 'eck edit verification verification entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
