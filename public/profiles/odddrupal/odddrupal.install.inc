<?php
/**
 * @file
 * Helper and utility functions that are used during the installation process of
 * Odd Drupal.
 */

/**
 * Configures text formats and Wysiwyg settings.
 *
 * This will configure Filtered HTML, Full HTML and the Wysiwyg settings. It
 * will also set CKEditor as the default editor for Filtered HTML.
 */
function odddrupal_text_formats() {
  // Filtered HTML.
  $filtered_html_format = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'weight' => 0,
    'filters' => array(
      // URL filter.
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
      ),
      // HTML filter.
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <h2> <h3> <h4> <br> <p>',
        ),
      ),
      // Spamspan filter.
      'spamspan' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
        ),
      ),
      // HTML corrector filter.
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
      ),
    ),
  );
  $filtered_html_format = (object) $filtered_html_format;
  filter_format_save($filtered_html_format);

  // Full HTML.
  $full_html_format = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'weight' => 1,
    'filters' => array(
      // URL filter.
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
      ),
      // Line break filter.
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
      ),
      // HTML corrector filter.
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
      ),
    ),
  );
  $full_html_format = (object) $full_html_format;
  filter_format_save($full_html_format);

  $wysiwyg_settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 0,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'bullist' => 1,
        'numlist' => 1,
        'link' => 1,
        'unlink' => 1,
        'formatselect' => 1,
      ),
      'paste' => array(
        'pastetext' => 1,
      ),
      'autoresize' => array(
        'autoresize' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 1,
    'block_formats' => 'p,h2,h3',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => '',
  );

  // Set TinyMCE as the default editor for Filtered HTML.
  db_merge('wysiwyg')
    ->key(array('format' => 'filtered_html'))
    ->fields(array(
      'editor' => 'tinymce',
      'settings' => serialize($wysiwyg_settings),
    ))
    ->execute();
}

/**
 * Global locale settings, that will be set regardless of which language has
 * been set as the default.
 */
function odddrupal_locale_settings_global() {
  // Include the required files.
  require_once DRUPAL_ROOT . '/includes/language.inc';
  require_once DRUPAL_ROOT . '/includes/locale.inc';

  // Set up the enabled negotiation providers and their weight.
  $enabled = array(
    LOCALE_LANGUAGE_NEGOTIATION_URL => -10,
    LOCALE_LANGUAGE_NEGOTIATION_USER => -9,
    LANGUAGE_NEGOTIATION_DEFAULT => 10,
  );

  // Iterate through every available provider, so that we can get the required
  // info and set the weights.
  $providers = language_negotiation_info();
  $weight = $enabled;
  foreach ($providers as $provider => &$data) {
    if (isset($enabled[$provider])) {
      // This provider is provided in the enabled array, set the weight that we
      // have provided.
      $data['weight'] = $enabled[$provider];
    }
    else {
      // This provider shouldn't be enabled, remove it and set its weight to 0.
      $weight[$provider] = 0;
      unset($providers[$provider]);
    }
  }

  // Set the negotiation settings and the weights.
  language_negotiation_set(LANGUAGE_TYPE_INTERFACE, $providers);
  variable_set('locale_language_providers_weight_' . LANGUAGE_TYPE_INTERFACE, $weight);

  // Set first day of week, and ISO-8601.
  variable_set('date_api_use_iso8601', 1);
  variable_set('date_first_day', 1);

  // Set the default displays.
  variable_set('date_format_long', 'l, j F, Y - H:i');
  variable_set('date_format_medium', 'D, Y-m-d H:i');
  variable_set('date_format_short', 'Y-m-d H:i');
}

/**
 * Configure different locale settings for swedish.
 *
 * This will only be executed if swedish was set as the default language during
 * the profile installation.
 */
function odddrupal_locale_settings_sv() {
  // Set up the enabled negotiation providers and their weight.
  $enabled = array(
    LOCALE_LANGUAGE_NEGOTIATION_USER => -10,
    LANGUAGE_NEGOTIATION_DEFAULT => 10,
  );

  // Iterate through every available provider, so that we can get the required
  // info and set the weights.
  $providers = language_negotiation_info();
  $weight = $enabled;
  foreach ($providers as $provider => &$data) {
    if (isset($enabled[$provider])) {
      // This provider is provided in the enabled array, set the weight that we
      // have provided.
      $data['weight'] = $enabled[$provider];
    }
    else {
      // This provider shouldn't be enabled, remove it and set its weight to 0.
      $weight[$provider] = 0;
      unset($providers[$provider]);
    }
  }

  // Set the negotiation settings and the weights.
  language_negotiation_set(LANGUAGE_TYPE_INTERFACE, $providers);
  variable_set('locale_language_providers_weight_' . LANGUAGE_TYPE_INTERFACE, $weight);

  // Alter the weight for english.
  db_update('languages')
    ->fields(array(
      'prefix' => 'en',
      'weight' => 10,
    ))
    ->condition('language',  'en')
    ->execute();

  // Set the source language for string translations.
  variable_set('i18n_string_source_language', 'en');
}

