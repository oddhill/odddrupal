<?php

/**
 * @file
 * Production environment default configuration.
 *
 * To activate this feature, copy and rename it such that its path plus
 * filename is 'sites/example.com/settings.production.php', where
 * example.com is the name of your site.
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
