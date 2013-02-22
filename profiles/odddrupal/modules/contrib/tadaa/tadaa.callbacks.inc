<?php
/**
 * @file
 * This file contains the different callbacks used by Tadaa!.
 */

/**
 * Callback that checks if the specified machinreadable name already exists.
 *
 * Used by the environment form.
 *
 * @return
 *  TRUE or FALSE depending on whether the name already exists or not.
 */
function tadaa_environment_name_exists($environment_name) {
  $existing = variable_get('tadaa_environments', array());

  return isset($existing[$environment_name]);
}

/**
 * Callback that loads the available variables from the database.
 *
 * This is used for the autocomplete textfield when configuring a new variable.
 *
 * @param $search_string
 *  The search string for the variable name.
 */
function tadaa_variable_autocomplete($search_string = '') {
  $matches = array();
  if ($search_string) {
    $result = db_select('variable')->fields('variable', array('name'))->condition('name', '%' . db_like($search_string) . '%', 'LIKE')->range(0, 10)->execute();
    foreach ($result as $variable) {
      $matches[$variable->name] = check_plain($variable->name);
    }
  }

  drupal_json_output($matches);
}

/**
 * Callback that loads the current value for a variable.
 *
 * Used by the variable form.
 */
function tadaa_variable_load_value($form, &$form_state) {
  $value = variable_get($form_state['values']['variable_name'], NULL);
  if (!isset($value)) {
    // No value saved, bail out early.
    return;
  }

  // Load the triggering element, and the name of the environment.
  $button = $form_state['triggering_element'];
  $environment = $button['#name'];

  // Set the value of the textarea, and wrap it.
  $form['environment']['variable_value']['#value'] = serialize($value);
  $form['environment']['variable_value']['#prefix'] = '<div id="' . $environment . '-value-wrapper">';
  $form['environment']['variable_value']['#suffix'] = '</div>';

  // Return the new fieldset.
  return $form['environment']['variable_value'];
}

/**
 * Callback that fixes a module.
 *
 * @param $module
 *  The module that we'd like to fix.
 */
function tadaa_module_fix($module) {
  // Load the modules for the active environment.
  $modules = tadaa_get_modules(TADAA_ENVIRONMENT);

  if ($modules[$module]) {
    // Activate the module.
    module_enable(array($module));
  }
  else {
    // Disable the module.
    module_disable(array($module));
  }

  // Go to the specified destination of one exists. Otherwise we'll go to the
  // module status page.
  if (isset($_GET['destination'])) {
    drupal_goto($_GET['destination']);
  }
  else {
    drupal_goto('admin/config/development/tadaa/status/modules');
  }
}

/**
 * Callback that fixes a variable.
 *
 * @param $variable
 *  The variable that we'd like to fix.
 */
function tadaa_variable_fix($variable) {
  // Load the variables for the active environment.
  $variables = tadaa_get_variables(TADAA_ENVIRONMENT);

  // Set the variable to the configured value.
  variable_set($variable, $variables[$variable]);

  // Go to the specified destination of one exists. Otherwise we'll go to the
  // variable status page.
  if (isset($_GET['destination'])) {
    drupal_goto($_GET['destination']);
  }
  else {
    drupal_goto('admin/config/development/tadaa/status/variables');
  }
}

/**
 * Callback that switches environment.
 *
 * @param $environment
 *  The environment that we should switch to.
 */
function tadaa_environment_switch($environment) {
  // Get the configured module and variables.
  $modules = tadaa_get_modules($environment);
  $variables = tadaa_get_variables($environment);

  // Build an array of the modules that we should enable and one for those that
  // should be disabled.
  $enable = array();
  $disable = array();
  foreach ($modules as $module => $status) {
    if ($status) {
      $enable[] = $module;
    }
    else {
      $disable[] = $module;
    }
  }

  // Enable and disable the appropriate modules.
  module_enable($enable);
  module_disable($disable);

  // Change the values of the variables.
  foreach ($variables as $name => $value) {
    variable_set($name, $value);
  }

  // Finally, set the new environment, clear the cache, and exit.
  variable_set('tadaa_environment', $environment);
  cache_clear_all();
  exit();
}