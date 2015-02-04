<?php
/**
 * @file
 * f_investor.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_investor_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entities_investor';
  $context->description = '';
  $context->tag = 'entities';
  $context->conditions = array(
    'entity' => array(
      'values' => array(
        'investor' => 'investor',
      ),
      'options' => array(
        'entity_form' => '0',
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
        'views-aktiviteter-investor' => array(
          'module' => 'views',
          'delta' => 'aktiviteter-investor',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('entities');
  $export['entities_investor'] = $context;

  return $export;
}
