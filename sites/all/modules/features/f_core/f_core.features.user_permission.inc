<?php
/**
 * @file
 * f_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: 'access the permission overview page'.
  $permissions['access the permission overview page'] = array(
    'name' => 'access the permission overview page',
    'roles' => array(),
    'module' => 'config_perms',
  );

  // Exported permission: 'access the user overview page'.
  $permissions['access the user overview page'] = array(
    'name' => 'access the user overview page',
    'roles' => array(),
    'module' => 'config_perms',
  );

  // Exported permission: 'access user display settings'.
  $permissions['access user display settings'] = array(
    'name' => 'access user display settings',
    'roles' => array(),
    'module' => 'config_perms',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Granskare' => 'Granskare',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer custom permissions'.
  $permissions['administer custom permissions'] = array(
    'name' => 'administer custom permissions',
    'roles' => array(),
    'module' => 'config_perms',
  );

  // Exported permission: 'administer message types'.
  $permissions['administer message types'] = array(
    'name' => 'administer message types',
    'roles' => array(),
    'module' => 'message',
  );

  // Exported permission: 'administer own yubikeys'.
  $permissions['administer own yubikeys'] = array(
    'name' => 'administer own yubikeys',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'yubikey',
  );

  // Exported permission: 'administer user roles'.
  $permissions['administer user roles'] = array(
    'name' => 'administer user roles',
    'roles' => array(),
    'module' => 'config_perms',
  );

  // Exported permission: 'administer yubikeys'.
  $permissions['administer yubikeys'] = array(
    'name' => 'administer yubikeys',
    'roles' => array(),
    'module' => 'yubikey',
  );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(),
    'module' => 'message',
  );

  // Exported permission: 'display popup message'.
  $permissions['display popup message'] = array(
    'name' => 'display popup message',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'popup_message',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
    ),
    'module' => 'node',
  );

  return $permissions;
}
