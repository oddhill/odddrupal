<?php

/**
 * @file
 * Administration page callbacks for the Fancybox module.
 */

/**
 * Display the Fancybox settings form.
 */
function fancybox_admin_settings_form($form_state) {
  $form = array();

  if ($files = variable_get('fancybox_files', NULL)) {
    // Check if detected files changed
    $detected_files = _detect_fancybox_files();
    if ($files['js'] != $detected_files['js'] || $files['css'] != $detected_files['css']) {
      _set_fancybox_files();
    }

    $form['fancybox_files'] = array(
      '#prefix' => '<div class="messages status">',
      '#suffix' => '</div>',
      '#markup' => t('Plugin detected, using @js_file and @css_file', array('@js_file' => $detected_files['js'], '@css_file' => $detected_files['css']))
    );
  }
  else {
    _set_fancybox_files();
  }

  $settings = variable_get('fancybox_settings', array());

  $data = array();

  // Options:
  $data['options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Options'),
    '#tree' => TRUE,
  );
	$data['options'] += fancybox_options((!empty($settings['options']) ? $settings['options'] : array()));

  // Activation:
  $data['activation'] = array(
    '#type' => 'fieldset',
    '#title' => t('Activation'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $data['activation']['selector'] = array(
    '#type' => 'textarea',
    '#title' => t('jQuery selector'),
    '#default_value' => isset($settings['activation']['selector']) ? $settings['activation']['selector'] : '',
  );
  $data['activation']['activation_type'] = array(
    '#type' => 'radios',
    '#title' => t('Enable Fancybox on specific pages'),
    '#options' => array(
      'exclude' => t('Enable on every page except the listed pages.'),
      'include' => t('Enable on only the listed pages.'),
    ),
    '#default_value' => isset($settings['activation']['activation_type']) ? $settings['activation']['activation_type'] : 'exclude',
  );
  if (user_access('use PHP for block visibility')) {
    $data['activation']['activation_type']['#options']['php'] = t('Enable if the following PHP code returns <code>TRUE</code> (PHP-mode, experts only).');
  }
  $data['activation']['activation_pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Pages'),
    '#default_value' => isset($settings['activation']['activation_pages']) ? $settings['activation']['activation_pages'] : "admin*\nimg_assist*\nnode/add/*\nnode/*/edit",
    '#description' => t("Enter one page per line as Drupal paths. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>')),
  );

  // ImageField module:
  if (module_exists('image')) {
    $data['imagefield'] = array(
      '#type' => 'fieldset',
      '#title' => t('ImageField module'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $data['imagefield']['grouping'] = array(
      '#type' => 'radios',
      '#title' => t('Grouping'),
      '#options' => array(1 => t('Group per field'), 2 => t('Group all fields on page'), 0 => t('No grouping')),
      '#default_value' => isset($settings['imagefield']['grouping']) ? $settings['imagefield']['grouping'] : 1,
    );
  }

  $data['imagefield']['use_node_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use node title as caption'),
    '#description' => t('By default, the caption for image fields is the title text for the image. If no title is configured, the alt text will be used. Check this to always display the node title as the image caption.'),
    '#default_value' => isset($settings['imagefield']['use_node_title']) ? $settings['imagefield']['use_node_title'] : FALSE,
  );

  $form['data'] = $data;
  $form['data']['#tree'] = TRUE;

  $form['buttons']['submit'] = array('#type' => 'submit', '#value' => t('Save configuration') );
  $form['buttons']['reset'] = array('#type' => 'submit', '#value' => t('Reset to defaults') );

  return $form;
}

/**
 * Validation handler for the Fancybox settings form.
 */
function fancybox_admin_settings_form_validate($form, &$form_state) {
  $op = isset($form_state['values']['op']) ? $form_state['values']['op'] : '';
  if ($op == t('Reset to defaults')) {
    return; // Skip validation if Reseting to defaults
  }
}

/**
 * Submit handler for the Fancybox settings form.
 */
function fancybox_admin_settings_form_submit($form, &$form_state) {
  $op = isset($form_state['values']['op']) ? $form_state['values']['op'] : '';
  if ($op == t('Reset to defaults')) {
    variable_del('fancybox_settings');
    variable_del('fancybox_files');
    drupal_set_message(t('The configuration options have been reset to their default values.'));
  }
  else {
    _save_fancybox_settings($form_state);
    drupal_set_message(t('The configuration options have been saved.'));
  }
}

/**
 * Save settings into 'fancybox_settings' variable
 */
function _save_fancybox_settings($form_state) {
  // Cast strings to integers for properties that need strings
  $props_to_cast = array('width', 'height', 'margin', 'padding');
  foreach ($props_to_cast as $prop) {
    $form_state['values']['data']['options']['appearance'][$prop] = (int)$form_state['values']['data']['options']['appearance'][$prop];  
  }
  
  $props_to_cast = array('speedIn', 'speedOut', 'changeSpeed');
  foreach ($props_to_cast as $prop) {
    $form_state['values']['data']['options']['effects'][$prop] = (int)$form_state['values']['data']['options']['effects'][$prop];  
  }

  $form_state['values']['data']['options'] = fancybox_array_flatten($form_state['values']['data']['options']);
  variable_set('fancybox_settings', $form_state['values']['data']);  
}


/*****************************************************************************
 * HELPER FUNCTIONS
 *****************************************************************************/

/**
 * Flatten an array, preserving its keys.
 */
function fancybox_array_flatten($array) {
  $result = array();
  if (is_array($array)) {
    foreach ($array as $key => $value) {
      if (is_array($value)) {
        $result += fancybox_array_flatten($value);
      }
      else {
        $result[$key] = $value;
      }
    }
  }
  return $result;
}