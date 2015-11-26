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
  $strongarm->value = 'append';
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
    9 => 0,
    10 => 0,
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
    'capital_raising' => 0,
    'offer' => 0,
    'transaction' => 0,
    'transaktion_ap' => 0,
    'company' => 0,
    'document' => 0,
    'manual' => 0,
    'person' => 0,
    'transaction_history' => 0,
    'ctrl' => 0,
    'investor_company' => 0,
    'investor_private' => 0,
  );
  $export['nodeaccess-types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_authors';
  $strongarm->value = array(
    'transaction' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'transaktion_ap' => array(
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    'company' => array(
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
    'offer' => array(
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
      'gid' => 9,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    6 => array(
      'gid' => 8,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    7 => array(
      'gid' => 10,
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
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    3 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    5 => array(
      'gid' => 9,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    6 => array(
      'gid' => 8,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    7 => array(
      'gid' => 10,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
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
  $strongarm->name = 'tadaa_development_modules';
  $strongarm->value = array(
    'context_ui' => 1,
    'dblog' => 1,
    'field_ui' => 1,
    'help' => 1,
    'update' => 1,
    'devel' => 1,
    'devel_debug_log' => 1,
    'devel_generate' => 1,
    'reroute_email' => 1,
    'search_krumo' => 1,
    'ds_ui' => 1,
    'field_validation_ui' => 1,
    'autologout' => 0,
    'backup_migrate' => 0,
    'letmein' => 1,
    'logentries' => 0,
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
  );
  $export['tadaa_environments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_production_modules';
  $strongarm->value = array(
    'context_ui' => 0,
    'dblog' => 0,
    'field_ui' => 0,
    'help' => 0,
    'update' => 0,
    'devel' => 0,
    'devel_debug_log' => 0,
    'devel_generate' => 0,
    'reroute_email' => 0,
    'search_krumo' => 0,
    'ds_ui' => 0,
    'field_validation_ui' => 0,
    'autologout' => 1,
    'backup_migrate' => 1,
    'letmein' => 0,
    'logentries' => 1,
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
    'autologout_timeout' => '300',
  );
  $export['tadaa_production_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_staging_modules';
  $strongarm->value = array(
    'context_ui' => 1,
    'dblog' => 1,
    'field_ui' => 1,
    'help' => 0,
    'update' => 0,
    'devel' => 0,
    'devel_debug_log' => 0,
    'devel_generate' => 0,
    'reroute_email' => 1,
    'search_krumo' => 0,
    'ds_ui' => 1,
    'field_validation_ui' => 1,
    'autologout' => 1,
    'backup_migrate' => 0,
    'letmein' => 1,
    'logentries' => 0,
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
    'autologout_timeout' => '300',
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
