<?php
/**
 * @file
 * f_verification.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_verification_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create kontrolluppgift content'.
  $permissions['create kontrolluppgift content'] = array(
    'name' => 'create kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create kontrolluppgift_id content'.
  $permissions['create kontrolluppgift_id content'] = array(
    'name' => 'create kontrolluppgift_id content',
    'roles' => array(),
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

  // Exported permission: 'delete any kontrolluppgift content'.
  $permissions['delete any kontrolluppgift content'] = array(
    'name' => 'delete any kontrolluppgift content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any kontrolluppgift_id content'.
  $permissions['delete any kontrolluppgift_id content'] = array(
    'name' => 'delete any kontrolluppgift_id content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any kontrolluppgift_privat content'.
  $permissions['delete any kontrolluppgift_privat content'] = array(
    'name' => 'delete any kontrolluppgift_privat content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own kontrolluppgift content'.
  $permissions['delete own kontrolluppgift content'] = array(
    'name' => 'delete own kontrolluppgift content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own kontrolluppgift_id content'.
  $permissions['delete own kontrolluppgift_id content'] = array(
    'name' => 'delete own kontrolluppgift_id content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own kontrolluppgift_privat content'.
  $permissions['delete own kontrolluppgift_privat content'] = array(
    'name' => 'delete own kontrolluppgift_privat content',
    'roles' => array(),
    'module' => 'node',
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

  // Exported permission: 'edit any kontrolluppgift_id content'.
  $permissions['edit any kontrolluppgift_id content'] = array(
    'name' => 'edit any kontrolluppgift_id content',
    'roles' => array(),
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

  // Exported permission: 'edit own kontrolluppgift_id content'.
  $permissions['edit own kontrolluppgift_id content'] = array(
    'name' => 'edit own kontrolluppgift_id content',
    'roles' => array(),
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

  // Exported permission: 'view any unpublished kontrolluppgift_id content'.
  $permissions['view any unpublished kontrolluppgift_id content'] = array(
    'name' => 'view any unpublished kontrolluppgift_id content',
    'roles' => array(),
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

  // Exported permission: 'view own kontrolluppgift content'.
  $permissions['view own kontrolluppgift content'] = array(
    'name' => 'view own kontrolluppgift content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own kontrolluppgift_privat content'.
  $permissions['view own kontrolluppgift_privat content'] = array(
    'name' => 'view own kontrolluppgift_privat content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
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
