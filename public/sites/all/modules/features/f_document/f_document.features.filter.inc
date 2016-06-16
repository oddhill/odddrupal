<?php
/**
 * @file
 * f_document.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function f_document_filter_default_formats() {
  $formats = array();

  // Exported format: Document HTML.
  $formats['document_html'] = array(
    'format' => 'document_html',
    'name' => 'Document HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
