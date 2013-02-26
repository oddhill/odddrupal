<?php

/**
 * @file
 * This file contains site-specific configurations.
 */

/**
 * Database settings.
 *
 * Detailed information is found in the default.settings.php
 * file.
 */
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => 'database',
  'username' => 'root',
  'password' => '',
  'host' => 'dev',
);

/**
 * Configuration for Stage File Proxy.
 *
 * These settings should be enabled when the staging or production environment
 * exists. The stage_file_proxy_origin settings should always point to to
 * highest environment in the food chain, which means that it should point to
 * the production site if it exists, or the staging site if a production site
 * doesn't exist yet.
 *
 * Don't forget to remove the comments when you've configured this!
 */
#$conf['stage_file_proxy_origin'] = 'http://www.example.com';
#$conf['stage_file_proxy_hotlink'] = TRUE;