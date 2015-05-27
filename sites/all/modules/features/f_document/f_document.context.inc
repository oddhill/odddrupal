<?php
/**
 * @file
 * f_document.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_document_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'read_all';
  $context->description = '';
  $context->tag = 'document_view';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dokument/lista' => 'dokument/lista',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'sedermera_document_view-read_all' => array(
          'module' => 'sedermera_document_view',
          'delta' => 'read_all',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('document_view');
  $export['read_all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'read_documents';
  $context->description = '';
  $context->tag = 'document_view';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dokument/read_doc' => 'dokument/read_doc',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'sedermera_document_view-read_per_doc' => array(
          'module' => 'sedermera_document_view',
          'delta' => 'read_per_doc',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('document_view');
  $export['read_documents'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'read_user';
  $context->description = '';
  $context->tag = 'document_view';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dokument/read_user' => 'dokument/read_user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'sedermera_document_view-read_per_user' => array(
          'module' => 'sedermera_document_view',
          'delta' => 'read_per_user',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('document_view');
  $export['read_user'] = $context;

  return $export;
}
