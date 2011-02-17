<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function odd_drupal_fancybox_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function odd_drupal_fancybox_settings_imagecache_default_presets() {
  $items = array(
    'fancybox_big' => array(
      'presetname' => 'fancybox_big',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '800',
            'height' => '600',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}
