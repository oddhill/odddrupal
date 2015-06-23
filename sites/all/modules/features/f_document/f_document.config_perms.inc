<?php
/**
 * @file
 * f_document.config_perms.inc
 */

/**
 * Implements hook_config_perms().
 */
function f_document_config_perms() {
  $export = array();

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'document_admin';
  $config_perms->status = TRUE;
  $config_perms->name = 'document admin';
  $config_perms->path = array(
    0 => 'dokument/admin',
  );
  $export['document_admin'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'document_log';
  $config_perms->status = TRUE;
  $config_perms->name = 'document log';
  $config_perms->path = array(
    0 => 'dokument/log',
  );
  $export['document_log'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'document_read_per_document';
  $config_perms->status = TRUE;
  $config_perms->name = 'document read per document';
  $config_perms->path = array(
    0 => 'dokument/read_doc',
  );
  $export['document_read_per_document'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'document_read_per_user';
  $config_perms->status = TRUE;
  $config_perms->name = 'document read per user';
  $config_perms->path = array(
    0 => 'dokument/read_user',
  );
  $export['document_read_per_user'] = $config_perms;

  return $export;
}
