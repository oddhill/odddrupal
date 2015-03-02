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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
