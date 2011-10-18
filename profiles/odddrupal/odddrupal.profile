<?php
/**
 * Implements hook_form_FORM_ID_alter().
 */
function odddrupal_form_install_configure_form_alter(&$form, $form_state) {
  // Add the standard prefix for the site mail.
  $form['site_information']['site_mail']['#default_value'] = 'info@';
  
  // Add default info for the admin account.
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@oddhill.se';
  
  // Set Sweden as the default country.
  $form['server_settings']['site_default_country']['#default_value'] = 'SE';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Stockholm';
  unset($form['server_settings']['date_default_timezone']['#attributes']);

  // Uncheck update notifications.
  $form['update_notifications']['update_status_module']['#default_value'] = array();
}

/**
 * Implements hook_install_tasks().
 */
function odddrupal_install_tasks($install_state) {
  $swedish = (isset($install_state['parameters']['locale']) && $install_state['parameters']['locale'] == 'sv');

  $tasks['odddrupal_theme'] = array(
    'display_name' => st('Default theme'),
    'display' => TRUE,
    'type' => 'form',
    'function' => 'odddrupal_theme_form',
  );
  $tasks['odddrupal_text_formats'] = array();
  $tasks['odddrupal_locale_settings'] = array(
    'function' => $swedish ? 'odddrupal_locale_settings_sv' : 'odddrupal_locale_settings_default',
  );
  $tasks['odddrupal_themekey_rules'] = array();
  $tasks['odddrupal_roles'] = array();
  $tasks['odddrupal_permissions'] = array();
  $tasks['odddrupal_users'] = array();
  $tasks['odddrupal_set_variables'] = array();
  
  return $tasks;
}

/**
 * A form to select the default theme.
 */
function odddrupal_theme_form() {
  drupal_set_title(st('Default theme'));
  
  // Set an array of avaliable themes.
  $themes = list_themes(TRUE);
  foreach ($themes as $theme => $data) {
    $options[$theme] = $data->info['name'];
  }
  
  // Remove unwanted themes from the options.
  unset($options['test_theme']);
  unset($options['update_test_basetheme']);
  unset($options['update_test_subtheme']);
  unset($options['oddmaintenance']);
  unset($options['oddroots']);

  $form['odddrupal'] = array(
    '#type' => 'fieldset',
    '#title' => st('Choose the default theme for this site'),
    '#collapsible' => FALSE,
  );
  $form['odddrupal']['default_theme'] = array(
    '#type' => 'radios',
    '#options' => $options,
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Save and continue'),
  );
  return $form;
}

/**
 * Validates the theme form.
 */
function odddrupal_theme_form_validate($form, $form_state) {
  if (!$form_state['values']['default_theme']) {
    // Return an error if the user hasn't selected a theme.
    form_set_error('default_theme', st('You have to choose a theme'));
  }
}

/**
 * Submits the theme form.
 */
function odddrupal_theme_form_submit($form, $form_state) {
  $default_theme = $form_state['values']['default_theme'];
  
  // Get all themes.
  $themes = list_themes(TRUE);
  
  // Add the selected theme and Seven to the enabled themes.
  $enabled[] = 'seven';
  $enabled[] = $default_theme;

  if (isset($themes[$default_theme]->base_themes)) {
    // Add base themes to the enabled array.
    foreach ($themes[$default_theme]->base_themes as $theme => $name) {
      $enabled[] = $theme;
    }
  }

  // Disable existing themes.
  foreach ($themes as $theme => $data) {
    if (!in_array($theme, $enabled)) {
      $disabled[] = $theme;
    }
  }

  // Enable and disable themes.
  theme_enable($enabled);
  theme_disable($disabled);
  
  // Set admin and default theme.
  variable_set('admin_theme', 'seven');
  variable_set('node_admin_theme', '1');
  variable_set('theme_default', $default_theme);
}

/**
 * Installs various text formats.
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
 * Configure different locale settings for swedish.
 */
