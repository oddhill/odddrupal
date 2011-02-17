<?php

/**
 * Implementation of hook_strongarm().
 */
function odd_drupal_fancybox_settings_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fancybox_path';
  $strongarm->value = 'profiles/odddrupal/libraries/fancybox';

  $export['fancybox_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fancybox_settings';
  $strongarm->value = array(
    'options' => array(
      'width' => '425',
      'height' => '355',
      'padding' => 10,
      'margin' => 20,
      'titleShow' => TRUE,
      'titlePosition' => 'outside',
      'scrolling' => 'auto',
      'showCloseButton' => 1,
      'showNavArrows' => 1,
      'cyclic' => 0,
      'opacity' => 0,
      'overlayShow' => 1,
      'overlayColor' => '#666',
      'overlayOpacity' => '0.3',
      'hideOnOverlayClick' => 1,
      'hideOnContentClick' => 1,
      'enableEscapeButton' => 1,
      'centerOnScroll' => 1,
      'autoScale' => TRUE,
      'easingIn' => 'swing',
      'easingOut' => 'swing',
      'changeFade' => 'fast',
      'changeSpeed' => 300,
      'transitionIn' => 'fade',
      'speedIn' => 300,
      'transitionOut' => 'fade',
      'speedOut' => 300,
      'onStart' => '',
      'onComplete' => '',
      'onClosed' => '',
      'onCleanup' => '',
      'onCancel' => '',
    ),
    'activation' => array(
      'selector' => '',
      'activation_type' => 'exclude',
      'activation_pages' => 'admin*
img_assist*
node/add/*
node/*/edit',
    ),
    'imagefield' => array(
      'grouping' => '1',
      'use_list_field' => 0,
      'imagecache_preset' => 'fancybox_big',
      'use_node_title' => 0,
    ),
  );

  $export['fancybox_settings'] = $strongarm;
  return $export;
}
