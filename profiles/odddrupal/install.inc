<?php
/**
 * @file
 *  Helper and utility functions that are used during the installation process
 *  of Odd Drupal.
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
      // HTML corrector filter.
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
      ),
    ),
  );
  $filtered_html_format = (object)$filtered_html_format;
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
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'Bold' => 1,
        'Italic' => 1,
        'BulletedList' => 1,
        'NumberedList' => 1,
        'Outdent' => 1,
        'Indent' => 1,
        'Link' => 1,
        'Unlink' => 1,
        'Format' => 1,
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
    'paste_auto_cleanup_on_paste' => 0,
    'block_formats' => 'p,h2,h3',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => '',
  );
  
  // Set CKEditor as the default editor for Filtered HTML.
  db_merge('wysiwyg')
    ->key(array('format' => 'filtered_html'))
    ->fields(array(
      'editor' => 'ckeditor',
      'settings' => serialize($wysiwyg_settings),
    ))
    ->execute();
}

/**
 * Global locale settings, that will be set regardless of which language has
 * been set as the default.
 */
function odddrupal_locale_settings_global() {
  // Make sure the required files are loaded.
  require_once DRUPAL_ROOT . '/includes/language.inc';

  // Setup the negotiation settings.
  $providers = array(
    'language' => array(
      'locale-user' => array(
        'callbacks' => array(
          'language' => 'locale_language_from_user',
        ),
        'file' => 'includes/locale.inc',
      ),
      'language-default' => array(
        'callbacks' => array(
          'language' => 'language_from_default',
        ),
      ),
    ),
    'language_content' => array(
      'locale-interface' => array(
        'callbacks' => array(
          'language' => 'locale_language_from_interface',
        ),
        'file' => 'includes/locale.inc',
      ),
    ),
    'language_url' => array(
      'locale-url' => array(
        'callbacks' => array(
          'language' => 'locale_language_from_url',
          'switcher' => 'locale_language_switcher_url',
          'url_rewrite' => 'locale_language_url_rewrite_url',
        ),
        'file' => 'includes/locale.inc',
      ),
      'locale-url-fallback' => array(
        'callbacks' => array(
          'language' => 'locale_language_url_fallback',
        ),
        'file' => 'includes/locale.inc',
      ),
    ),
  );
  // Save the negotiation types.
  foreach ($providers as $type => $negotiation) {
    language_negotiation_set($type, $negotiation);
  }
  // Set the negotiation weight.
  $weight = array(
    'locale-url' => -10,
    'locale-user' => -9,
    'locale-session' => -8,
    'language-default' => -7,
    'locale-browser' => -6,
  );
  variable_set('locale_language_providers_weight_language', $weight);
  // Save language types.
  $language_types = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  variable_set('language_types', $language_types);
  variable_set('locale_language_negotiation_url_part', '0');

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
  // Alter the weight for english.
  db_update('languages')
    ->fields(array(
      'prefix' => 'en',
      'weight' => 10,
    ))
    ->condition('language',  'en')
    ->execute();
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
	    'value' => 'node/%/translate',
	    'theme' => 'ThemeKeyAdminTheme',
	    'enabled' => 1,
	    'parent' => 0,
	    'weight' => 0,
	  ),
	  array(
	    'property' => 'drupal:path',
	    'operator' => '=',
	    'value' => 'user',
	    'theme' => 'ThemeKeyAdminTheme',
	    'enabled' => 1,
	    'parent' => 0,
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
function odddrupal_roles() {
  // Create the editor role.
  $editor_role->name = 'editor';
  user_role_save($editor_role);

  // Permissions for the anonymous role.
  user_role_grant_permissions(1, array(
    'access content',
    'access devel information',
  ));

  // Permissions for the authenticated role.
  user_role_grant_permissions(2, array(
    'access content',
    'access devel information',
  ));

  // Permissions for the editor role.
  user_role_grant_permissions($editor_role->rid, array(
    'access contextual links',
    'access overlay',
    'access toolbar',
    'change own username',
    'use text format filtered_html',
    'view the administration theme',
  ));
}

/**
 * Set various variables.
 */
function odddrupal_set_variables() {
  variable_set('extlink_exclude', 'addthis.com/bookmark.php');
  variable_set('extlink_target', '_blank');
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
  variable_set('maintenance_mode_message', variable_get('site_name', 'Sajten') . ' är tillfälligt nere för underhåll, men kommer strax tillbaka!');
  variable_set('logintoboggan_login_with_email', '1');
  variable_set('site_403', 'toboggan/denied');
  variable_set('cron_safe_threshold', 3600);
  variable_set('error_level', '1');
  variable_set('fancybox_path', 'profiles/odddrupal/libraries/fancybox');
  variable_set('fancybox_settings', array(
    'activation' => array(
      'selector' => '',
      'activation_type' => 'exclude',
      'activation_pages' => '',
    ),
    'imagefield' => array(
      'grouping' => '1',
      'imagecache_preset' => '0',
      'use_node_title' => 0,
    ),
    'options' => array(
      'margin' => 0,
      'padding' => 0,
      'speedIn' => 0,
      'speedOut' => 0,
      'changeSpeed' => 0,
    ),
  ));
  variable_set('fancybox_files', array(
    'js' => 'jquery.fancybox-1.3.1.js',
    'css' => 'jquery.fancybox-1.3.1.css',
  ));
  variable_set('pathauto_transliterate', 1);
  variable_set('dblog_row_limit', '0');
  variable_set('update_check_disabled', 1);
  variable_set('clean_url', 1);
  variable_set('views_show_additional_queries', 0);
  variable_set('views_ui_always_live_preview', 0);
  variable_set('views_ui_show_advanced_column', 1);
  variable_set('views_ui_show_advanced_help_warning', 0);
  variable_set('views_ui_show_listing_filters', 1);
  variable_set('views_ui_show_master_display', 1);
  variable_set('views_ui_show_performance_statistics', 0);
  variable_set('views_ui_show_preview_information', 0);
  variable_set('views_ui_show_sql_query', 0);
  variable_set('admin_menu_position_fixed', 1);
  variable_set('tadaa_environment', 'development');
  variable_set('tadaa_environments', array(
    'development' => 'Development',
    'staging' => 'Staging',
    'production' => 'Production',
  ));
  variable_set('tadaa_development_modules', array(
    'context_ui' => 1,
    'devel' => 1,
    'devel_generate' => 1,
    'help' => 1,
    'reroute_email' => 1,
    'rules_admin' => 1,
    'speedy' => 0,
    'googleanalytics' => 0,
    'themekey_ui' => 1,
    'views_ui' => 1,
  ));
  variable_set('tadaa_development_variables', array(
    'block_cache' => 0,
    'cache' => 0,
    'dblog_row_limit' => '100',
    'error_level' => '2',
    'jquery_update_compression_type' => 'none',
    'preprocess_css' => 0,
    'preprocess_js' => 0,
    'reroute_email_enable' => 1,
    'reroute_email_enable_message' => 1,
  ));
  variable_set('tadaa_staging_modules', array(
    'context_ui' => 1,
    'devel' => 0,
    'devel_generate' => 0,
    'help' => 0,
    'reroute_email' => 1,
    'rules_admin' => 1,
    'speedy' => 1,
    'googleanalytics' => 0,
    'themekey_ui' => 1,
    'views_ui' => 1,
  ));
  variable_set('tadaa_staging_variables', array(
    'block_cache' => 1,
    'cache' => 1,
    'dblog_row_limit' => '100',
    'error_level' => '2',
    'jquery_update_compression_type' => 'min',
    'preprocess_css' => 1,
    'preprocess_js' => 1,
    'reroute_email_enable' => 1,
    'reroute_email_enable_message' => 0,
    'speedy_js_production' => 1,
  ));
  variable_set('tadaa_production_modules', array(
    'context_ui' => 0,
    'devel' => 0,
    'devel_generate' => 0,
    'help' => 0,
    'reroute_email' => 0,
    'rules_admin' => 0,
    'speedy' => 1,
    'googleanalytics' => 1,
    'themekey_ui' => 0,
    'views_ui' => 0,
  ));
  variable_set('tadaa_production_variables', array(
    'block_cache' => 1,
    'cache' => 1,
    'dblog_row_limit' => '0',
    'error_level' => '0',
    'jquery_update_compression_type' => 'min',
    'preprocess_css' => 1,
    'preprocess_js' => 1,
    'reroute_email_enable' => 0,
    'reroute_email_enable_message' => 0,
    'speedy_js_production' => 1,
  ));
  variable_set('block_cache', 0);
  variable_set('cache', 0);
  variable_set('jquery_update_compression_type', 'none');
  variable_set('preprocess_css', 0);
  variable_set('preprocess_js', 0);
  variable_set('reroute_email_enable', 1);
  variable_set('reroute_email_enable_message', 1);
  variable_set('blockify_blocks', array(
    'blockify-logo' => 'blockify-logo',
    'blockify-site-name' => 'blockify-site-name',
    'blockify-site-slogan' => 'blockify-site-slogan',
    'blockify-page-title' => 'blockify-page-title',
    'blockify-breadcrumb' => 'blockify-breadcrumb',
    'blockify-tabs' => 'blockify-tabs',
    'blockify-messages' => 'blockify-messages',
    'blockify-actions' => 'blockify-actions',
    'blockify-feed-icons' => 'blockify-feed-icons',
  ));
  variable_set('features_tools_disable_features_page_js', 1);
  variable_set('dblog_row_limit', '100');
  variable_set('error_level', '2');
}