/**
 * Apply Themekey rules.
 *
 * This will basically set the admin theme for some extra paths.
 */
function odddrupal_themekey_rules() {
  // Make sure the required files are loaded.
  module_load_include('inc', 'themekey', 'themekey_build');

  $rules = array(
    array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'user',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => 1,
      'parent' => 0,
      'weight' => 0,
    ),
    array(
      'property' => 'user:role',
      'operator' => '!',
      'value' => 'anonymous user',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => 1,
      'parent' => 1,
      'weight' => 0,
    ),
  );

  foreach ($rules as $rule) {
    themekey_rule_set($rule);
  }
}

/**
 * Set up the default roles and permissions.
 *
 * This will add our editor role, and set the default permissions for every
 * role.
 */
function odddrupal_roles_users() {
  // Permissions for the anonymous role.
  user_role_grant_permissions(1, array(
    'access content',
    'access devel form debug contextual links',
    'access devel information',
    'access xhprof data',
  ));

  // Permissions for the authenticated role.
  user_role_grant_permissions(2, array(
    'access content',
    'access contextual links',
    'access devel form debug contextual links',
    'access devel information',
    'access toolbar',
    'access xhprof data',
    'change own username',
    'use text format filtered_html',
    'view the administration theme',
  ));

  // Remove permissions for the authenticated role.
  user_role_revoke_permissions(2, array(
    'edit mimemail user settings',
  ));

  // Set the language to english for user 1.
  $user = user_load(1);
  $user->language = 'en';
  user_save($user);
}

/**
 * Set various variables.
 */
