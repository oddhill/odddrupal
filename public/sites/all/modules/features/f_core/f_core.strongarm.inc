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
  $strongarm->name = 'autologout_enforce_admin';
  $strongarm->value = 0;
  $export['autologout_enforce_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_inactivity_message';
  $strongarm->value = 'Du har blivit utloggad på grund av inaktivitet.';
  $export['autologout_inactivity_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_max_timeout';
  $strongarm->value = '172800';
  $export['autologout_max_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_message';
  $strongarm->value = '';
  $export['autologout_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_no_dialog';
  $strongarm->value = 1;
  $export['autologout_no_dialog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_padding';
  $strongarm->value = '10';
  $export['autologout_padding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_redirect_url';
  $strongarm->value = 'user/login';
  $export['autologout_redirect_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_2';
  $strongarm->value = 0;
  $export['autologout_role_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_2_timeout';
  $strongarm->value = '300';
  $export['autologout_role_2_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_3';
  $strongarm->value = 0;
  $export['autologout_role_3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_3_timeout';
  $strongarm->value = '300';
  $export['autologout_role_3_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_4';
  $strongarm->value = 0;
  $export['autologout_role_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_4_timeout';
  $strongarm->value = '300';
  $export['autologout_role_4_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_5';
  $strongarm->value = 0;
  $export['autologout_role_5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_5_timeout';
  $strongarm->value = '300';
  $export['autologout_role_5_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_6';
  $strongarm->value = 0;
  $export['autologout_role_6'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_6_timeout';
  $strongarm->value = '300';
  $export['autologout_role_6_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_7';
  $strongarm->value = 0;
  $export['autologout_role_7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_7_timeout';
  $strongarm->value = '300';
  $export['autologout_role_7_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_role_logout';
  $strongarm->value = 0;
  $export['autologout_role_logout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_timeout';
  $strongarm->value = '3600';
  $export['autologout_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_use_watchdog';
  $strongarm->value = 0;
  $export['autologout_use_watchdog'] = $strongarm;

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
  $strongarm->value = 'j M Y';
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
  $strongarm->value = '';
  $export['form_placeholder_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_placeholder_include';
  $strongarm->value = '.sedermera-theme .form-text';
  $export['form_placeholder_include'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_placeholder_required_indicator';
  $strongarm->value = 'text';
  $export['form_placeholder_required_indicator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_page_enable';
  $strongarm->value = 1;
  $export['front_page_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = 'default';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'google';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_activity_threshold';
  $strongarm->value = '5';
  $export['login_security_activity_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_disable_core_login_error';
  $strongarm->value = 0;
  $export['login_security_disable_core_login_error'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_host_hard_banned';
  $strongarm->value = 'IP-adressen @ip är blockerad på @site, och kommer inte att kunna komma åt något av dess innehåll från och med nu. Kontakta webbplatsens administratör.';
  $export['login_security_host_hard_banned'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_host_soft_banned';
  $strongarm->value = 'Denna dator är inte tillåten att logga in på @site. Kontakta webbplatsens administratör.';
  $export['login_security_host_soft_banned'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_host_wrong_count';
  $strongarm->value = '5';
  $export['login_security_host_wrong_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_host_wrong_count_hard';
  $strongarm->value = '10';
  $export['login_security_host_wrong_count_hard'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_last_access_timestamp';
  $strongarm->value = 0;
  $export['login_security_last_access_timestamp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_last_login_timestamp';
  $strongarm->value = 0;
  $export['login_security_last_login_timestamp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_login_activity_email_body';
  $strongarm->value = 'Den konfigurerade tröskeln @activity_threshold inloggningar har nåtts med totalt @tracking_current_count ogiltiga inloggningsförsök . Du bör granska din logginformation om inloggningsförsök på @site.';
  $export['login_security_login_activity_email_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_login_activity_email_subject';
  $strongarm->value = 'Säkerhetsinformation: Oväntad inloggningsaktivitet har upptäckts på @site.';
  $export['login_security_login_activity_email_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_login_activity_email_user';
  $strongarm->value = '';
  $export['login_security_login_activity_email_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_notice_attempts_available';
  $strongarm->value = 1;
  $export['login_security_notice_attempts_available'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_notice_attempts_message';
  $strongarm->value = 'Du har använt @user_current_count av @user_block_attempts inloggningsförsök . Efter alla @user_block_attempts har använts, kommer du inte att kunna logga in.';
  $export['login_security_notice_attempts_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_track_time';
  $strongarm->value = '2';
  $export['login_security_track_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_user_blocked';
  $strongarm->value = 'Användaren @username har blockerats på grund av för många misslyckade inloggningsförsök .';
  $export['login_security_user_blocked'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_user_blocked_email_body';
  $strongarm->value = 'Användaren @username (@edit_uri) har blockerats på @site på grund av mängden av misslyckade inloggningsförsök . Kontrollera loggarna för mer information.';
  $export['login_security_user_blocked_email_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_user_blocked_email_subject';
  $strongarm->value = 'Säkerhets åtgärd: Användaren @username har blockerats.';
  $export['login_security_user_blocked_email_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_user_blocked_email_user';
  $strongarm->value = '';
  $export['login_security_user_blocked_email_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_user_wrong_count';
  $strongarm->value = '5';
  $export['login_security_user_wrong_count'] = $strongarm;

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
  $strongarm->name = 'nodeaccess-grants';
  $strongarm->value = array(
    'view' => 1,
    'edit' => 1,
    'delete' => 1,
  );
  $export['nodeaccess-grants'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess-preserve';
  $strongarm->value = 1;
  $export['nodeaccess-preserve'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess-priority';
  $strongarm->value = 0;
  $export['nodeaccess-priority'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess-roles';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    7 => 0,
    6 => 0,
    3 => 1,
    5 => 1,
    4 => 1,
    8 => 1,
  );
  $export['nodeaccess-roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess-types';
  $strongarm->value = array(
    'offer' => 0,
    'transaction' => 0,
    'transaction_agreement' => 0,
    'transaction_ap' => 0,
    'company' => 0,
    'conflict' => 0,
    'credit_risk' => 0,
    'customer_approval' => 0,
    'customer_history' => 0,
    'final_approval' => 0,
    'money_launder' => 0,
    'proposal' => 0,
    'suitability_assessment' => 0,
    'document' => 0,
    'manual' => 0,
    'template' => 0,
    'investor_company' => 0,
    'investor_private' => 0,
    'person' => 0,
    'transaction_history' => 0,
    'ctrl' => 0,
    'ctrl_pen' => 0,
  );
  $export['nodeaccess-types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_authors';
  $strongarm->value = array(
    'offer' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'transaction' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'transaction_agreement' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'transaction_ap' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'company' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'conflict' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'credit_risk' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'customer_approval' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'customer_history' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'final_approval' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'money_launder' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'proposal' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'suitability_assessment' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'document' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'manual' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'template' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'investor_company' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'investor_private' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'person' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'transaction_history' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'ctrl' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'ctrl_pen' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_company';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 0,
    ),
    3 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    5 => array(
      'gid' => 8,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    6 => array(
      'gid' => 7,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    7 => array(
      'gid' => 6,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_document';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    3 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    5 => array(
      'gid' => 8,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 0,
    ),
    6 => array(
      'gid' => 7,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 0,
    ),
    7 => array(
      'gid' => 6,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 0;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_admin';
  $strongarm->value = 0;
  $export['password_policy_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_begin';
  $strongarm->value = '0';
  $export['password_policy_begin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_block';
  $strongarm->value = '1';
  $export['password_policy_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_force_change_extra_allowed_paths';
  $strongarm->value = 'system/ajax';
  $export['password_policy_force_change_extra_allowed_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_force_change_reset';
  $strongarm->value = 0;
  $export['password_policy_force_change_reset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_show_restrictions';
  $strongarm->value = 0;
  $export['password_policy_show_restrictions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_warning_body';
  $strongarm->value = '[user:name],

Ditt lösenord på [site:name] upphör att gälla på mindre än [password-policy:days-left] dag (ar).

Gå till [password-policy:password-edit-url] för att ändra ditt lösenord.';
  $export['password_policy_warning_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_warning_subject';
  $strongarm->value = 'Ditt lösenord upphör att gälla för [user:name] på [site:name]';
  $export['password_policy_warning_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_contact_person_pattern';
  $strongarm->value = 'investerare/kontaktperson/[contact_person:field_comp_cont_name]';
  $export['pathauto_contact_person_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_entity_available_entity_types';
  $strongarm->value = array(
    'file' => 0,
  );
  $export['pathauto_entity_available_entity_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_manual_pattern';
  $strongarm->value = 'manualer/lista/[node:title]';
  $export['pathauto_node_manual_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_transaction_history_pattern';
  $strongarm->value = '';
  $export['pathauto_node_transaction_history_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_document_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_document_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_industries_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_industries_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_intressen_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_intressen_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_manual_typ_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_manual_typ_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = '';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_xt_regex_pattern';
  $strongarm->value = '{(^node|^user|^taxonomy/term|^investor/.+)/([0-9]+)/(.+)}';
  $export['path_alias_xt_regex_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_xt_user_special';
  $strongarm->value = 1;
  $export['path_alias_xt_user_special'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popup_message_body';
  $strongarm->value = array(
    'value' => '<p>Informationen på Sedermera Fondkommissions server är konfidentiell. Jag är medveten om att varje medarbetare är personligt ansvarig för att informationen inte, utan begränsning i tiden, yppas eller på annat sätt sprids till utomstående.</p><p>Genom fortsatt användning av systemet bekräftar jag härmed att jag tagit del av, och förstått, ovanstående information.</p>',
    'format' => 'document_html',
  );
  $export['popup_message_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popup_message_check_cookie';
  $strongarm->value = '1';
  $export['popup_message_check_cookie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popup_message_delay';
  $strongarm->value = '0';
  $export['popup_message_delay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popup_message_enable';
  $strongarm->value = '1';
  $export['popup_message_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popup_message_height';
  $strongarm->value = '300';
  $export['popup_message_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popup_message_style';
  $strongarm->value = 'sites/all/modules/contrib/popup_message/styles/black/popup.css';
  $export['popup_message_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popup_message_title';
  $strongarm->value = 'Sedermera intranät';
  $export['popup_message_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popup_message_visibility';
  $strongarm->value = '0';
  $export['popup_message_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popup_message_visibility_pages';
  $strongarm->value = 'admin
admin/*';
  $export['popup_message_visibility_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popup_message_width';
  $strongarm->value = '600';
  $export['popup_message_width'] = $strongarm;

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
  $strongarm->name = 'session_limit_behaviour';
  $strongarm->value = '1';
  $export['session_limit_behaviour'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'session_limit_logged_out_message';
  $strongarm->value = 'You have been automatically logged out. Someone else has logged in with your username and password and the maximum number of @number simultaneous sessions was exceeded. This may indicate that your account has been compromised or that account sharing is not allowed on this site. Please contact the site administrator if you suspect your account has been compromised.';
  $export['session_limit_logged_out_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'session_limit_logged_out_message_severity';
  $strongarm->value = 'error';
  $export['session_limit_logged_out_message_severity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'session_limit_masquerade_ignore';
  $strongarm->value = 0;
  $export['session_limit_masquerade_ignore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'session_limit_max';
  $strongarm->value = '1';
  $export['session_limit_max'] = $strongarm;

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
  $strongarm->value = 'Sedermera Fondkommission';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stage_file_proxy_hotlink';
  $strongarm->value = 0;
  $export['stage_file_proxy_hotlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stage_file_proxy_origin';
  $strongarm->value = 'http://176.58.107.201';
  $export['stage_file_proxy_origin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stage_file_proxy_origin_dir';
  $strongarm->value = 'sites/all/files';
  $export['stage_file_proxy_origin_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stage_file_proxy_sslversion';
  $strongarm->value = '3';
  $export['stage_file_proxy_sslversion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stage_file_proxy_use_imagecache_root';
  $strongarm->value = 1;
  $export['stage_file_proxy_use_imagecache_root'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'syslog_format';
  $strongarm->value = '!message | Type: !type | URL: !request_uri | Referer: !referer | User: !uid | IP: !ip';
  $export['syslog_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_development_modules';
  $strongarm->value = array(
    'context_list' => 1,
    'context_list_active' => 1,
    'context_ui' => 1,
    'dblog' => 1,
    'field_ui' => 1,
    'help' => 1,
    'syslog' => 0,
    'update' => 1,
    'devel' => 1,
    'devel_debug_log' => 1,
    'devel_form_debug' => 1,
    'devel_generate' => 1,
    'reroute_email' => 1,
    'search_krumo' => 1,
    'xhprof' => 1,
    'ds_ui' => 1,
    'field_validation_ui' => 1,
    'masquerade_views' => 1,
    'autologout' => 0,
    'backup_migrate' => 0,
    'letmein' => 1,
    'login_security' => 0,
    'masquerade' => 1,
    'security_review' => 0,
    'speedy' => 0,
    'stage_file_proxy' => 1,
    'bad_judgement' => 1,
    'rules_admin' => 1,
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
    'pre_production' => 'Pre-production',
  );
  $export['tadaa_environments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_pre_production_modules';
  $strongarm->value = array(
    'context_list' => 0,
    'context_list_active' => 0,
    'context_ui' => 0,
    'dblog' => 1,
    'field_ui' => 0,
    'help' => 0,
    'syslog' => 0,
    'update' => 0,
    'devel' => 0,
    'devel_debug_log' => 0,
    'devel_form_debug' => 0,
    'devel_generate' => 0,
    'reroute_email' => 1,
    'search_krumo' => 0,
    'xhprof' => 0,
    'ds_ui' => 0,
    'field_validation_ui' => 0,
    'masquerade_views' => 1,
    'autologout' => 1,
    'backup_migrate' => 0,
    'letmein' => 0,
    'login_security' => 1,
    'masquerade' => 1,
    'security_review' => 1,
    'speedy' => 1,
    'stage_file_proxy' => 0,
    'bad_judgement' => 0,
    'rules_admin' => 0,
    'themekey_ui' => 0,
    'views_ui' => 0,
  );
  $export['tadaa_pre_production_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_pre_production_variables';
  $strongarm->value = array(
    'block_cache' => 1,
    'cache' => 1,
    'cron_safe_threshold' => '3600',
    'dblog_row_limit' => '10000',
    'error_level' => '0',
    'preprocess_css' => 1,
    'preprocess_js' => 1,
    'reroute_email_enable' => 1,
    'reroute_email_enable_message' => 0,
    'speedy_js_production' => 1,
    'yubikey_enabled' => 1,
  );
  $export['tadaa_pre_production_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_production_modules';
  $strongarm->value = array(
    'context_list' => 0,
    'context_list_active' => 0,
    'context_ui' => 0,
    'dblog' => 0,
    'field_ui' => 0,
    'help' => 0,
    'syslog' => 1,
    'update' => 0,
    'devel' => 0,
    'devel_debug_log' => 0,
    'devel_form_debug' => 0,
    'devel_generate' => 0,
    'reroute_email' => 0,
    'search_krumo' => 0,
    'xhprof' => 0,
    'ds_ui' => 0,
    'field_validation_ui' => 0,
    'masquerade_views' => 0,
    'autologout' => 1,
    'backup_migrate' => 1,
    'letmein' => 0,
    'login_security' => 1,
    'masquerade' => 0,
    'security_review' => 1,
    'speedy' => 1,
    'stage_file_proxy' => 0,
    'bad_judgement' => 0,
    'rules_admin' => 0,
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
    'context_list' => 0,
    'context_list_active' => 0,
    'context_ui' => 1,
    'dblog' => 1,
    'field_ui' => 1,
    'help' => 0,
    'syslog' => 0,
    'update' => 0,
    'devel' => 0,
    'devel_debug_log' => 0,
    'devel_form_debug' => 0,
    'devel_generate' => 0,
    'reroute_email' => 1,
    'search_krumo' => 0,
    'xhprof' => 0,
    'ds_ui' => 1,
    'field_validation_ui' => 1,
    'masquerade_views' => 1,
    'autologout' => 1,
    'backup_migrate' => 0,
    'letmein' => 1,
    'login_security' => 0,
    'masquerade' => 1,
    'security_review' => 1,
    'speedy' => 1,
    'stage_file_proxy' => 1,
    'bad_judgement' => 1,
    'rules_admin' => 1,
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
  $strongarm->value = 0;
  $export['yubikey_optional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yubikey_optional_if_lost';
  $strongarm->value = 0;
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
