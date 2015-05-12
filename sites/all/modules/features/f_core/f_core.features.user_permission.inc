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

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer own yubikeys'.
  $permissions['administer own yubikeys'] = array(
    'name' => 'administer own yubikeys',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'yubikey',
  );

  // Exported permission: 'administer yubikeys'.
  $permissions['administer yubikeys'] = array(
    'name' => 'administer yubikeys',
    'roles' => array(),
    'module' => 'yubikey',
  );

  // Exported permission: 'generate pdf using mpdf'.
  $permissions['generate pdf using mpdf'] = array(
    'name' => 'generate pdf using mpdf',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'pdf_using_mpdf',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
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

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
