<?php
/**
 * @file
 * f_offer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_offer_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add offer offer entities'.
  $permissions['eck add offer offer entities'] = array(
    'name' => 'eck add offer offer entities',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer offer offer entities'.
  $permissions['eck administer offer offer entities'] = array(
    'name' => 'eck administer offer offer entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit offer offer entities'.
  $permissions['eck edit offer offer entities'] = array(
    'name' => 'eck edit offer offer entities',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'mass mailing with views_send'.
  $permissions['mass mailing with views_send'] = array(
    'name' => 'mass mailing with views_send',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'views_send',
  );

  // Exported permission: 'use editablefields'.
  $permissions['use editablefields'] = array(
    'name' => 'use editablefields',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'editablefields',
  );

  return $permissions;
}
