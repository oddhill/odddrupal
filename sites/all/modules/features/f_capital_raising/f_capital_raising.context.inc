<?php
/**
 * @file
 * f_capital_raising.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_capital_raising_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_capital_raising';
  $context->description = '';
  $context->tag = 'node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'capital_raising' => 'capital_raising',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'offers:interest' => 'offers:interest',
        'offers:page' => 'offers:page',
        'offers:page_1' => 'offers:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'sedermera_offer-stock_remaining' => array(
          'module' => 'sedermera_offer',
          'delta' => 'stock_remaining',
          'region' => 'sidebar-second',
          'weight' => '-10',
        ),
        'sedermera_capital_raising-time_remaining' => array(
          'module' => 'sedermera_capital_raising',
          'delta' => 'time_remaining',
          'region' => 'sidebar-second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('node');
  $export['node_capital_raising'] = $context;

  return $export;
}
