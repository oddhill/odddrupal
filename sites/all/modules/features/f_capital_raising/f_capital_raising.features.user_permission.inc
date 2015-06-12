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
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any capital_raising content'.
  $permissions['delete any capital_raising content'] = array(
    'name' => 'delete any capital_raising content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any capital_raising content'.
  $permissions['edit any capital_raising content'] = array(
    'name' => 'edit any capital_raising content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own capital_raising content'.
  $permissions['edit own capital_raising content'] = array(
    'name' => 'edit own capital_raising content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view any capital_raising content'.
  $permissions['view any capital_raising content'] = array(
    'name' => 'view any capital_raising content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own capital_raising content'.
  $permissions['view own capital_raising content'] = array(
    'name' => 'view own capital_raising content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
