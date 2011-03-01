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

  // Fancybox path:
  $form['fancybox_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path to Fancybox jQuery plugin'),
    '#default_value' => variable_get('fancybox_path', FANCYBOX_DEFAULT_PATH),
    '#description' => t('Enter the location of the <a href="!url" target="_blank">Fancybox jQuery Plugin</a>. It is recommended to use %path.', array('!url' => 'http://fancybox.net/', '%path' => FANCYBOX_DEFAULT_PATH)),
  );

  if ($files = variable_get('fancybox_files', NULL)) {
    $form['fancybox_files'] = array(
      '#prefix' => '<div class="messages status">',
      '#suffix' => '</div>',
      '#value' => t('Plugin detected, using @js_file and @css_file', array('@js_file' => $files['js'], '@css_file' => $files['css']))
    );
  }

  $settings = variable_get('fancybox_settings', array());

  $data = array();

  // Options:
  $data['options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Options'),
    '#tree' => TRUE,
  );
  $data['options'] += fancybox_options($settings['options']);

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
    '#description' => t('Enter each selector on a separate line.'),
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

  // Image module:
  if (module_exists('image')) {
    $data['image'] = array(
      '#type' => 'fieldset',
      '#title' => t('Image module'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $data['image']['status'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable Fancybox on Image nodes'),
      '#default_value' => isset($settings['image']['auto']) ? $settings['image']['auto'] : FALSE,
    );

    $options = array();
    $sizes = image_get_sizes();
    foreach ($sizes as $label => $size) {
      $options[$label] = $size['label'];
    }

    $data['image']['size'] = array(
      '#type' => 'select',
      '#title' => t('Display size'),
      '#options' => $options,
      '#default_value' => isset($settings['image']['size']) ? $settings['image']['size'] : '_original',
      '#description' => t('The size to be used when displaying an image in a Fancybox.'),
    );
  }

  // ImageField module:
  if (module_exists('imagefield')) {
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

    $data['imagefield']['use_list_field'] = array(
      '#type' => 'checkbox',
      '#title' => t('Show only listed images'),
      '#description' => t('By default, Fancybox will display all the images. Check this to show only images marked listed.'),
      '#default_value' => isset($settings['imagefield']['use_list_field']) ? $settings['imagefield']['use_list_field'] : FALSE,
    );

    // ImageCache module:
    if (module_exists('imagecache')) {
      $options = array(0 => t('Original image (no preset)'));
      foreach (imagecache_presets() as $preset) {
        $options[$preset['presetname']] = $preset['presetname'];
      }
      $data['imagefield']['imagecache_preset'] = array(
        '#type' => 'select',
        '#title' => t('ImageCache preset'),
        '#options' => $options,
        '#default_value' => isset($settings['imagefield']['imagecache_preset']) ? $settings['imagefield']['imagecache_preset'] : 0,
        '#description' => t('The ImageCache preset to be use when displaying ImageField images in Fancybox.'),
      );
    }

    $data['imagefield']['use_node_title'] = array(
      '#type' => 'checkbox',
      '#title' => t('Use node title as caption'),
      '#description' => t('By default, the caption for image fields is the title text for the image. If no title is configured, the alt text will be used. Check this to always display the node title as the image caption.'),
      '#default_value' => isset($settings['imagefield']['use_node_title']) ? $settings['imagefield']['use_node_title'] : FALSE,
    );
  }

  $form['data'] = $data;
  $form['data']['#tree'] = TRUE;

  $form['buttons']['submit'] = array('#type' => 'submit', '#value' => t('Save configuration') );
  $form['buttons']['reset'] = array('#type' => 'submit', '#value' => t('Reset to defaults') );

  return $form;
}

/**
 * Fetect needed script and stylesheet in specified path
 */
function _detect_fancybox_files($path) {
  $js_files = glob(getcwd() . DIRECTORY_SEPARATOR . $path .  DIRECTORY_SEPARATOR . 'jquery.fancybox-*.js');
  $css_files = glob(getcwd() . DIRECTORY_SEPARATOR . $path .  DIRECTORY_SEPARATOR . 'jquery.*.css');

  $files = array(
    'js' => basename(array_shift($js_files)),
    'css' => basename(array_shift($css_files)),
  );

  return $files;
}

/**
 * Validation handler for the Fancybox settings form.
 */
function fancybox_admin_settings_form_validate($form, &$form_state) {

  $op = isset($form_state['values']['op']) ? $form_state['values']['op'] : '';
  if ($op == t('Reset to defaults')) {
    return; // Skip validation if Reseting to defaults
  }

	// Check minimal jQuery version, need at leat 1.3.x
  $jquery_version = jquery_update_get_version();
	if (version_compare($jquery_version, '1.3.0') <= 0) {
    form_error($form, t('Fancybox requires jQuery 1.3+, found @version',array('@version' => $jquery_version)));
	}

  // Check fancybox_path for .js files.
  $path =  rtrim($form_state['values']['fancybox_path'], '/ ');
  $files = _detect_fancybox_files($path);

  if (empty($files['js']) || empty($files['css'])) {
    form_set_error('fancybox_path', t('No Fancybox plugin found in @path',array('@path' => $path)));
  }
}

/**
 * Submit handler for the Fancybox settings form.
 */
function fancybox_admin_settings_form_submit($form, &$form_state) {
  $op = isset($form_state['values']['op']) ? $form_state['values']['op'] : '';
  if ($op == t('Reset to defaults')) {
    variable_del('fancybox_settings');
    variable_del('fancybox_path');
    variable_del('fancybox_files');
    drupal_set_message(t('The configuration options have been reset to their default values.'));
  }
  else {

    // Remove trailing slash from path
    $path =  rtrim($form_state['values']['fancybox_path'], '/ ');

    variable_set('fancybox_path', $path);
    variable_set('fancybox_files', _detect_fancybox_files($path));

    _save_fancybox_settings($form_state);

    drupal_set_message(t('The configuration options have been saved.'));
  }
}

/**
 * Save settings into 'fancybox_settings' variable
 */
function _save_fancybox_settings($form_state) {

    // Cast strings to integers for properties that need strings
    $props_to_cast = array('margin', 'padding');
    foreach ($props_to_cast as $prop) {
      $form_state['values']['data']['options']['appearance'][$prop] = (int)$form_state['values']['data']['options']['appearance'][$prop];
    }

    $props_to_cast = array('titleShow', 'autoScale');
    foreach ($props_to_cast as $prop) {
      $form_state['values']['data']['options']['appearance'][$prop] = (boolean)$form_state['values']['data']['options']['appearance'][$prop];
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
