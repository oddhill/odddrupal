<?php
/**
 * @file
 * f_core.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function f_core_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <h2> <h3> <h4> <br> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'spamspan' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
