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

  // Exported role: Dokument moderator.
  $roles['Dokument moderator'] = array(
    'name' => 'Dokument moderator',
    'weight' => 6,
  );

  // Exported role: Dokument skapare.
  $roles['Dokument skapare'] = array(
    'name' => 'Dokument skapare',
    'weight' => 5,
  );

  return $roles;
}
