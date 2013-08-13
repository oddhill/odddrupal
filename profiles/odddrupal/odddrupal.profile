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

  // Remove unwanted themes from the options.
  unset($options['test_theme']);
  unset($options['update_test_basetheme']);
  unset($options['update_test_subtheme']);
  unset($options['oddmaintenance']);
  unset($options['oddroots']);
  unset($options['seven']);
  unset($options['eight']);
  unset($options['stark']);
  unset($options['garland']);
  unset($options['bartik']);

  if (empty($options)) {
    // No theme has been setup for this site.
    $halt = TRUE;
    drupal_set_message(st("You haven't created a theme for this site yet. Download the %default theme, put it in the sites folder and rename it. Reload the page, and then you'll be able to continue.", array('%default' => 'Odd Baby')), 'error');
  }
  else {
    // Get the assumed theme for this site. This will be the last one in the
    // options array.
    $default_name = end($options);
    $default_key = key($options);

    // If the name of the default theme is "Odd Baby", we'll issue a warning
    // since the user probably has forgotten to rename the theme before
    // installing.
    if ($default_key == 'oddbaby') {
      $halt = TRUE;
      drupal_set_message(st("You've forgotten to rename the %default theme to a more suitable name. You'll have to rename the theme before you'll be able to continue.", array('%default' => 'Odd baby', '%name' => variable_get('site_name', preg_replace('/\\..*$/ui', "", $_SERVER['HTTP_HOST'])))), 'error');
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
      '#default_value' => $default_key,
    );
    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => st('Save and continue'),
      '#disabled' => isset($halt),
    );
  }

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

  // Remove the entire admin account fieldset, and set the defailt values.
  unset($form['admin_account']);
  $form['account'] = array(
    '#tree' => TRUE,
    'name' => array(
      '#type' => 'hidden',
      '#value' => 'admin',
    ),
    'mail' => array(
      '#type' => 'hidden',
      '#value' => 'admin@oddhill.se',
    ),
    'pass' => array(
      '#type' => 'hidden',
      '#value' => 'karljohan12',
    ),
  );

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
        // Add the element to the filters fieldset, and set its title based on
        // the configuration.
        $form['filters'][$key] = $form[$key];
        $form['filters'][$key]['#title'] = $form['#info']["filter-$key"]['label'];

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
}
