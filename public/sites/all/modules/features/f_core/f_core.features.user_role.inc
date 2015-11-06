<?php
/**
 * @file
 * f_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function f_core_user_default_roles() {
  $roles = array();

  // Exported role: Administratör.
  $roles['Administratör'] = array(
    'name' => 'Administratör',
    'weight' => 2,
  );

  // Exported role: Användare.
  $roles['Användare'] = array(
    'name' => 'Användare',
    'weight' => 7,
  );

  // Exported role: Granskare.
  $roles['Granskare'] = array(
    'name' => 'Granskare',
    'weight' => 4,
  );

  // Exported role: Redaktör.
  $roles['Redaktör'] = array(
    'name' => 'Redaktör',
    'weight' => 3,
  );

  return $roles;
}
