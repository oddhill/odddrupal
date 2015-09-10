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

  // Exported permission: 'add terms in industries'.
  $permissions['add terms in industries'] = array(
    'name' => 'add terms in industries',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in intressen'.
  $permissions['add terms in intressen'] = array(
    'name' => 'add terms in intressen',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer investors'.
  $permissions['administer investors'] = array(
    'name' => 'administer investors',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'sedermera_investor',
  );

  // Exported permission: 'delete terms in industries'.
  $permissions['delete terms in industries'] = array(
    'name' => 'delete terms in industries',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in intressen'.
  $permissions['delete terms in intressen'] = array(
    'name' => 'delete terms in intressen',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'eck add contact_person contact_person entities'.
  $permissions['eck add contact_person contact_person entities'] = array(
    'name' => 'eck add contact_person contact_person entities',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add investor company entities'.
  $permissions['eck add investor company entities'] = array(
    'name' => 'eck add investor company entities',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add investor person entities'.
  $permissions['eck add investor person entities'] = array(
    'name' => 'eck add investor person entities',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
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

  // Exported permission: 'eck edit contact_person contact_person entities'.
  $permissions['eck edit contact_person contact_person entities'] = array(
    'name' => 'eck edit contact_person contact_person entities',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit investor company entities'.
  $permissions['eck edit investor company entities'] = array(
    'name' => 'eck edit investor company entities',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit investor person entities'.
  $permissions['eck edit investor person entities'] = array(
    'name' => 'eck edit investor person entities',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view contact_person contact_person entities'.
  $permissions['eck view contact_person contact_person entities'] = array(
    'name' => 'eck view contact_person contact_person entities',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view investor company entities'.
  $permissions['eck view investor company entities'] = array(
    'name' => 'eck view investor company entities',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view investor person entities'.
  $permissions['eck view investor person entities'] = array(
    'name' => 'eck view investor person entities',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'edit terms in industries'.
  $permissions['edit terms in industries'] = array(
    'name' => 'edit terms in industries',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in intressen'.
  $permissions['edit terms in intressen'] = array(
    'name' => 'edit terms in intressen',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view investors'.
  $permissions['view investors'] = array(
    'name' => 'view investors',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'sedermera_investor',
  );

  return $permissions;
}
