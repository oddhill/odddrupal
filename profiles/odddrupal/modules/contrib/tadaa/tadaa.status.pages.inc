<?php
/**
 * @file
 * This file contains the status pages used by Tadaa!
 */

/**
 * Page callback for the module statuses.
 *
 * This will display a table with every module and the current status.
 */
function tadaa_module_status_page() {
  // Load the environments.
  $environments = variable_get('tadaa_environments', array());
  if (count($environments) < 1) {
    // No environments has been added yet.
    return array(
      '#markup' => t('No environments has been added. Go to !page to add an environment.', array('!page' => l(t('this page'), 'admin/config/development/tadaa/configure/environments/add'))),
    );
  }

  // Verify that we have an active environment.
  if (!TADAA_ENVIRONMENT) {
    return array(
      '#markup' => t('No environment has been selected. Go to !page to activate an environment.', array('!page' => l(t('this page'), 'admin/config/development/tadaa/status/environments'))),
    );
  }

  // Load the modules.
  $modules = tadaa_get_modules(TADAA_ENVIRONMENT);
  if (count($modules) < 1) {
    // No environments has been added yet.
    return array(
      '#markup' => t('No modules has been configured yet. Go to !page to set up some modules.', array('!page' => l(t('this page'), 'admin/config/development/tadaa/configure/modules'))),
    );
  }

  // The header for the table.
  $header = array(
    '',
    t('Module'),
    t('Environment configuration'),
    t('Real status'),
    t('Operations'),
  );

  // Build one row per module.
  $rows = array();
  foreach ($modules as $module => $configuration) {
    // Get the real module name.
    $module_info = drupal_parse_info_file(drupal_get_path('module', $module) . '/' . $module . '.info');
  	// Get the real status of the module.
  	$real_status = module_exists($module);
  	// Get the path to the icon that we should use,
  	$status_icon = $configuration == $real_status ? 'misc/message-16-ok.png' : 'misc/message-16-error.png';
  	// Set human readable texts for the configuration.
  	$configuration_text = $configuration ? t('Enable') : t('Disable');
  	$real_status_text = $real_status ? t('Enabled') : t('Disabled');
  	// Build the row.
    $rows[] = array(
      theme('image', array('path' => $status_icon)),
      $module_info['name'],
      $configuration_text,
      $real_status_text,
      $configuration != $real_status ? l(t('Fix'), 'tadaa/module/' . $module . '/fix') : '',
    );
  }

  // Load the title for the current environment that we'll use as the caption.
  $environment_title = isset($environments[TADAA_ENVIRONMENT]) ? $environments[TADAA_ENVIRONMENT] : t('none');

  // Return a renderable table array.
  $table = array(
    '#type' => 'table',
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
    '#caption' => t('Current environment: @environment', array('@environment' => $environment_title)),
  );

  return $table;
}

/**
 * Page callback for the variable statuses.
 *
 * This will display a table with every variable and the current status.
 */
