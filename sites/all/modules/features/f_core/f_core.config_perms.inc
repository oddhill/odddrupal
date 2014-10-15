<?php
/**
 * @file
 * f_core.config_perms.inc
 */

/**
 * Implements hook_config_perms().
 */
function f_core_config_perms() {
  $export = array();

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'access_user_display_settings';
  $config_perms->status = TRUE;
  $config_perms->name = 'access user display settings';
  $config_perms->path = array(
    0 => 'user/*/display',
  );
  $export['access_user_display_settings'] = $config_perms;

  return $export;
}
