<?php
/**
 * @file
 * Custom installation profile for Odd Hill.
 */

define('ODDVAULT_VERSION', '7.x-1.4');

/**
 * Implements hook_boot().
 */
function oddvault_boot() {
  // Disable search engine robots for the entire site.
  drupal_add_http_header('X-Robots-Tag', 'noindex, nofollow');
}

/**
 * Implements hook_form_alter().
 */
function oddvault_form_alter(&$form, &$form_state, $form_id) {
  global $user;

  // Don't alter anything for user 1.
  if ($user->uid == 1) {
    return;
  }

  // Alterations for the user account form, both for registration and editing.
  if (in_array($form_id, array('user_register_form', 'user_profile_form'))) {
    // Hide some fields.
    $form['account']['name']['#access'] = FALSE;
    $form['account']['roles'][2]['#type'] = 'hidden';

    // Disable the password strength.
    drupal_add_js('Drupal.behaviors.password = function () {};', array('type' => 'inline', 'scope' => 'footer'));

    // Strip the form, if the user has used a one time login. This will force
    // user to set a new password.
    if (isset($_GET['pass-reset-token'])) {
      oddvault_alterations_strip_form($form, array('account', 'pass', 'actions', 'submit'));
      $form['account']['pass']['#required'] = TRUE;
    }
  }

  // Alterations for any node form.
  if (preg_match('/_node_form$/ui', $form_id)) {
    // Remove the comment settings.
    $form['comment_settings']['#access'] = FALSE;
  }
}

/**
 * Strip form elements.
 *
 * This function will take any form element, and set the access attribute to
 * false for the elements that we wish to hide.
 *
 * @param $elements
 *  The form elements that we should strip.
 *
 * @param $ignore
 *   An array of form element keys that we shouldn't strip.
 */
function oddvault_alterations_strip_form(&$elements, $ignore) {
  foreach (element_children($elements) as $key) {
    $ignore = array_merge($ignore, array('form_build_id', 'form_token', 'form_id'));
    if (!in_array($key, $ignore)) {
      $elements[$key]['#access'] = FALSE;
    }
    $children = element_children($elements[$key]);
    if (!empty($children)) {
      oddvault_alterations_strip_form($elements[$key], $ignore);
    }
  }
}

/**
 * Implements hook_init().
 */
function oddvault_init() {
  // Add an HTML head tag which indicates what version of Odd Vault that is
  // running. This number should be updated for every new release.
  $element = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'Odd Vault version',
      'content' => ODDVAULT_VERSION,
    ),
  );
  drupal_add_html_head($element, 'oddvault-version');
}
