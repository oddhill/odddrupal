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
  themekey_rule_del(1);

  // Remove permissions from the anonymous role.
  user_role_revoke_permissions(1, array(
    'access content',
  ));
}

/**
 * Create our default fields.
 */
function oddvault_fields() {
  // Add a Name field to the user entity.
  $fields = array(
    'field_user_name' => array(
      'field' => array(
        'field_name' => 'field_user_name',
        'type' => 'text',
        'translatable' => FALSE,
      ),
      'instance' => array(
        'field_name' => 'field_user_name',
        'entity_type' => 'user',
        'bundle' => 'user',
        'label' => 'Name',
        'widget' => array(
          'type' => 'text_textfield',
          'weight' => -100,
        ),
        'settings' => array(
          'text_processing' => FALSE,
          'user_register_form' => TRUE,
        ),
        'required' => TRUE,
      ),
    ),
  );
  foreach ($fields as $field) {
    field_create_field($field['field']);
    field_create_instance($field['instance']);
  }
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
  variable_set('realname_pattern', '[user:field-user-name]');
  variable_set('logintoboggan_login_with_email', '0');
}
