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

  // Exported permission: 'create erbjudande content'.
  $permissions['create erbjudande content'] = array(
    'name' => 'create erbjudande content',
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

  // Exported permission: 'edit any erbjudande content'.
  $permissions['edit any erbjudande content'] = array(
    'name' => 'edit any erbjudande content',
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

  // Exported permission: 'edit own erbjudande content'.
  $permissions['edit own erbjudande content'] = array(
    'name' => 'edit own erbjudande content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
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

  // Exported permission: 'view any unpublished erbjudande content'.
  $permissions['view any unpublished erbjudande content'] = array(
    'name' => 'view any unpublished erbjudande content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
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
