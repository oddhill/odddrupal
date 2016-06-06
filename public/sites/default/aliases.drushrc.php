<?php
/**
 * @file
 * Site aliases that are utilised by Drush.
 *
 * These aliases makes it possible to execute Drush on another site. By adding
 * the alias in the beginning of the command, the command will be executed on
 * the other site. E.g. drush @staging features.
 */

// Testing environment (Odd Server).
$aliases['testing'] = array(
  'uri' => 'http://portal-sedermera.oddserver.se',
  'root' => '/mnt/persist/www/portal-sedermera',
  'remote-host' => 'oddserver.se',
  'remote-user' => 'root',
  'command-specific' => array (
    'sql-sync' => array (
      'create-db' => TRUE,
    ),
  ),
);