function odddrupal_set_variables() {
  variable_set('extlink_target', '_blank');
  variable_set('extlink_class', 0);
  variable_set('extlink_mailto_class', 0);
  variable_set('mimemail_alter', 1);
  variable_set('mimemail_format', 'plain_text');
  variable_set('mimemail_incoming', 0);
  variable_set('mimemail_simple_address', 0);
  variable_set('mimemail_sitestyle', 0);
  variable_set('mimemail_textonly', 0);
  variable_set('webform_default_format', 1);
  variable_set('webform_format_override', 1);
  variable_set('user_cancel_method', 'user_cancel_delete');
  variable_set('user_register', '0');
  variable_set('file_public_path', 'sites/all/files');
  variable_set('maintenance_mode_message', st("!site is currently down for maintenance, but will return shortly!", array('!site' => variable_get('site_name', st('The site')))));
  variable_set('logintoboggan_login_with_email', '1');
  variable_set('site_403', 'toboggan/denied');
  variable_set('pathauto_transliterate', 1);
  variable_set('update_check_disabled', 1);
  variable_set('clean_url', 1);
  variable_set('views_show_additional_queries', 0);
  variable_set('views_ui_always_live_preview', 0);
  variable_set('views_ui_show_advanced_column', 1);
  variable_set('views_ui_show_advanced_help_warning', 0);
  variable_set('views_ui_show_listing_filters', 1);
  variable_set('views_ui_show_master_display', 1);
  variable_set('views_ui_show_performance_statistics', 1);
  variable_set('views_ui_show_preview_information', 1);
  variable_set('views_ui_show_sql_query', 1);
  variable_set('views_ui_display_embed', 1);
  variable_set('admin_menu_position_fixed', 1);
  variable_set('tadaa_environment', 'development');
  variable_set('tadaa_environments', array(
    'development' => 'Development',
    'staging' => 'Staging',
    'production' => 'Production',
  ));
  variable_set('tadaa_development_modules', array(
    'backup_migrate' => 0,
    'bad_judgement' => 1,
    'context_ui' => 1,
    'dblog' => 1,
    'devel' => 1,
    'devel_debug_log' => 1,
    'devel_form_debug' => 1,
    'devel_generate' => 1,
    'ds_ui' => 1,
    'field_ui' => 1,
    'help' => 1,
    'letmein' => 1,
    'logentries' => 0,
    'reroute_email' => 1,
    'rules_admin' => 1,
    'search_krumo' => 1,
    'security_review' => 0,
    'speedy' => 0,
    'stage_file_proxy' => 1,
    'googleanalytics' => 0,
    'themekey_ui' => 1,
    'update' => 1,
    'views_ui' => 1,
    'xhprof' => 1,
  ));
  variable_set('tadaa_development_variables', array(
    'block_cache' => 0,
    'cache' => 0,
    'cron_safe_threshold' => '0',
    'dblog_row_limit' => '100',
    'error_level' => '2',
    'preprocess_css' => 0,
    'preprocess_js' => 0,
    'reroute_email_enable' => 1,
    'reroute_email_enable_message' => 1,
  ));
  variable_set('tadaa_staging_modules', array(
    'backup_migrate' => 0,
    'bad_judgement' => 1,
    'context_ui' => 1,
    'dblog' => 1,
    'devel' => 0,
    'devel_debug_log' => 0,
    'devel_form_debug' => 0,
    'devel_generate' => 0,
    'ds_ui' => 1,
    'field_ui' => 1,
    'help' => 0,
    'letmein' => 1,
    'logentries' => 0,
    'reroute_email' => 1,
    'rules_admin' => 1,
    'search_krumo' => 0,
    'security_review' => 1,
    'speedy' => 1,
    'stage_file_proxy' => 1,
    'googleanalytics' => 0,
    'themekey_ui' => 1,
    'update' => 0,
    'views_ui' => 1,
    'xhprof' => 0,
  ));
  variable_set('tadaa_staging_variables', array(
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
  ));
  variable_set('tadaa_production_modules', array(
    'backup_migrate' => 1,
    'bad_judgement' => 0,
    'context_ui' => 0,
    'dblog' => 0,
    'devel' => 0,
    'devel_debug_log' => 0,
    'devel_form_debug' => 0,
    'devel_generate' => 0,
    'ds_ui' => 0,
    'field_ui' => 0,
    'help' => 0,
    'letmein' => 0,
    'logentries' => 1,
    'reroute_email' => 0,
    'rules_admin' => 0,
    'search_krumo' => 0,
    'security_review' => 1,
    'speedy' => 1,
    'stage_file_proxy' => 0,
    'googleanalytics' => 1,
    'themekey_ui' => 0,
    'update' => 0,
    'views_ui' => 0,
    'xhprof' => 0,
  ));
  variable_set('tadaa_production_variables', array(
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
  ));
  variable_set('block_cache', 0);
  variable_set('cache', 0);
  variable_set('cron_safe_threshold', '0');
  variable_set('dblog_row_limit', '100');
  variable_set('error_level', '2');
  variable_set('jquery_update_compression_type', 'min');
  variable_set('jquery_update_jquery_cdn', 'google');
  variable_set('jquery_update_jquery_admin_version', 'default');
  variable_set('preprocess_css', 0);
  variable_set('preprocess_js', 0);
  variable_set('reroute_email_enable', 1);
  variable_set('reroute_email_enable_message', 1);
  variable_set('blockify_blocks', array(
    'blockify-logo' => 'blockify-logo',
    'blockify-site-slogan' => 'blockify-site-slogan',
    'blockify-page-title' => 'blockify-page-title',
    'blockify-breadcrumb' => 'blockify-breadcrumb',
    'blockify-messages' => 'blockify-messages',
    'blockify-actions' => 'blockify-actions',
    'blockify-feed-icons' => 'blockify-feed-icons',
  ));
  variable_set('configurable_timezones', 0);
  variable_set('module_filter_count_enabled', 1);
  variable_set('module_filter_dynamic_save_position', 1);
  variable_set('module_filter_hide_empty_tabs', 0);
  variable_set('module_filter_remember_update_state', 0);
  variable_set('module_filter_set_focus', 1);
  variable_set('module_filter_tabs', 1);
  variable_set('module_filter_track_recent_modules', 0);
  variable_set('module_filter_use_switch', 0);
  variable_set('module_filter_use_url_fragment', 0);
  variable_set('module_filter_visual_aid', 1);
  variable_set('install_language', $_GET['locale']);
  variable_set('ft-default', 'theme_ds_field_minimal');
  variable_set('pathauto_node_pattern', '');
  variable_set('pathauto_taxonomy_term_pattern', '');
  variable_set('pathauto_user_pattern', '');
  variable_set('jreject_browser_alternatives', array(
    'msie' => 0,
    'firefox' => 1,
    'safari' => 1,
    'opera' => 0,
    'chrome' => 1,
    'gcf' => 0,
  ));
  variable_set('jreject_browser_config', array(
    'msie' => array('5' => 1, '6' => 1, '7' => 1, '8' => 0, '9' => 0, '10' => 0),
    'firefox' => array(),
    'chrome' => array(),
    'safari' => array(),
    'opera' => array(),
  ));
  variable_set('jreject_enable', 1);
  variable_set('devel_error_handlers', array(1 => '1', 2 => '2'));
  variable_set('devel_memory', 1);
  variable_set('dev_timer', 1);
  variable_set('logentries_severity', '7');
  variable_set('features_default_export_path', 'sites/all/modules/features');
  variable_set('xhprof_enabled', 1);
  variable_set('security_review_base_url_method', 'include');
}
