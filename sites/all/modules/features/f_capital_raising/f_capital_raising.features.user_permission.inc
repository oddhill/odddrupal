<?php
/**
 * @file
 * f_capital_raising.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_capital_raising_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create capital_raising content'.
  $permissions['create capital_raising content'] = array(
    'name' => 'create capital_raising content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any capital_raising content'.
  $permissions['delete any capital_raising content'] = array(
    'name' => 'delete any capital_raising content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any capital_raising content'.
  $permissions['edit any capital_raising content'] = array(
    'name' => 'edit any capital_raising content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
