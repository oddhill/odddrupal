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

  // Exported permission: 'access users overview'.
  $permissions['access users overview'] = array(
    'name' => 'access users overview',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'administerusersbyrole',
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

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer yubikeys'.
  $permissions['administer yubikeys'] = array(
    'name' => 'administer yubikeys',
    'roles' => array(),
    'module' => 'yubikey',
  );

  // Exported permission: 'create ctrl content'.
  $permissions['create ctrl content'] = array(
    'name' => 'create ctrl content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ctrl_pen content'.
  $permissions['create ctrl_pen content'] = array(
    'name' => 'create ctrl_pen content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(),
    'module' => 'message',
  );

  // Exported permission: 'create transaction content'.
  $permissions['create transaction content'] = array(
    'name' => 'create transaction content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create transaction_agreement content'.
  $permissions['create transaction_agreement content'] = array(
    'name' => 'create transaction_agreement content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create transaction_ap content'.
  $permissions['create transaction_ap content'] = array(
    'name' => 'create transaction_ap content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create users'.
  $permissions['create users'] = array(
    'name' => 'create users',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'display popup message'.
  $permissions['display popup message'] = array(
    'name' => 'display popup message',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'popup_message',
  );

  // Exported permission: 'edit any ctrl content'.
  $permissions['edit any ctrl content'] = array(
    'name' => 'edit any ctrl content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ctrl_pen content'.
  $permissions['edit any ctrl_pen content'] = array(
    'name' => 'edit any ctrl_pen content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any transaction content'.
  $permissions['edit any transaction content'] = array(
    'name' => 'edit any transaction content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any transaction_agreement content'.
  $permissions['edit any transaction_agreement content'] = array(
    'name' => 'edit any transaction_agreement content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any transaction_ap content'.
  $permissions['edit any transaction_ap content'] = array(
    'name' => 'edit any transaction_ap content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ctrl content'.
  $permissions['edit own ctrl content'] = array(
    'name' => 'edit own ctrl content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ctrl_pen content'.
  $permissions['edit own ctrl_pen content'] = array(
    'name' => 'edit own ctrl_pen content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own transaction content'.
  $permissions['edit own transaction content'] = array(
    'name' => 'edit own transaction content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own transaction_agreement content'.
  $permissions['edit own transaction_agreement content'] = array(
    'name' => 'edit own transaction_agreement content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own transaction_ap content'.
  $permissions['edit own transaction_ap content'] = array(
    'name' => 'edit own transaction_ap content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit users with role 2'.
  $permissions['edit users with role 2'] = array(
    'name' => 'edit users with role 2',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 3'.
  $permissions['edit users with role 3'] = array(
    'name' => 'edit users with role 3',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 4'.
  $permissions['edit users with role 4'] = array(
    'name' => 'edit users with role 4',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 5'.
  $permissions['edit users with role 5'] = array(
    'name' => 'edit users with role 5',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 6'.
  $permissions['edit users with role 6'] = array(
    'name' => 'edit users with role 6',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 7'.
  $permissions['edit users with role 7'] = array(
    'name' => 'edit users with role 7',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 8'.
  $permissions['edit users with role 8'] = array(
    'name' => 'edit users with role 8',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'administerusersbyrole',
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

  // Exported permission: 'view any ctrl content'.
  $permissions['view any ctrl content'] = array(
    'name' => 'view any ctrl content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any ctrl_pen content'.
  $permissions['view any ctrl_pen content'] = array(
    'name' => 'view any ctrl_pen content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any transaction content'.
  $permissions['view any transaction content'] = array(
    'name' => 'view any transaction content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any transaction_agreement content'.
  $permissions['view any transaction_agreement content'] = array(
    'name' => 'view any transaction_agreement content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any transaction_ap content'.
  $permissions['view any transaction_ap content'] = array(
    'name' => 'view any transaction_ap content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any transaction_history content'.
  $permissions['view any transaction_history content'] = array(
    'name' => 'view any transaction_history content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any unpublished company content'.
  $permissions['view any unpublished company content'] = array(
    'name' => 'view any unpublished company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished ctrl content'.
  $permissions['view any unpublished ctrl content'] = array(
    'name' => 'view any unpublished ctrl content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished ctrl_pen content'.
  $permissions['view any unpublished ctrl_pen content'] = array(
    'name' => 'view any unpublished ctrl_pen content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished investor_company content'.
  $permissions['view any unpublished investor_company content'] = array(
    'name' => 'view any unpublished investor_company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished investor_private content'.
  $permissions['view any unpublished investor_private content'] = array(
    'name' => 'view any unpublished investor_private content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished transaction content'.
  $permissions['view any unpublished transaction content'] = array(
    'name' => 'view any unpublished transaction content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished transaction_agreement content'.
  $permissions['view any unpublished transaction_agreement content'] = array(
    'name' => 'view any unpublished transaction_agreement content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished transaction_ap content'.
  $permissions['view any unpublished transaction_ap content'] = array(
    'name' => 'view any unpublished transaction_ap content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished transaction_history content'.
  $permissions['view any unpublished transaction_history content'] = array(
    'name' => 'view any unpublished transaction_history content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view own ctrl content'.
  $permissions['view own ctrl content'] = array(
    'name' => 'view own ctrl content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own ctrl_pen content'.
  $permissions['view own ctrl_pen content'] = array(
    'name' => 'view own ctrl_pen content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own investor_company content'.
  $permissions['view own investor_company content'] = array(
    'name' => 'view own investor_company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own investor_private content'.
  $permissions['view own investor_private content'] = array(
    'name' => 'view own investor_private content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own transaction content'.
  $permissions['view own transaction content'] = array(
    'name' => 'view own transaction content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own transaction_agreement content'.
  $permissions['view own transaction_agreement content'] = array(
    'name' => 'view own transaction_agreement content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own transaction_ap content'.
  $permissions['view own transaction_ap content'] = array(
    'name' => 'view own transaction_ap content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own transaction_history content'.
  $permissions['view own transaction_history content'] = array(
    'name' => 'view own transaction_history content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  return $permissions;
}
