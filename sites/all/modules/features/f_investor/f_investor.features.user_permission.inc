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

  // Exported permission: 'eck add investor company entities'.
  $permissions['eck add investor company entities'] = array(
    'name' => 'eck add investor company entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add investor person entities'.
  $permissions['eck add investor person entities'] = array(
    'name' => 'eck add investor person entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
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

  // Exported permission: 'eck edit investor company entities'.
  $permissions['eck edit investor company entities'] = array(
    'name' => 'eck edit investor company entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit investor person entities'.
  $permissions['eck edit investor person entities'] = array(
    'name' => 'eck edit investor person entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view investor company entities'.
  $permissions['eck view investor company entities'] = array(
    'name' => 'eck view investor company entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view investor person entities'.
  $permissions['eck view investor person entities'] = array(
    'name' => 'eck view investor person entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
