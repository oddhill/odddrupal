<?php
/**
 * @file
 * f_investor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_investor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer investors'.
  $permissions['administer investors'] = array(
    'name' => 'administer investors',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'sedermera_investor',
  );

  // Exported permission: 'eck administer investor company entities'.
  $permissions['eck administer investor company entities'] = array(
    'name' => 'eck administer investor company entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer investor person entities'.
  $permissions['eck administer investor person entities'] = array(
    'name' => 'eck administer investor person entities',
    'roles' => array(),
    'module' => 'eck',
  );

  return $permissions;
}
