<?php
/**
 * @file
 * This file contains the pages used by Tadaa!
 */

/**
 * Page callback for the module statuses.
 *
 * This will display a table with every module and the current status.
 */
function tadaa_module_status_page() {
  // The header for the table.
  $header = array(
    t('Module'),
    t('Current environment configuration'),
    t('Configuration status'),
    t('Real status'),
  );
  
  // Build one row per module.
  $rows = array();
  $modules = tadaa_get_modules(TADAA_ENVIRONMENT);
  foreach ($modules as $module => $configuration) {
    // Get the real module name.
    $module_info = drupal_parse_info_file(drupal_get_path('module', $module) . '/' . $module . '.info');
  	// Get the real status of the module.
  	$real_status = module_exists($module);
  	// Set human readable texts for the statuses.
  	$configuration_text = $configuration ? t('Enable') : t('Disable');
  	$configuration_status = $configuration === $real_status ? t('Correct') : t('Incorrect');
  	$real_status = $real_status ? t('Enabled') : t('Disabled');
  	// Build the row.
    $rows[] = array(
      $module_info['name'],
      $configuration_text,
      $configuration_status,
      $real_status,
    );
  }
  
  // Return a renderable table array.
  $table = array(
    '#type' => 'table',
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
  );
  
  return $table;
}

/**
 * Page callback for the variable statuses.
 *
 * This will display a table with every variable and the current status.
 */
function tadaa_variable_status_page() {
  // The header for the table.
  $header = array(
    t('Variable'),
    t('Current environment configuration'),
    t('Configuration status'),
    t('Real status'),
  );
  
  // Build one row per variable.
  $rows = array();
  $variables = tadaa_get_variables(TADAA_ENVIRONMENT);
  foreach ($variables as $variable => $configuration) {
    // Get the real variable value.
  	$real_value = variable_get($variable);
  	// Get the real value of the variable.
  	$configuration_status = $configuration === $real_value ? t('Correct') : t('Incorrect');
  	// Build the row.
    $rows[] = array(
      $variable,
      $configuration,
      $configuration_status,
      $real_value,
    );
  }
  
  // Return a renderable table array.
  $table = array(
    '#type' => 'table',
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
  );
  
  return $table;
}
