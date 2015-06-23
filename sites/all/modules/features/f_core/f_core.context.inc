<?php
/**
 * @file
 * f_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'anonymous';
  $context->description = 'When user is not logged in';
  $context->tag = 'core';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-messages' => array(
          'module' => 'blockify',
          'delta' => 'blockify-messages',
          'region' => 'content',
          'weight' => '-10',
        ),
        'blockify-blockify-logo' => array(
          'module' => 'blockify',
          'delta' => 'blockify-logo',
          'region' => 'content',
          'weight' => '-9',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'sedermera-theme',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('When user is not logged in');
  t('core');
  $export['anonymous'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dashboard';
  $context->description = 'Used by the dashboard (front page).';
  $context->tag = 'core';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-capital_raisings-dashboard' => array(
          'module' => 'views',
          'delta' => 'capital_raisings-dashboard',
          'region' => 'content',
          'weight' => '-10',
        ),
        'sedermera_dashboard-verifications' => array(
          'module' => 'sedermera_dashboard',
          'delta' => 'verifications',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-aktiviteter-dashboard' => array(
          'module' => 'views',
          'delta' => 'aktiviteter-dashboard',
          'region' => 'sidebar-second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Used by the dashboard (front page).');
  t('core');
  $export['dashboard'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Used when the Sedermera theme is active.';
  $context->tag = 'core';
  $context->conditions = array(
    'theme' => array(
      'values' => array(
        'sedermera' => 'sedermera',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-logo' => array(
          'module' => 'blockify',
          'delta' => 'blockify-logo',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-9',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'header',
          'weight' => '-8',
        ),
        'blockify-blockify-tabs' => array(
          'module' => 'blockify',
          'delta' => 'blockify-tabs',
          'region' => 'content',
          'weight' => '-14',
        ),
        'blockify-blockify-messages' => array(
          'module' => 'blockify',
          'delta' => 'blockify-messages',
          'region' => 'page-head',
          'weight' => '-10',
        ),
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'page-head',
          'weight' => '-9',
        ),
        'blockify-blockify-actions' => array(
          'module' => 'blockify',
          'delta' => 'blockify-actions',
          'region' => 'page-head',
          'weight' => '-8',
        ),
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'page-head',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'sedermera-theme',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Used when the Sedermera theme is active.');
  t('core');
  $export['sitewide'] = $context;

  return $export;
}
