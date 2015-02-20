<?php
/**
 * @file
 * f_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-logo' => 'blockify-logo',
    'blockify-site-slogan' => 'blockify-site-slogan',
    'blockify-page-title' => 'blockify-page-title',
    'blockify-breadcrumb' => 'blockify-breadcrumb',
    'blockify-tabs' => 'blockify-tabs',
    'blockify-messages' => 'blockify-messages',
    'blockify-actions' => 'blockify-actions',
    'blockify-feed-icons' => 'blockify-feed-icons',
    'blockify-site-name' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'j F, Y - H:i';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/all/files/private';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_placeholder_exclude';
  $strongarm->value = '.table-filter .form-text';
  $export['form_placeholder_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_placeholder_include';
  $strongarm->value = '.form-text';
  $export['form_placeholder_include'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_placeholder_required_indicator';
  $strongarm->value = 'append';
  $export['form_placeholder_required_indicator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 0;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:field-user-name]';
  $export['realname_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_user_action_user';
  $strongarm->value = '3';
  $export['rh_user_action_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_user_redirect_response_user';
  $strongarm->value = '301';
  $export['rh_user_redirect_response_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_user_redirect_user';
  $strongarm->value = '[user:edit-url]';
  $export['rh_user_redirect_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'oversikt';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'info@sedermera.se';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Sedermera Intranät';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_development_modules';
  $strongarm->value = array(
    'context_ui' => 1,
    'field_ui' => 1,
    'help' => 1,
    'update' => 1,
    'devel' => 1,
    'devel_generate' => 1,
    'reroute_email' => 1,
    'search_krumo' => 1,
    'ds_ui' => 1,
    'field_validation_ui' => 1,
    'backup_migrate' => 0,
    'letmein' => 1,
    'speedy' => 0,
    'stage_file_proxy' => 1,
    'bad_judgement' => 1,
    'rules_admin' => 1,
    'googleanalytics' => 0,
    'themekey_ui' => 1,
    'views_ui' => 1,
  );
  $export['tadaa_development_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_development_variables';
  $strongarm->value = array(
    'block_cache' => 0,
    'cache' => 0,
    'cron_safe_threshold' => '0',
    'dblog_row_limit' => '100',
    'error_level' => '2',
    'preprocess_css' => 0,
    'preprocess_js' => 0,
    'reroute_email_enable' => 1,
    'reroute_email_enable_message' => 1,
  );
  $export['tadaa_development_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_environments';
  $strongarm->value = array(
    'development' => 'Development',
    'staging' => 'Staging',
    'production' => 'Production',
  );
  $export['tadaa_environments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_production_modules';
  $strongarm->value = array(
    'context_ui' => 0,
    'field_ui' => 0,
    'help' => 0,
    'update' => 0,
    'devel' => 0,
    'devel_generate' => 0,
    'reroute_email' => 0,
    'search_krumo' => 0,
    'ds_ui' => 0,
    'field_validation_ui' => 0,
    'backup_migrate' => 1,
    'letmein' => 0,
    'speedy' => 1,
    'stage_file_proxy' => 0,
    'bad_judgement' => 0,
    'rules_admin' => 0,
    'googleanalytics' => 1,
    'themekey_ui' => 0,
    'views_ui' => 0,
  );
  $export['tadaa_production_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_production_variables';
  $strongarm->value = array(
    'block_cache' => 1,
    'cache' => 1,
    'cron_safe_threshold' => '3600',
    'dblog_row_limit' => '10000',
    'error_level' => '0',
    'preprocess_css' => 1,
    'preprocess_js' => 1,
    'reroute_email_enable' => 0,
    'reroute_email_enable_message' => 0,
    'speedy_js_production' => 1,
  );
  $export['tadaa_production_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_staging_modules';
  $strongarm->value = array(
    'context_ui' => 1,
    'field_ui' => 1,
    'help' => 0,
    'update' => 0,
    'devel' => 0,
    'devel_generate' => 0,
    'reroute_email' => 1,
    'search_krumo' => 0,
    'ds_ui' => 1,
    'field_validation_ui' => 1,
    'backup_migrate' => 0,
    'letmein' => 1,
    'speedy' => 1,
    'stage_file_proxy' => 1,
    'bad_judgement' => 1,
    'rules_admin' => 1,
    'googleanalytics' => 0,
    'themekey_ui' => 1,
    'views_ui' => 1,
  );
  $export['tadaa_staging_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_staging_variables';
  $strongarm->value = array(
    'block_cache' => 1,
    'cache' => 1,
    'cron_safe_threshold' => '43200',
    'dblog_row_limit' => '100',
    'error_level' => '0',
    'preprocess_css' => 1,
    'preprocess_js' => 1,
    'reroute_email_enable' => 1,
    'reroute_email_enable_message' => 0,
    'speedy_js_production' => 1,
  );
  $export['tadaa_staging_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'sedermera';
  $export['theme_default'] = $strongarm;

  return $export;
}
