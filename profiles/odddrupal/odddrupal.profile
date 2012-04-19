<?php
/**
 * @file
 * Custom installation profile for Odd Hill.
 */

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
 * Implements hook_form_FORM_ID_alter().
 *
 * This will set some default values for the configuration form that is shown
 * when the installation process has finished.
 */
function odddrupal_form_install_configure_form_alter(&$form, $form_state) {
  // Add the standard prefix for the site mail.
  $form['site_information']['site_mail']['#default_value'] = 'info@';
  
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
    '#value' => 'SE',
  );
  $form['server_settings']['date_default_timezone'] = array(
    '#type' => 'hidden',
    '#value' => 'Europe/Stockholm',
  );

  // Disable update notifications, and remove the fieldset.
  unset($form['update_notifications']);
  $form['update_status_module'] = array(
    '#type' => 'hidden',
    '#value' => FALSE,
  );
  
  // Add an option to set the address for Reroute email.
  $form['tadaa'] = array(
    '#type' => 'fieldset',
    '#title' => t('Reroute Email'),
  );
  $form['tadaa']['reroute_email'] = array(
    '#type' => 'textfield',
    '#default_value' => $_SERVER['SERVER_ADMIN'],
    '#description' => t('Enter the email address that you wish to reroute every email to. This will only be active when Reroute Email is enabled.'),
  );

  // Add a custom submit function.
  $form['#submit'][] = 'odddrupal_install_configure_form_submit';
}

/**
 * Custom submit function for the install configure form.
 *
 * This will create the editor role, and configure the administrator account.
 * This is located here, because the editor role needs some info from the
 * previous form.
 *
 * We will also set the address for reroute email.
 */
function odddrupal_install_configure_form_submit($form, $form_state) {
  // Load the editor role.
  $editor_role = user_role_load_by_name('editor');

  // Create the editor account.
  $user['name'] = 'editor';
  $user['mail'] = $form_state['values']['site_mail'];
  $user['pass'] = 'karljohan12';
  $user['timezone'] = $form_state['values']['date_default_timezone'];
  $user['language'] = $_GET['locale'];
  $user['init'] = $form_state['values']['site_mail'];
  $user['status'] = 1;
  $user['roles'] = array(
    2 => TRUE,
    $editor_role->rid => $editor_role->rid
  );
  user_save(NULL, $user);
  
  // Create the support account.
  $user['name'] = 'support';
  $user['mail'] = 'support@oddhill.se';
  $user['pass'] = 'karljohan12';
  $user['timezone'] = $form_state['values']['date_default_timezone'];
  $user['language'] = $_GET['locale'];
  $user['init'] = $form_state['values']['site_mail'];
  $user['status'] = 1;
  $user['roles'] = array(
    2 => TRUE,
    $editor_role->rid => $editor_role->rid
  );
  user_save(NULL, $user);
  
  // Disable the overlay for user 1, and set the language to english.
  $user = user_load(1);
  $user->language = 'en';
  user_save($user, array('data' => array('overlay' => 0)));
  
  // Set the reroute email address.
  variable_set('reroute_email_address', $form_state['values']['reroute_email']);
}
