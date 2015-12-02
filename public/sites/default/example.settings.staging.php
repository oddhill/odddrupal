<?php

/**
 * @file
 * Staging environment default configuration.
 *
 * To activate this feature, copy and rename it such that its path plus
 * filename is 'sites/example.com/settings.staging.php', where example.com
 * is the name of your site.
 */

 /**
  * Database configuration.
  *
  * @see default.settings.php or settings.php for details on how to structure
  * the database settings.
  */
 $databases['default']['default'] = array(
   'database' => 'database',
   'username' => 'root',
   'password' => '',
   'prefix' => '',
   'host' => '127.0.0.1',
   'port' => '3306',
   'namespace' => 'Drupal\\Core\\Database\\Driver\\mysql',
   'driver' => 'mysql',
 );

/**
 * Show all error messages, with backtrace information.
 *
 * In case the error level could not be fetched from the database, as for
 * example the database connection failed, we rely only on this value.
 */
$config['system.logging']['error_level'] = 'verbose';

/**
 * Enable access to rebuild.php.
 *
 * This setting can be enabled to allow Drupal's php and database cached
 * storage to be cleared via the rebuild.php page. Access to this page can also
 * be gained by generating a query string from rebuild_token_calculator.sh and
 * using these parameters in a request to rebuild.php.
 */
$settings['rebuild_access'] = TRUE;
