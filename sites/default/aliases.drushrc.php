<?php
/**
 * Site aliases that are utilised by Drush.
 */

// The staging site.
$aliases['staging'] = array(
  'uri' => 'http://SITE.oddserver.se',
  'root' => '/var/www/SITE',
  'remote-host' => 'oddserver.se',
  'remote-user' => 'admin',
  'command-specific' => array (
    'sql-sync' => array (
      'create-db' => TRUE,
    ),
  ),
);