function odddrupal_locale_settings_sv() {
  // Setup the negotiation settings.
  $providers = array(
    'language' => array(
      'locale-url' => array(
        'callbacks' => array(
          'language' => 'locale_language_from_url',
          'switcher' => 'locale_language_switcher_url',
          'url_rewrite' => 'locale_language_url_rewrite_url',
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
    'locale-user' => -10,
    'locale-browser' => -9,
    'locale-url' => -8,
    'locale-session' => -7,
    'language-default' => -6,
  );
  variable_set("locale_language_providers_weight_language", $weight);
  // Save language types.
  $language_types = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  variable_set('language_types', $language_types);
  variable_set('locale_language_negotiation_url_part', '0');
  
  // Configure swedish.
  db_update('languages')
    ->fields(array(
      'prefix' => '',
      'weight' => -10,
    ))
    ->condition('language',  'sv')
    ->execute();
  
  // Configure english.
  db_update('languages')
    ->fields(array(
      'prefix' => 'en',
      'weight' => -9,
    ))
    ->condition('language',  'en')
    ->execute();
  
  // Set first day of week, and ISO-8601.
  variable_set('date_api_use_iso8601', 1);
  variable_set('date_first_day', 1);
  
  // Set the default displays.
  variable_set('date_format_long', 'l, j F, Y - H:i');
  variable_set('date_format_medium', 'D, Y-m-d H:i');
  variable_set('date_format_short', 'Y-m-d H:i');
}

/**
 * Configure different locale settings for english.
 */
function odddrupal_locale_settings_default() {
  // Set first day of week, and ISO-8601.
  variable_set('date_api_use_iso8601', 1);
  variable_set('date_first_day', 1);
}

/**
 * Apply Themekey rules.
 */
function odddrupal_themekey_rules() {
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
	    'value' => 'users/%',
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
	  array(
	    'property' => 'drupal:path',
	    'operator' => '=',
	    'value' => 'user/%/edit',
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
 * Create default roles.
 */
function odddrupal_roles() {
  // Editor.
  $role->name = 'editor';
  user_role_save($role);
}

/**
 * Set default permissions.
 */
function odddrupal_permissions() {
  // Access content for anonomyous and authenticated.
  user_role_grant_permissions(1, array('access content'));
  user_role_grant_permissions(2, array('access content'));

  // Editor role.
  $role = user_role_load_by_name('editor');
  user_role_grant_permissions($role->rid, array(
    'access contextual links',
    'access overlay',
    'change own username',
    'use text format filtered_html',
    'view the administration theme',
  ));
}

/**
 * Create and configure default users.
 */
function odddrupal_users() {
  global $language;

  // Create the editor account.
  $role = user_role_load_by_name('editor');
  $user['name'] = 'editor';
  $user['mail'] = variable_get('site_mail');
  $user['pass'] = 'karljohan12';
  $user['timezone'] = variable_get('date_default_timezone');
  $user['language'] = $language->language;
  $user['init'] = variable_get('site_mail');
  $user['status'] = 1;
  $user['roles'] = array(
    2 => TRUE,
    $role->rid => $role->rid
  );
  user_save(NULL, $user);

  // Disable the overlay for user 1.
  $user = user_load(1);
  user_save($user, array('data' => array('overlay' => 0)));
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
  variable_set('cron_safe_threshold', 3600);
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
  variable_set('admin_menu_tweak_modules', 1);
  variable_set('pathauto_transliterate', 1);
  variable_set('dblog_row_limit', '0');
}

/**
 * Enable the new custom module, Seducing mail.
 */
function odddrupal_update_7101() {
  if (!module_exists('seducing_mail')) {
    module_enable(array('seducing_mail'));
  }
}

/**
 * Enable the new contrib module, Module Filter.
 */
function odddrupal_update_7102() {
  if (!module_exists('module_filter')) {
    module_enable(array('module_filter'));
  }
}
