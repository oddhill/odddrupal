<?php
/**
 * @file
 * Custom installation profile for Odd Hill.
 */

define('ODDDRUPAL_DEFAULT_COUNTRY', 'SE');
define('ODDDRUPAL_DEFAULT_TIMEZONE', 'Europe/Stockholm');

/**
 * Implements hook_install_tasks().
 */
function odddrupal_install_tasks($install_state) {
  // Add a task that lets us select the default theme.
  $tasks['odddrupal_theme'] = array(
    'display_name' => st('Set the default theme'),
    'display' => TRUE,
    'type' => 'form',
    'function' => 'odddrupal_theme_form',
  );

  return $tasks;
}

/**
 * Installation task: Select the default theme.
 *
 * This is the form that is presented to the user.
 */
function odddrupal_theme_form() {
  drupal_set_title(st('Default theme'));
  $form = array();

  // Set an array of avaliable themes.
  $themes = list_themes(TRUE);
  foreach ($themes as $theme => $data) {
    $options[$theme] = $data->info['name'];
  }

  // Create the form.
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
 * Installation task: Select the default theme.
 *
 * This will validate that the user actually has selected a theme.
 */
function odddrupal_theme_form_validate($form, $form_state) {
  if (!$form_state['values']['default_theme']) {
    // Return an error if the user hasn't selected a theme.
    form_set_error('default_theme', st('You have to choose a theme'));
  }
}

/**
 * Installation task: Select the default theme.
 *
 * This is the submit callback, that will set the theme.
 */
function odddrupal_theme_form_submit($form, $form_state) {
  $default_theme = $form_state['values']['default_theme'];

  // Get all themes.
  $themes = list_themes(TRUE);

  // Add the selected theme and the administration theme to the enabled themes.
  $enabled = array($default_theme, 'eight');

  // Disable the other themes.
  foreach ($themes as $theme => $data) {
    if (!in_array($theme, $enabled)) {
      $disabled[] = $theme;
    }
  }

  // Enable and disable themes.
  theme_enable($enabled);
  theme_disable($disabled);

  // Set admin and default theme.
  variable_set('admin_theme', 'eight');
  variable_set('node_admin_theme', '1');
  variable_set('theme_default', $default_theme);
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * This will set some default values for the configuration form that is shown
 * when the installation process has finished.
 */
function odddrupal_form_install_configure_form_alter(&$form, $form_state) {
  // Add a default value to the site name.
  $form['site_information']['site_name']['#default_value'] = preg_replace('/\\..*$/ui', "", $_SERVER['HTTP_HOST']);

  // Set the site mail based on the site name and site language.
  $form['site_information']['site_mail']['#default_value'] = 'info@' . $form['site_information']['site_name']['#default_value'] . ($_GET['locale'] == 'sv' ? '.se' : '.com');

  // Set the default username and email for user 1.
  $form['admin_account']['account']['name']['#default_value'] = 'root';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@oddhill.se';

  // Remove the country and date settings, and set them to Sweden as country and
  // Stockholm as timezone.
  unset($form['server_settings']);
  $form['server_settings']['site_default_country'] = array(
    '#type' => 'hidden',
    '#value' => ODDDRUPAL_DEFAULT_COUNTRY,
  );
  $form['server_settings']['date_default_timezone'] = array(
    '#type' => 'hidden',
    '#value' => ODDDRUPAL_DEFAULT_TIMEZONE,
  );

  // Disable update notifications, and remove the fieldset.
  unset($form['update_notifications']);
  $form['update_status_module'] = array(
    '#type' => 'hidden',
    '#value' => FALSE,
  );
}

/**
 * Implements hook_menu().
 */
function odddrupal_menu() {
  // Configuration form.
  $items['admin/config/system/odddrupal'] = array(
    'title' => 'Odd Drupal',
    'description' => 'Configure Odd Drupal settings.',
    'access arguments' => array('administer site configuration'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('odddrupal_configuration_form'),
  );

  // Version callback.
  $items['odddrupal/version'] = array(
    'access callback' => 'odddrupal_version_callback_access',
    'page callback' => 'odddrupal_version_callback',
  );

  return $items;
}

/**
 * Configuration form for Odd Drupal.
 *
 * This is built using drupal_get_form() and is accessible via
 * admin/config/system/odddrupal.
 */
function odddrupal_configuration_form($form, &$form_state) {
  // Fetch the current access key and create the URL.
  $access_key = variable_get('odddrupal_version_callback_key', variable_get('cron_key', ''));
  $version_callback_url = url('odddrupal/version', array('absolute' => TRUE, 'query' => array('key' => $access_key)));

  // Create a fieldset for the version callback configuration.
  $form['odddrupal_version_callback'] = array(
    '#title' => t('Version callback'),
    '#description' => t('The version callback displays which profiles that are being used and their versions. The callback is accessible via <a href="@url">@url</a>.', array('@url' => $version_callback_url)),
    '#type' => 'fieldset',
  );
  $form['odddrupal_version_callback']['odddrupal_version_callback_key'] = array(
    '#title' => t('Access key'),
    '#description' => t('The access key to use in order to access the callback. The key should be supplied using the %key query parameter.', array('%key' => 'key')),
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => $access_key,
  );

  return system_settings_form($form);
}

/**
 * Access callback for the version callback.
 *
 * This will verify that the supplied access key matches the one configured for
 * the site.
 *
 * @return bool
 *   TRUE or FALSE depending on whether the user should have access or not.
 */
function odddrupal_version_callback_access() {
  if (!isset($_GET['key'])) {
    return FALSE;
  }

  // Return TRUE if the supplied key matches the configured key.
  return $_GET['key'] == variable_get('odddrupal_version_callback_key', variable_get('cron_key', ''));
}

/**
 * Page callback which returns the current version.
 *
 * This will fetch the information based on the main profile and every profile
 * that is being used. The version for each profile must be contained within the
 * info file.
 *
 * @return json
 *   JSON formatted data with the information.
 */
function odddrupal_version_callback() {
  // Setup the initial response.
  $response = array(
    'success' => FALSE,
    'data' => t('An unknown error occured.'),
  );

  // Get the install profile and every profile which it depends on.
  $profile = variable_get('install_profile');
  $profiles = variable_get('install_profiles');

  // Bail out if we're missing profile information.
  if (!$profile || !$profiles) {
    $response['data'] = t('Failed to determine profile.');
    drupal_add_http_header('Status', '500 Internal Server Error');
    return $response;
  }

  // Fetch the versions of each profile that is being used.
  $versions = array();
  foreach ($profiles as $profile) {
    // Get profile information.
    $info = system_get_info('module', $profile);

    // Bail out if there's no version.
    if (!isset($info['version']) || !$info['version']) {
      $response['data'] = t('Failed to determine version for @profile.', array('@profile' => $profile));
      drupal_add_http_header('Status', '500 Internal Server Error');
      return $response;
    }

    // Add the version to the versions.
    $versions[$profile] = $info['version'];
  }

  // Add the profile and versions to the response, and exit.
  $response['success'] = TRUE;
  $response['data'] = array(
    'profile' => $profile,
    'versions' => $versions,
  );
  return drupal_json_output($response);
}

/**
 * Implements hook_views_api().
 */
function odddrupal_views_api() {
  return array(
    'api' => 3,
  );
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function odddrupal_form_user_admin_permissions_alter(&$form, &$form_state) {
  if (isset($form['module_filter'])) {
    unset($form['module_filter']);
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function odddrupal_form_views_exposed_form_alter(&$form, $form_state) {

  // Alter the exposed form for content and user administration views.
  if (in_array($form['#id'], array('views-exposed-form-administration-nodes-content', 'views-exposed-form-administration-users-users'))) {
    $form['#attributes']['class'][] = 'administration-filters';

    // Create a fieldset that we'll wrap every element inside.
    $form['filters'] = array(
      '#type' => 'fieldset',
      '#title' => t('Filter'),
      '#collapsible' => TRUE,
    );

    // Find every element, and put it in the fieldset, if the element isn't a
    // fieldset itself.
    foreach (element_children($form) as $key) {
      if ($form[$key]['#type'] != 'fieldset') {
        // Add the element to the filters fieldset.
        $form['filters'][$key] = $form[$key];

        // Set the title to the configured label, if there is one.
        if (isset($form['#info']["filter-$key"]['label'])) {
          $form['filters'][$key]['#title'] = $form['#info']["filter-$key"]['label'];
        }

        // Remove the original element.
        unset($form[$key]);
      }
    }

    // Remove the views exposed form theme functions, because that template file
    // makes everything look like crap ones it's in a fieldset. If we remove
    // everything, the default theme functions for forms will be used.
    unset($form['#theme']);
  }

  // Remove the extra language options that Views provides for the language
  // filter in the administration content view. We'll remove these here, since
  // it's not possible to exclude items using Views UI, only to include.
  if ($form['#id'] == 'views-exposed-form-administration-nodes-content') {
    unset($form['filters']['language']['#options']['***CURRENT_LANGUAGE***']);
    unset($form['filters']['language']['#options']['***DEFAULT_LANGUAGE***']);
  }

}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function odddrupal_form_views_form_administration_nodes_content_alter(&$form, $form_state) {
  // Collapse the VBO fieldset by default.
  $form['select']['#collapsed'] = TRUE;
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function odddrupal_form_views_form_administration_users_users_alter(&$form, $form_state) {
  // Collapse the VBO fieldset by default.
  $form['select']['#collapsed'] = TRUE;
}

/**
 * Implements hook_menu_alter().
 */
function odddrupal_menu_alter(&$items) {
  // Since we have a Views page for the admin/people page, we need to modify the
  // admin/people/create page since it relies on some info from the parent,
  // which Views will modify. By altering these properties, everything works as
  // it should.
  $items['admin/people/create']['page callback'] = 'user_admin';
  $items['admin/people/create']['file'] = 'user.admin.inc';
}

/**
 * Implements hook_wysiwyg_editor_settings_alter().
 */
function odddrupal_wysiwyg_editor_settings_alter(&$settings, $context) {
  // Alter the settings for CKEditor.
  if ($context['profile']->editor == 'ckeditor') {
    $settings['forcePasteAsPlainText'] = TRUE;
  }

  // Alter the settings for TinyMCE.
  if ($context['profile']->editor == 'tinymce') {
    // Remove the paste button.
    $settings['theme_advanced_buttons1'] = preg_replace('/(pastetext,*|,*pastetext$)/ui', '', $settings['theme_advanced_buttons1']);

    // Remove span and style tags.
    $settings['paste_remove_spans'] = TRUE;
    $settings['paste_remove_styles'] = TRUE;
  }
}

/**
 * Implements hook_page_alter().
 */
function odddrupal_page_alter(&$page) {
  global $user;

  // Remove the toolbar for user 1.
  if ($user->uid == 1) {
    unset($page['page_top']['toolbar']);
  }
}

/**
 * Implements hook_init().
 */
function odddrupal_init() {
  // Alter the language when Drupal is being accessed via the CLI.
  if (drupal_is_cli()) {
    // Load user 1, and all the available languages.
    $user1 = user_load(1);
    $languages = language_list();

    // Get the language of user 1, fallback to en if it hasn't been set.
    $language = $user1->language ? $user1->language : 'en';

    // Change the language if the language exists.
    if (isset($languages[$language])) {
      $GLOBALS['language'] = $languages[$language];
    }
  }

  // Print a warning message if the user is masquerading, and isn't about to
  // switch back.
  if (isset($_SESSION['masquerading']) && current_path() != 'masquerade/unswitch') {
    $params = array(
      '!user' => theme('username', array('account' => $GLOBALS['user'])),
      '@unswitch-path' => url('masquerade/unswitch', array(
        'query' => array(
          'token' => drupal_get_token('masquerade/unswitch'),
          'destination' => 'admin/people',
        ),
      )),
    );
    drupal_set_message(t('You are masquerading as !user. <a href="@unswitch-path">Switch back</a>.', $params), 'warning', FALSE);
  }
}

/**
 * Implements hook_block_info_alter().
 */
function odddrupal_block_info_alter(&$blocks, $theme, $code_blocks) {
  // Cache the Blockify logo block per page rather than globally since the
  // contents of this block changes depending on the page.
  if (isset($blocks['blockify']['blockify-logo'])) {
    $blocks['blockify']['blockify-logo']['cache'] = DRUPAL_CACHE_PER_PAGE;
  }
}

/**
 * Implements hook_js_alter().
 */
function odddrupal_js_alter(&$js) {
  // Get the configured jQuery version. Use 1.9 as the default.
  $version = variable_get('jquery_update_jquery_version', '1.9');

  // If we're currently on an administation page and a different version is
  // configured for those, we'll need to compare against that version instead.
  if (path_is_admin(current_path()) && ($admin_version = variable_get('jquery_update_jquery_admin_version'))) {
    $version = $admin_version;
  }

  // If a jQuery version greather than or equal to 1.9 is being used, we'll need
  // to add the jQuery migrate plugin in order to support deprecated features.
  if (version_compare($version, '1.9') >= 0) {
    // Set the path to the plugin. We'll use the development version if Tadaa!
    // is currently set to development. Otherwise we'll use the minified version
    // since this doesn't generate any warnings.
    if (variable_get('tadaa_environment', 'development') != 'development') {
      $path = '//code.jquery.com/jquery-migrate-1.2.1.min.js';
    }
    else {
      $path = '//code.jquery.com/jquery-migrate-1.2.1.js';
    }

    // Add the plugin with a high weight. This is because the plugin should be
    // included after jQuery itself.
    drupal_add_js($path, array('type' => 'external', 'weight' => 100));
  }
}
