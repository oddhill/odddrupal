<?php
/**
 * @file
 * This file contains configuration that we'll use across all sites. Mostly PHP
 * configuration, but also some Drupal related settings.
 */

/**
 * Drupal related settings.
 */
$update_free_access = FALSE;
$drupal_hash_salt = '';

/**
 * PHP settings.
 */
ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);
ini_set('error_reporting', E_ALL ^ E_NOTICE);

/**
 * Fast 404 settings.
 */
$conf['404_fast_paths_exclude'] = '/\/(?:styles)\//';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';

/**
 * Include the site specific settings file.
 */
require 'settings.site.php';

/**
 * Include the local settings file.
 */
require 'settings.local.php';