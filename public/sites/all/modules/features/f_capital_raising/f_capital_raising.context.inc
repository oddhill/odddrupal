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
  $context->name = 'node_add_offer';
  $context->description = 'Used when adding a new offer.';
  $context->tag = 'node';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/add/offer' => 'node/add/offer',
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
          'weight' => '-9',
        ),
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'page-head',
          'weight' => '0',
        ),
        'msnf-msnf_step_data' => array(
          'module' => 'msnf',
          'delta' => 'msnf_step_data',
          'region' => 'page-head',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Used when adding a new offer.');
  t('node');
  $export['node_add_offer'] = $context;

  return $export;
}