function tadaa_variable_status_page() {
  // Load the environments.
  $environments = variable_get('tadaa_environments', array());
  if (count($environments) < 1) {
    // No environments has been added yet.
    return array(
      '#markup' => t('No environments has been added. Go to !page to add an environment.', array('!page' => l(t('this page'), 'admin/config/development/tadaa/configure/environments/add'))),
    );
  }

  // Verify that we have an active environment.
  if (!TADAA_ENVIRONMENT) {
    return array(
      '#markup' => t('No environment has been selected. Go to !page to activate an environment.', array('!page' => l(t('this page'), 'admin/config/development/tadaa/status/environments'))),
    );
  }

  // Load the variables.
  $variables = tadaa_get_variables(TADAA_ENVIRONMENT);
  if (count($variables) < 1) {
    // No environments has been added yet.
    return array(
      '#markup' => t('No variables has been configured yet. Go to !page to set up some values.', array('!page' => l(t('this page'), 'admin/config/development/tadaa/configure/variables'))),
    );
  }

  // The header for the table.
  $header = array(
    '',
    t('Variable'),
    t('Environment configuration'),
    t('Real value'),
    t('Operations'),
  );

  // Build one row per variable.
  $rows = array();
  foreach ($variables as $variable => $configuration) {
    // Get the real variable value.
  	$real_value = variable_get($variable);
  	// Get the path to the icon that we should use,
  	$status_icon = $configuration == $real_value ? 'misc/message-16-ok.png' : 'misc/message-16-error.png';
  	// Build the row.
    $rows[] = array(
      theme('image', array('path' => $status_icon)),
      $variable,
      wordwrap(serialize($configuration), 45, '<br />', TRUE),
      wordwrap(serialize($real_value), 45, '<br />', TRUE),
      $configuration != $real_value ? l(t('Fix'), 'tadaa/variable/' . $variable . '/fix') : '',
    );
  }

  // Load the title for the current environment that we'll use as the caption.
  $environment_title = isset($environments[TADAA_ENVIRONMENT]) ? $environments[TADAA_ENVIRONMENT] : t('none');

  // Return a renderable table array.
  $table = array(
    '#type' => 'table',
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
    '#caption' => t('Current environment: @environment', array('@environment' => $environment_title)),
  );

  return $table;
}

/**
 * The form to switch environments.
 */
function tadaa_environment_status_form($form, &$form_state) {
  $environments = variable_get('tadaa_environments', array());

  if (count($environments) > 0) {
    $form['environment'] = array(
      '#type' => 'radios',
      '#title' => t('Select an environment'),
      '#options' => $environments,
      '#default_value' => TADAA_ENVIRONMENT,
      '#required' => TRUE,
      '#description' => 'To switch environment from outside the site, go to ' . url('tadaa/environment/switch/ENVIRONMENT_MACHINE_NAME', array('absolute' => TRUE, 'query' => array('key' => variable_get('cron_key', 'drupal')))) . '.',
    );
    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Switch'),
    );
  }
  else {
    $form['#prefix'] = t('No environments has been added. Go to !page to add an environment.', array('!page' => l(t('this page'), 'admin/config/development/tadaa/configure/environments/add')));
  }

  return $form;
}

/**
 * Form submission callback for the form that switches environments.
 *
 * This function will gather the modules that should be disabled and enabled,
 * and the variables that should be set. This will be executed through a batch
 * process.
 *
 * @see tadaa_batch_disable_modules().
 * @see tadaa_batch_enable_modules().
 * @see tadaa_batch_set_variables().
 * @see tadaa_batch_finish().
 */
function tadaa_environment_status_form_submit($form, &$form_state) {
  // Get the configured module and variables.
  $modules = tadaa_get_modules($form_state['values']['environment']);
  $variables = tadaa_get_variables($form_state['values']['environment']);

  // Build an array of modules to disable.
  $disable = array();
  foreach ($modules as $module => $status) {
    if (!$status) {
      $disable[] = $module;
    }
  }

  // Build an array of modules to enable.
  $enable = array();
  foreach ($modules as $module => $status) {
    if ($status) {
      $enable[] = $module;
    }
  }

  // Set up the operations.
  $operations = array();
  if (!empty($disable)) {
    $operations[] = array('tadaa_batch_disable_modules', array($disable));
  }
  if (!empty($enable)) {
    $operations[] = array('tadaa_batch_enable_modules', array($enable));
  }
  if (!empty($variables)) {
    $operations[] = array('tadaa_batch_set_variables', array($variables));
  }
  $operations[] = array('tadaa_batch_finish', array($form_state['values']['environment']));

  // Initiate the batch process.
  $environments = variable_get('tadaa_environments', array());
  $batch = array(
    'title' => t('Switching to %environment', array('%environment' => $environments[$form_state['values']['environment']])),
    'operations' => $operations,
    'finished' => 'tadaa_batch_finished',
  );
  batch_set($batch);
}