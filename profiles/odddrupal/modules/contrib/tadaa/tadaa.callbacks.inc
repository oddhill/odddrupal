<?php
/**
 * @file
 * This file contains the different menu callbacks used by Tadaa!.
 */

/**
 * AJAX callback that checks the status for the active environment.
 *
 * This will only get the overall status for modules and variables. There are
 * other functions that will get the status for individual modules and
 * variables.
 *
 * @see tadaa_check_module()
 * @see tadaa_check_variable()
 */
function tadaa_check_environment() {
  // Get the modules and variables, and create the default status array.
  $modules = tadaa_get_modules(TADAA_ENVIRONMENT);
  $variables = tadaa_get_variables(TADAA_ENVIRONMENT);
  $status = array(
    'modules' => TRUE,
    'variables' => TRUE,
  );
  
  // Check the modules.
  foreach ($modules as $module => $config) {
    if ($config !== module_exists($module)) {
      // We found a foulty module, update the status array and exit the loop.
      $status['modules'] = FALSE;
      break;
    }
  }
  
  // Check the variables.
  foreach ($variables as $variable => $value) {
    if ($value !== variable_get($variable)) {
      // We found a foulty variable, update the status array and exit the loop.
      $status['variables'] = FALSE;
      break;
    }
  }
  
  drupal_json_output($status);
}

/**
 * AJAX callback that checks the status of an individual module.
 *
 * @param $module
 *  A string with the name of the module that we wish to check.
 */
function tadaa_check_module($module) {
  // Get every module.
  $modules = tadaa_get_modules(TADAA_ENVIRONMENT);
  
  // Return the status of this module.
  $status = array(
    'module' => $module,
    'config' => $modules[$module],
    'status' => $modules[$module] == module_exists($module),
  );
  drupal_json_output($status);
}

/**
 * AJAX callback that checks the status of an individual variable.
 *
 * @param $variable
 *  A string with the name of the variable that we wish to check.
 */
function tadaa_check_variable($variable) {
  // Get variables for the active environment.
  $variables = tadaa_get_variables(TADAA_ENVIRONMENT);
  
  // Return the status of this variable.
  $status = array(
    'variable' => $variable,
    'config' => $variables[$variable],
    'status' => $variables[$variable] == variable_get($variable, FALSE),
  );
  drupal_json_output($status);
}
