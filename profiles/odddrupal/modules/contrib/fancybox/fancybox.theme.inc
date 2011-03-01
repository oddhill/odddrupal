<?php

/**
 * @file
 * Theme functions for Fancybox module.
 */


/**
 * Theme ImageCache + Imagefield CCK field formatter.
 */
function theme_fancybox_formatter_imagefield($element) {
  if (module_exists('imagecache') && module_exists('imagefield')) {
    $node = node_load($element['#item']['nid']);
    return fancybox_imagefield_image_imagecache($element['#field_name'], $element['#item'], $element['#formatter'], $node);
  }
}

/**
 * Theme ImageCache + Imagefield CCK field.
 */
function theme_imagefield_image_imagecache_fancybox($namespace, $field, $path, $title = '', $loop = '', $attributes = NULL) {
  if (!empty($path)) {
    $image = theme('imagecache', $namespace, $path, $title, $title, $attributes);

    $settings = variable_get('fancybox_settings', array());

    if ($presetname = $settings['imagefield']['imagecache_preset']) {
      $link_path = imagecache_create_url($presetname, $path);
    }
    else {
      $link_path = file_create_url($path);
    }

    $options = array(
      'html' => TRUE,
      'attributes' => array(
        'title' => $title,
        'class' => "imagefield-fancybox",
      )
    );
    if ($loop) {
      $options['attributes']['rel'] = 'imagefield-fancybox-'. $loop;
    }

    return l($image, $link_path, $options);
  }
}

/**
 * Generate the HTML output to open a emvideo field in fancybox.
 * Use the generic modal output from emvideo.
 *
 * Note: if you are implementing a custom AJAX callback make sure that
 * you wrap the output into a div where you set its dimensions, fancybox sometimes
 * fails to detect the size of the embedded video if its wrapped into multiple divs.
 *
 * @param $field
 *   The CCK field the action is being performed on.
 * @param $item
 *   An array, keyed by column, of the data stored for this item in this field.
 * @param $formatter
 *   The formatter to use for the field.
 * @param $node
 *   The node object.
 * @return
 *   Themed modal dialogue of the embedded media field video.
 */
function theme_fancybox_emvideo($field, $item, $formatter, $node) {
  return theme('emvideo_modal_generic', $field, $item, $formatter, $node, array('modal' => 'fancybox'));
}

/**
 * CCK formatter theme for the emfield. This will call theme_fancybox_emvideo.
 *
 * @param $element
 *   The CCK field element.
 * @return
 *   HTML output for displaying the video and link.
 */
function theme_fancybox_formatter_emvideo_fancybox_video($element) {
  $field = content_fields($element['#field_name'], $element['#type_name']);
  $item = $element['#item'];
  $formatter = "emvideo";
  $node = node_load($element['#node']->nid);
  return module_invoke('emfield', 'emfield_field_formatter', $field, $item, $formatter, $node, 'fancybox');
}
