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
  $strongarm->name = 'mail_logger_log_maximum_age';
  $strongarm->value = '0';
  $export['mail_logger_log_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_format';
  $strongarm->value = 'full_html';
  $export['mimemail_format'] = $strongarm;

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
    'yubikey_enabled' => 0,
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
    'yubikey_enabled' => 1,
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
    'yubikey_enabled' => 0,
  );
  $export['tadaa_staging_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'sedermera';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_authscheme';
  $strongarm->value = 'un_pwd_yk';
  $export['yubikey_authscheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_enabled';
  $strongarm->value = 0;
  $export['yubikey_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_mail_yubikey_lost_body';
  $strongarm->value = 'Hello !username,

Someone, (probably you) has reported loss of YubiKey associated with your account at !site.

To confirm the authenticity of the request and to prevent any possible misuse of the lost YubiKey by an unauthorized person at !site, please click on the link below or copy and paste it in your browser address bar:

!yubikey_lost_confirmation_url

This is a one-time link, so it can be used only once. It expires after one day and nothing will happen if it is not used.

Please note, once you confirm by clicking the above link, all the YubiKeys associated with your account will be temporarily blocked.';
  $export['yubikey_mail_yubikey_lost_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_mail_yubikey_lost_confirmed_body';
  $strongarm->value = 'Hello,

!username has reported and confirmed loss of YubiKey and hence, all the YubiKeys associated with user account !username have been blocked.';
  $export['yubikey_mail_yubikey_lost_confirmed_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_mail_yubikey_lost_confirmed_recipients';
  $strongarm->value = 'hans.nilsson@sedermera.se';
  $export['yubikey_mail_yubikey_lost_confirmed_recipients'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_mail_yubikey_lost_confirmed_subject';
  $strongarm->value = 'Confirmation of loss of YubiKey for !username at !site';
  $export['yubikey_mail_yubikey_lost_confirmed_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_mail_yubikey_lost_subject';
  $strongarm->value = 'Confirm loss of YubiKey for !username at !site';
  $export['yubikey_mail_yubikey_lost_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_optional';
  $strongarm->value = 1;
  $export['yubikey_optional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_optional_if_lost';
  $strongarm->value = 1;
  $export['yubikey_optional_if_lost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver';
  $strongarm->value = array(
    'urls' => array(
      'type' => 'online',
      1 => '',
      2 => '',
      3 => '',
      4 => '',
      5 => '',
    ),
    'api' => array(
      'key' => 'YDruIhKdv+MH5G+dwYFF2ZPxKDY=',
      'id' => '21344',
      'https' => 0,
      'timeout' => '10',
    ),
  );
  $export['yubikey_valserver'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_api_https';
  $strongarm->value = 0;
  $export['yubikey_valserver_api_https'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_api_id';
  $strongarm->value = '21344';
  $export['yubikey_valserver_api_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_api_key';
  $strongarm->value = 'YDruIhKdv+MH5G+dwYFF2ZPxKDY=';
  $export['yubikey_valserver_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_api_timeout';
  $strongarm->value = '10';
  $export['yubikey_valserver_api_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_urls';
  $strongarm->value = ',,';
  $export['yubikey_valserver_urls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_urls_1';
  $strongarm->value = '';
  $export['yubikey_valserver_urls_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_urls_2';
  $strongarm->value = '';
  $export['yubikey_valserver_urls_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_urls_3';
  $strongarm->value = '';
  $export['yubikey_valserver_urls_3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_urls_4';
  $strongarm->value = '';
  $export['yubikey_valserver_urls_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_urls_5';
  $strongarm->value = '';
  $export['yubikey_valserver_urls_5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_valserver_urls_type';
  $strongarm->value = 'online';
  $export['yubikey_valserver_urls_type'] = $strongarm;

  return $export;
}
