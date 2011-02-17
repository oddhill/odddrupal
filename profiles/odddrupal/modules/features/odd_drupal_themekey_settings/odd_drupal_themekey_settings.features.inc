<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function odd_drupal_themekey_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_themekey_features_rule_chain_import().
 */
function odd_drupal_themekey_settings_themekey_features_rule_chain_import() {
$rules = array(
  '0' => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'node/%/translate',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"drupal:path = node/%/translate >>> ThemeKeyAdminTheme"',
    'childs' => array(),
  ),
  '1' => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'users/%',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"drupal:path = users/% >>> ThemeKeyAdminTheme"',
    'childs' => array(),
  ),
  '2' => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'user',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"drupal:path = user >>> ThemeKeyAdminTheme"',
    'childs' => array(),
  ),
  '3' => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'user/%/edit',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"drupal:path = user/%/edit >>> ThemeKeyAdminTheme"',
    'childs' => array(),
  ),
);

return $rules;
}
