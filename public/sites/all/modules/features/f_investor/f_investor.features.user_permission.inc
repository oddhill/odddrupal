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

  // Exported permission: 'create investor_company content'.
  $permissions['create investor_company content'] = array(
    'name' => 'create investor_company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create investor_private content'.
  $permissions['create investor_private content'] = array(
    'name' => 'create investor_private content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
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

  // Exported permission: 'edit any investor_company content'.
  $permissions['edit any investor_company content'] = array(
    'name' => 'edit any investor_company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any investor_private content'.
  $permissions['edit any investor_private content'] = array(
    'name' => 'edit any investor_private content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own investor_company content'.
  $permissions['edit own investor_company content'] = array(
    'name' => 'edit own investor_company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own investor_private content'.
  $permissions['edit own investor_private content'] = array(
    'name' => 'edit own investor_private content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
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

  // Exported permission: 'view any investor_company content'.
  $permissions['view any investor_company content'] = array(
    'name' => 'view any investor_company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any investor_private content'.
  $permissions['view any investor_private content'] = array(
    'name' => 'view any investor_private content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any person content'.
  $permissions['view any person content'] = array(
    'name' => 'view any person content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any unpublished person content'.
  $permissions['view any unpublished person content'] = array(
    'name' => 'view any unpublished person content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
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

  // Exported permission: 'view own person content'.
  $permissions['view own person content'] = array(
    'name' => 'view own person content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
