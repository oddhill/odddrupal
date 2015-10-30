<?php
/**
 * @file
 * Helper and utility functions that are used during the installation process of
 * Odd Vault.
 */

/**
 * Resets various things that has been set by Odd Drupal.
 */
function oddvault_odddrupal_reset() {
  // Delete ThemeKey rules.
  module_load_include('inc', 'themekey', 'themekey_build');
  themekey_rule_del(2);
  themekey_rule_del(1);

  // Remove permissions from the anonymous role.
  user_role_revoke_permissions(1, array(
    'access content',
  ));
}

/**
 * Set up the default roles and permissions.
 *
 * This will add our administrator role, and set the default permissions.
 */
function oddvault_roles_users() {
  // Delete the default custom permissions.
  db_delete('config_perms')->execute();

  // Create our custom permissions.
  $perms = array(
    'access the user overview page' => array('admin/people'),
    'access the permission overview page' => array('admin/people/permissions'),
    'administer user roles' => array('admin/people/permissions/roles', 'admin/people/permissions/roles/edit/*', 'admin/people/permissions/roles/delete/*'),
  );
  foreach ($perms as $name => $paths) {
    db_insert('config_perms')
      ->fields(array(
        'machine_name' => strtolower(preg_replace('/[^a-zA-Z0-9_]+/', '_', $name)),
        'status' => 1,
        'name' => $name,
        'path' => serialize($paths),
      ))
      ->execute();
  }
  config_perms_cache_rebuild();

  // Create the administrator role.
  $administrator_role = new StdClass;
  $administrator_role->name = 'administrator';
  user_role_save($administrator_role);

  // Permissions for the administrator role.
  user_role_change_permissions($administrator_role->rid, array(
    'administer permissions' => TRUE,
    'administer users' => TRUE,
  ));
}

/**
 * Set various variables.
 */
function oddvault_set_variables() {
  variable_set('user_cancel_method', 'user_cancel_reassign');
  variable_set('logintoboggan_login_with_email', '0');
  variable_set('user_mail_register_admin_created_body', '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name-raw]
password: Your password

--  [site:name] team');
  variable_set('user_mail_register_no_approval_required_body', '[user:name],

Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name-raw]
password: Your password

--  [site:name] team');
  variable_set('user_mail_status_activated_body', '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name-raw]
password: Your password

--  [site:name] team');
  variable_set('r4032login_default_redirect_code', '302');
  variable_set('r4032login_display_denied_message', 0);
  variable_set('r4032login_match_noredirect_pages', '');
  variable_set('r4032login_redirect_authenticated_users_to', '');
  variable_set('r4032login_user_login_path', 'user');
}
