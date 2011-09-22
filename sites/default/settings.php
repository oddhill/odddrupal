<?php

/**
 * @file
 * This file contains configuration that we'll use
 * across all sites. Mostly PHP configurations,
 * but also some Drupal related settings.
 *
 * Detailed information and help can be found in the
 * default.settings.php file.
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
 * Include the local settings file.
 *
 * Do not remove this line, since it includes
 * settings related to this specific site.
 */
require 'settings.local.php';
