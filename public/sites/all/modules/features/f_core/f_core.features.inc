<?php
/**
 * @file
 * f_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "config_perms" && $api == "config_perms") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "front_page" && $api == "default_front_page_presets") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_password_policy_features_default_policies().
 */
function f_core_password_policy_features_default_policies() {
  return array(
    'Password_complexity' => array(
      'name' => 'Password_complexity',
      'description' => 'The password complexity policy',
      'enabled' => 1,
      'policy' => 'a:6:{s:15:"character_types";s:1:"3";s:5:"digit";s:1:"2";s:7:"history";s:1:"3";s:6:"length";s:2:"10";s:9:"lowercase";s:1:"2";s:9:"uppercase";s:1:"2";}',
      'created' => 1464960443,
      'expiration' => 365,
      'warning' => '3,10,30',
      'weight' => 0,
      'constraints' => FALSE,
      'roles' => array(
        0 => 'authenticated user',
        1 => 'Administratör',
        2 => 'Granskare',
        3 => 'Redaktör',
        4 => 'Användare',
        5 => 'Dokumentmoderator',
        6 => 'Dokumentskapare',
      ),
    ),
  );
}

/**
 * Implements hook_themekey_features_rule_chain().
 */
function f_core_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'user/%/yubikey',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'f_core',
    ),
    'string' => '"drupal:path = user/%/yubikey >>> ThemeKeyAdminTheme"',
    'childs' => array(),
  ),
);

return $rules;
}
