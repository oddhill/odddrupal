<?php
/**
 * @file
 * f_capital_raising.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_capital_raising_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_capital_raising_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_capital_raising_node_info() {
  $items = array(
    'capital_raising' => array(
      'name' => t('Kapitalanskaffning'),
      'base' => 'node_content',
      'description' => t('Kapitalanskaffningar utgör navet för webbplatsen. Dessa knyts till ett bolag, och innehåller all information som är relevant för kapitalanskaffningen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
