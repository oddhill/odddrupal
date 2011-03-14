<?php
/**
 * @file
 *  Includes the page callbacks.
 */


/**
 * Sets the new environment when the user selects
 * a new one.
 */
function tadaa_set_environment($environment) {
  if ($environment) {
    $modules = tadaa_get_modules($environment);
    
    // Build arrays of the modules that should be
    // disabled/enabled.
    $enable = array();
    $disable = array();
    foreach ($modules as $module => $state) {
      if ($state) {
        $enable[] = $module;
      }
      else {
        $disable[] = $module;
      }
    }
    module_enable($enable);
    module_disable($disable);
    
    // Set the variables.
    $variables = tadaa_get_variables($environment);
    foreach ($variables as $variable => $value) {
      variable_set($variable, $value);
    }
    
    variable_set('tadaa_environment', $environment);
    return drupal_json(array('environment' => $environment, 'modules' => $modules, 'variables' => $variables));
  }
  
  return drupal_json(FALSE);
}

/**
 * Checks the state for the selected environment.
 */
function tadaa_check_environment() {
  $modules = tadaa_get_modules();
  $variables = tadaa_get_variables();
  $return = array(
    'modules' => TRUE,
    'variables' => TRUE,
  );
  
  // Check the modules.
  foreach ($modules as $module => $config) {
    $state = $config === module_exists($module);
    if (!$state) {
      $return['modules'] = FALSE;
      break;
    }
  }
  
  // Check the variables.
  foreach ($variables as $variable => $value) {
    $state = $value === variable_get($variable, '');
    if (!$state) {
      $return['variables'] = FALSE;
      break;
    }
  }
  
  return drupal_json($return);
}

/**
 * Checks the state for individual modules.
 */
function tadaa_check_module($module) {
  $modules = tadaa_get_modules();
  
  $status = array(
    'module' => $module,
    'config' => $modules[$module],
    'state' => $modules[$module] === module_exists($module),
  );
  
  drupal_json($status);
}

/**
 * Checks the state for individual variables.
 */
function tadaa_check_variable($variable) {
  $variables = tadaa_get_variables();
  
  $status = array(
    'variable' => $variable,
    'config' => $variables[$variable],
    'state' => $variables[$variable] === variable_get($variable, FALSE),
  );
  
  drupal_json($status);
}

/**
 * Configure reroute email to use a new address.
 */
function tadaa_set_mail($mail) {
  variable_set('reroute_email_address', $mail);
}