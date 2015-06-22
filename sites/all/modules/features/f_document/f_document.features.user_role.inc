<?php
/**
 * @file
 * f_document.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function f_document_user_default_roles() {
  $roles = array();

  // Exported role: Dokumentmoderator.
  $roles['Dokumentmoderator'] = array(
    'name' => 'Dokumentmoderator',
    'weight' => 6,
  );

  // Exported role: Dokumentskapare.
  $roles['Dokumentskapare'] = array(
    'name' => 'Dokumentskapare',
    'weight' => 5,
  );

  return $roles;
}
