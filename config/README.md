# Configuration

This folder contains the sites configuration exported as files if it has been exported.

The files in this directory is not the active configuration and these files needs to be imported trough the Drupal's configuration management interface to take effect.

Files in this directory should not be directly edited.

## Importing/exporting configuration

Managing configuration is easily managed trough the terminal, below is a description of the most usefull commands when importing and exporting configuration.


Command               | Description
----------------------|------------
`drush config-import` | Imports configuration from the config directory.
`drush config-export` | Exports the configuration in the database to the config directory.
