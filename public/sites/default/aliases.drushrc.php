<?php
/**
 * @file
 * Site aliases that are utilised by Drush.
 *
 * These aliases makes it possible to execute Drush on another site. By adding
 * the alias in the beginning of the command, the command will be executed on
 * the other site. E.g. drush @staging features.
 */

/**
 * An alias for the staging site.
 *
 * This should point to the site on Odd Server, for any normal circumstances.
 */
$aliases['staging'] = array(
  'uri' => 'http://intranat-sedermera.oddserver.se',
  'root' => '/mnt/persist/www/intranat-sedermera',
  'remote-host' => 'oddserver.se',
  'remote-user' => 'root',
  'command-specific' => array (
    'sql-sync' => array (
      'create-db' => TRUE,
    ),
  ),
);

/**
 * An alias for the production site.
 */
$aliases['production'] = array(
  'uri' => 'http://176.58.107.201',
  'root' => '/mnt/persist/www/docroot',
  'remote-host' => '176.58.107.201',
  'remote-user' => 'root',
  'command-specific' => array (
    'sql-sync' => array (
      'create-db' => TRUE,
    ),
  ),
);
