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

  // Exported permission: 'create offer content'.
  $permissions['create offer content'] = array(
    'name' => 'create offer content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any offer content'.
  $permissions['edit any offer content'] = array(
    'name' => 'edit any offer content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own offer content'.
  $permissions['edit own offer content'] = array(
    'name' => 'edit own offer content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any offer content'.
  $permissions['view any offer content'] = array(
    'name' => 'view any offer content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any unpublished offer content'.
  $permissions['view any unpublished offer content'] = array(
    'name' => 'view any unpublished offer content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view own offer content'.
  $permissions['view own offer content'] = array(
    'name' => 'view own offer content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
