<?php
/**
 * @file
 *  Rules support for Masquerade.
 */


/**
 * Implements hook_rules_condition_info().
 *
 * @see hook_rules_condition_info()
 */
function masquerade_rules_rules_condition_info() {
  $conditions = array();

  $conditions['masquerade_rules_is_masquerading'] = array(
    'group' => t('Masquerade'),
    'label' => t('Specific user is masquerading'),
    'parameter' => array(
      'user' => array(
        'label' => t('User'),
        'type' => 'user',
      ),
    ),
  );
  $conditions['masquerade_rules_is_being_masqueraded'] = array(
    'group' => t('Masquerade'),
    'label' => t('Specific user is being masqueraded'),
    'parameter' => array(
      'user' => array(
        'label' => t('Account'),
        'type' => 'user',
      ),
    ),
  );
  $conditions['masquerade_rules_is_current_user_masquerading'] = array(
    'group' => t('Masquerade'),
    'label' => t('Logged user is masquerading'),
  );

  return $conditions;
}

/**
 * Checks if the user supplied is masquerading as someone else.
 * @param stdClass $account
 *  A fully-loaded Drupal user object.
 * @returns
 *  TRUE if:
 *  - The current account is the same as the account being checked,
 *    AND the current account has the $_SESSION['masquerading']
 *    key set.
 *  - OR The account passed to us can be located in the {masquerade}
 *    database table as a source user.
 *  FALSE otherwise.
 * @retval bool
 */
function masquerade_rules_is_masquerading($account) {
  global $user;

  // Anonymous users wont have a UID, but we store them as 0.
  $uid = isset($account->uid) ? $account->uid : 0;

  // Check if the account provided is the current user.
  if ($user->uid == $uid) {
    return (isset($_SESSION['masquerading']) && is_numeric($_SESSION['masquerading']));
  }

  // You can override this database query with:
  // hook_query_masquerade_rules_is_masquerading_alter().
  // @see hook_query_TAG_alter()
  $query = db_select('masquerade', 'm')
    ->addTag('masquerade_rules_is_masquerading')
    ->fields('m', array('uid_as'))
    ->condition('uid_from', $uid, '=')
    ->range(0,1)
    ->execute();
  $result = $query->fetchCol();
  return !empty($result);
}

function masquerade_rules_is_current_user_masquerading() {
  return (isset($_SESSION['masquerading']) && is_numeric($_SESSION['masquerading']));
}

/**
 * Checks if the user supplied is being masqueraded by another user.
 * @param stdClass $account
 *  A fully-loaded Drupal user object.
 * @returns
 *  TRUE if this account is located in the {masquerade} table.
 *  FALSE otherwise.
 * @retval bool
 */
function masquerade_rules_is_being_masqueraded($account) {
  // Anonymous users wont have a UID, but we store them as 0.
  $uid = isset($account->uid) ? $account->uid : 0;

  // You can override this database query with:
  // hook_query_masquerade_rules_is_masquerading_alter().
  // @see hook_query_TAG_alter()
  $query = db_select('masquerade', 'm')
    ->addTag('masquerade_rules_is_being_masqueraded')
    ->fields('m', array('uid_from'))
    ->condition('uid_as', $uid, '=')
    ->range(0,1)
    ->execute();
  $result = $query->fetchCol();
  return !empty($result);
}
