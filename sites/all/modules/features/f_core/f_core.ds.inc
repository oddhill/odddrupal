<?php
/**
 * @file
 * f_core.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function f_core_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'dashboard';
  $ds_view_mode->label = 'Dashboard';
  $ds_view_mode->entities = array(
    'message' => 'message',
  );
  $export['dashboard'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'mail';
  $ds_view_mode->label = 'E-post';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['mail'] = $ds_view_mode;

  return $export;
}
