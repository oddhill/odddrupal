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

  // Exported permission: 'create kontrolluppgift content'.
  $permissions['create kontrolluppgift content'] = array(
    'name' => 'create kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create kontrolluppgift_privat content'.
  $permissions['create kontrolluppgift_privat content'] = array(
    'name' => 'create kontrolluppgift_privat content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create transaction_history content'.
  $permissions['create transaction_history content'] = array(
    'name' => 'create transaction_history content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
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

  // Exported permission: 'eck add investor lead entities'.
  $permissions['eck add investor lead entities'] = array(
    'name' => 'eck add investor lead entities',
    'roles' => array(
      'Administratör' => 'Administratör',
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

  // Exported permission: 'eck edit investor lead entities'.
  $permissions['eck edit investor lead entities'] = array(
    'name' => 'eck edit investor lead entities',
    'roles' => array(
      'Administratör' => 'Administratör',
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

  // Exported permission: 'eck view investor lead entities'.
  $permissions['eck view investor lead entities'] = array(
    'name' => 'eck view investor lead entities',
    'roles' => array(
      'Administratör' => 'Administratör',
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

  // Exported permission: 'edit any kontrolluppgift content'.
  $permissions['edit any kontrolluppgift content'] = array(
    'name' => 'edit any kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any kontrolluppgift_privat content'.
  $permissions['edit any kontrolluppgift_privat content'] = array(
    'name' => 'edit any kontrolluppgift_privat content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own kontrolluppgift content'.
  $permissions['edit own kontrolluppgift content'] = array(
    'name' => 'edit own kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own kontrolluppgift_privat content'.
  $permissions['edit own kontrolluppgift_privat content'] = array(
    'name' => 'edit own kontrolluppgift_privat content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
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

  // Exported permission: 'publish revisions of any kontrolluppgift content'.
  $permissions['publish revisions of any kontrolluppgift content'] = array(
    'name' => 'publish revisions of any kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'publish revisions of any kontrolluppgift_privat content'.
  $permissions['publish revisions of any kontrolluppgift_privat content'] = array(
    'name' => 'publish revisions of any kontrolluppgift_privat content',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'publish revisions of own kontrolluppgift content'.
  $permissions['publish revisions of own kontrolluppgift content'] = array(
    'name' => 'publish revisions of own kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'publish revisions of own kontrolluppgift_privat content'.
  $permissions['publish revisions of own kontrolluppgift_privat content'] = array(
    'name' => 'publish revisions of own kontrolluppgift_privat content',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view any kontrolluppgift content'.
  $permissions['view any kontrolluppgift content'] = array(
    'name' => 'view any kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any kontrolluppgift_privat content'.
  $permissions['view any kontrolluppgift_privat content'] = array(
    'name' => 'view any kontrolluppgift_privat content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any unpublished kontrolluppgift content'.
  $permissions['view any unpublished kontrolluppgift content'] = array(
    'name' => 'view any unpublished kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished kontrolluppgift_privat content'.
  $permissions['view any unpublished kontrolluppgift_privat content'] = array(
    'name' => 'view any unpublished kontrolluppgift_privat content',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'view_unpublished',
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

  // Exported permission: 'view own kontrolluppgift content'.
  $permissions['view own kontrolluppgift content'] = array(
    'name' => 'view own kontrolluppgift content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own kontrolluppgift_privat content'.
  $permissions['view own kontrolluppgift_privat content'] = array(
    'name' => 'view own kontrolluppgift_privat content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view revisions of any kontrolluppgift content'.
  $permissions['view revisions of any kontrolluppgift content'] = array(
    'name' => 'view revisions of any kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions of any kontrolluppgift_privat content'.
  $permissions['view revisions of any kontrolluppgift_privat content'] = array(
    'name' => 'view revisions of any kontrolluppgift_privat content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions of own kontrolluppgift content'.
  $permissions['view revisions of own kontrolluppgift content'] = array(
    'name' => 'view revisions of own kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions of own kontrolluppgift_privat content'.
  $permissions['view revisions of own kontrolluppgift_privat content'] = array(
    'name' => 'view revisions of own kontrolluppgift_privat content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'revisioning',
  );

  return $permissions;
}
