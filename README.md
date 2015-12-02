# Drupal, by Odd Hill AB

Complete Drupal 8 package that contains custom installation profiles that are used by [Odd Hill](http://www.oddhill.se/).

## What you need

To use this starter package you must have a configured web server that meets the Drupal 8 minimum requirements. [Drupal requirements](https://www.drupal.org/requirements).

You must also have [composer](https://getcomposer.org/) installed.

## Getting started

To create a new project using the Odd Drupal package do the following steps:

1. Download the repository as a ZIP file or clone it with Git.
2. Open the terminal and browse to where you put the files and to a `composer install`. This should install everything required to set up a new site.
3. Go to the `public/sites/default` folder and duplicate the `example.settings.environment.php` file where **environment** is the environment you are currently working in. When you first set up a site this is most likely the `development` environment file.
4. Rename the duplicated environment file and remove the `example` part.
5. Open the renamed file and configure the settings for the database connection. If you are using something other then MySQL see the `default.settings.php` file for details on how to format the connection details.
6. Open any web browser and navigate to the `core/install.php` page of the site (we assume you have a web server up and running that has been configured). This should present you with the Drupal installation wizard.

## Requiring dependencies

All site specific dependencies should be added to the composer-site.json file.

The default composer.json file is dedicated to the Odd Drupal package and should not be modified to allow for easier upgrades to newer versions of the package.

### Modules, profiles and themes

Site specific dependencies on modules, profiles and themes should be defined in the composer-site.json file. All available dependencies can be found at the Drupal specific [Packagist](https://packagist.drupal-composer.org).

### PHP packages

Packages from the regular [Packagist](https://packagist.org/) can also be required with the composer-site.json file.

## Based on

This package is based on the Drupal composer template available for download on their [project page on Github](https://github.com/drupal-composer/drupal-project). More detailed information on how some parts of this package works can be found in their readme file.
