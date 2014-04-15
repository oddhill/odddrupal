<?php
/**
 * @file
 * Default rules used by the Odd Vault profile.
 */

/**
 * Implements hook_default_rules_configuration().
 */
function oddvault_default_rules_configuration() {
  // Redirect anonymous users to the login page.
  $rule = rules_reaction_rule();
  $rule->label = 'Redirect anonymous users to login page';
  $rule->event('init')
    ->condition('user_has_role', array(
      'account:select' => 'site:current-user',
      'roles' => array(1),
    ))
    ->condition('php_eval', array(
      'code' => "return arg(0) != 'user';",
    ))
    ->condition(rules_condition('php_eval', array(
      'code' => "return drupal_is_cli();",
    ))->negate())
    ->condition(rules_condition('rules_condition_site_variable_compare_variable', array(
      'variable_name' => 'maintenance_mode',
      'variable_value' => '1',
    ))->negate())
    ->action('php_eval', array(
      'code' => "drupal_goto('user', array('query' => drupal_get_destination()));",
    ));
  $configs['rules_redirect_anonymous_users_to_login_page'] = $rule;

  // Redirect to the front page when the user logs in using the form.
  $rule = rules_reaction_rule();
  $rule->label = 'Redirect to frontpage on login';
  $rule->event('user_login')
    ->condition('php_eval', array(
      'code' => 'return $_POST[\'form_id\'] == \'user_login\';',
    ))
    ->action('redirect', array(
      'url' => '<front>',
      'force' => FALSE,
    ));
  $configs['rules_redirect_to_frontpage_on_login'] = $rule;

  return $configs;
}
