<?php
/**
 * @file
 * Main PHP file for this theme.
 *
 * This will contain any hooks and custom functions that are being used for this
 * theme. It's also responsible for loading the preprocess.inc and theme.inc
 * files.
 */

/**
 * Implements hook_html_head_alter().
 */
function sedermera_html_head_alter(&$head_elements) {
  // Add a tag that disables the compatibility mode in IE.
  $head_elements['disable_compatibility_mode'] = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'http-equiv' => 'X-UA-Compatible',
      'content' => 'IE=Edge',
    ),
  );

  // Add the jQuery UI Widget library since it's required by selectBoxIt.
  $head_elements['#attached']['library'][] = array('system', 'ui.widget');
}

/**
 * Implements hook_css_alter().
 */
function sedermera_css_alter(&$css) {
  // Specify the CSS files that we want to exclude.
  $exclude = array(
    'misc/ui/jquery.ui.core.css',
    'misc/ui/jquery.ui.theme.css',
    'misc/ui/jquery.ui.resizable.css',
    'misc/ui/jquery.ui.button.css',
    'misc/ui/jquery.ui.dialog.css',
    'modules/system/system.menus.css',
    'modules/system/system.messages.css',
    'modules/system/system.theme.css',
    'modules/node/node.css',
    'modules/user/user.css',
    'modules/field/theme/field.css',
    'profiles/odddrupal/modules/contrib/ctools/css/ctools.css',
    'profiles/odddrupal/modules/contrib/date/date_api/date.css',
    'profiles/odddrupal/modules/contrib/logintoboggan/logintoboggan.css',
    'profiles/odddrupal/modules/contrib/views/css/views.css',
    'profiles/odddrupal/modules/contrib/boxes/boxes.css',
  );

  // Iterate through each excluded CSS file, and remove it from the loaded
  // files.
  foreach ($exclude as $file) {
    unset($css[$file]);
  }
}

/**
 * Implements hook_css_alter().
 */
function sedermera_js_alter(&$js) {
  // Specify the javascript files that we want to exclude.
  $exclude = array(
    'profiles/odddrupal/modules/contrib/views/js/jquery.ui.dialog.patch.js',
    'profiles/odddrupal/modules/contrib/boxes/boxes.js',
    'profiles/odddrupal/modules/contrib/context/plugins/context_reaction_block.js',
  );

  // Iterate through each excluded javascript file, and remove it from the
  // loaded files.
  foreach ($exclude as $file) {
    unset($js[$file]);
  }

  // Remove sticky headers since we don't want that on any table.
  if (isset($js['misc/tableheader.js'])) {
    unset($js['misc/tableheader.js']);
  }
}

// Include the preprocess and theme files. These includes preprocess
// implementations and theme overrides.
include_once 'preprocess.inc';
include_once 'theme.inc';

/**
 * Implements hook_wysiwyg_editor_settings_alter().
 */
function sedermera_wysiwyg_editor_settings_alter(&$settings, $context) {
  if ($context['profile']->editor == 'tinymce') {
    $settings['skin'] = 'light';
    $settings['menubar'] = 'edit insert format';
  }
}
