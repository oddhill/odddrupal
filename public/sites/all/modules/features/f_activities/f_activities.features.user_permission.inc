<?php
/**
 * @file
 * f_activities.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_activities_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag unread'.
  $permissions['flag unread'] = array(
    'name' => 'flag unread',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag unread'.
  $permissions['unflag unread'] = array(
    'name' => 'unflag unread',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
