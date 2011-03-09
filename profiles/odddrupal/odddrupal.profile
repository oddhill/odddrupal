<?php

/**
 * Implementation of hook_profile_details().
 */
function odddrupal_profile_details() {
  return array(
    'name' => 'Odd Drupal',
    'description' => 'Custom Drupal profile by Odd Hill.',
    'old_short_name' => 'odddrupal_installer',
  );
}

/**
 * Implementation of hook_profile_modules(). <-- A comment.
 */
function odddrupal_profile_modules() {
  $modules = array(
     // Drupal core - required
    'block',
    'filter',
    'node',
    'system',
    'user',
    'block',
    // Drupal core - optional
    'help',
    'locale',
    'menu',
    'path',
    'dblog',
    'php',
    // Contrib modules
    'admin_menu', 
    'boxes', 
    'backup_migrate', 
    'better_formats', 
    'content', 'fieldgroup', 'text', 'optionwidgets', 
    'ctools', 'bulk_export', 
    'date_api', 'date_timezone', 'date',
    'devel', 'devel_generate',
    'drupalforfirebug',
    'epsacrop',
    'filefield', 'filefield_paths', 'imagefield', 'imagefield_tokens',
    'date',
    'context', 'context_ui', 'context_layouts',
    'date_api', 'date_timezone',
    'features',
    'diff',
    'imageapi', 'imageapi_gd', 'imagecache', 'imagecache_ui',
    'token',
    'rules',
    'rules_admin',
    'transliteration',
    'spamspan',
    'globalredirect',
    'logintoboggan',
    'path_redirect',
    'strongarm',
    'jquery_ui',
    'jquery_update',
    'vertical_tabs',
    'views', 'views_ui', 'views_customfield',
    'wysiwyg',
    'webform',
    'reroute_email',
    'exportables',
    'input_formats', 
    // Custom modules
    'wysiwyg_alter',
    // Custom Features, containing Odd Drupal general settings
    'odd_drupal',
    'odd_drupal_simplemenu_settings',
    'odd_drupal_fancybox_settings',
    'odd_drupal_externallinks_settings',
    'odd_drupal_adminhover_settings',
    'odd_drupal_sevenup_settings',
    'odd_drupal_themekey_settings',
    'odd_drupal_mimemail_settings',
    'odd_drupal_webform_settings',
    'odd_drupal_input_formats'
  );

  return $modules;
}

/**
 * Reimplementation of system_theme_data(). The core function's static cache
 * is populated during install prior to active install profile awareness.
 * This workaround makes enabling themes in profiles/[profile]/themes possible.
 */
function _odddrupal_system_theme_data() {
  global $profile;
  $profile = 'odddrupal';
 
  $themes = drupal_system_listing('\.info$', 'themes');
  $engines = drupal_system_listing('\.engine$', 'themes/engines');
 
  $defaults = system_theme_default();
 
  $sub_themes = array();
  foreach ($themes as $key => $theme) {
    $themes[$key]->info = drupal_parse_info_file($theme->filename) + $defaults;
 
    if (!empty($themes[$key]->info['base theme'])) {
      $sub_themes[] = $key;
    }
 
    $engine = $themes[$key]->info['engine'];
    if (isset($engines[$engine])) {
      $themes[$key]->owner = $engines[$engine]->filename;
      $themes[$key]->prefix = $engines[$engine]->name;
      $themes[$key]->template = TRUE;
    }
 
    // Give the stylesheets proper path information.
    $pathed_stylesheets = array();
    foreach ($themes[$key]->info['stylesheets'] as $media => $stylesheets) {
      foreach ($stylesheets as $stylesheet) {
        $pathed_stylesheets[$media][$stylesheet] = dirname($themes[$key]->filename) .'/'. $stylesheet;
      }
    }
    $themes[$key]->info['stylesheets'] = $pathed_stylesheets;
 
    // Give the scripts proper path information.
    $scripts = array();
    foreach ($themes[$key]->info['scripts'] as $script) {
      $scripts[$script] = dirname($themes[$key]->filename) .'/'. $script;
    }
    $themes[$key]->info['scripts'] = $scripts;
 
    // Give the screenshot proper path information.
    if (!empty($themes[$key]->info['screenshot'])) {
      $themes[$key]->info['screenshot'] = dirname($themes[$key]->filename) .'/'. $themes[$key]->info['screenshot'];
    }
  }
 
  foreach ($sub_themes as $key) {
    $themes[$key]->base_themes = system_find_base_themes($themes, $key);
    // Don't proceed if there was a problem with the root base theme.
    if (!current($themes[$key]->base_themes)) {
      continue;
    }
    $base_key = key($themes[$key]->base_themes);
    foreach (array_keys($themes[$key]->base_themes) as $base_theme) {
      $themes[$base_theme]->sub_themes[$key] = $themes[$key]->info['name'];
    }
    // Copy the 'owner' and 'engine' over if the top level theme uses a
    // theme engine.
    if (isset($themes[$base_key]->owner)) {
      if (isset($themes[$base_key]->info['engine'])) {
        $themes[$key]->info['engine'] = $themes[$base_key]->info['engine'];
        $themes[$key]->owner = $themes[$base_key]->owner;
        $themes[$key]->prefix = $themes[$base_key]->prefix;
      }
      else {
        $themes[$key]->prefix = $key;
      }
    }
  }
  // Extract current files from database.
  system_get_files_database($themes, 'theme');
  db_query("DELETE FROM {system} WHERE type = 'theme'");
  foreach ($themes as $theme) {
    $theme->owner = !isset($theme->owner) ? '' : $theme->owner;
    db_query("INSERT INTO {system} (name, owner, info, type, filename, status, throttle, bootstrap) VALUES ('%s', '%s', '%s', '%s', '%s', %d, %d, %d)", $theme->name, $theme->owner, serialize($theme->info), 'theme', $theme->filename, isset($theme->status) ? $theme->status : 0, 0, 0);
  }
}

/**
 * Implementation of hook_profile_tasks().
 */
function odddrupal_profile_tasks(&$task, $url) {

  // Clear caches.
  drupal_flush_all_caches();
 
  // Enable the right theme. This must be handled after drupal_flush_all_caches()
  // which rebuilds the system table based on a stale static cache,
  // blowing away our changes.
  _odddrupal_system_theme_data();
  db_query("UPDATE {system} SET status = 0 WHERE type = 'theme'");
  db_query("UPDATE {system} SET status = 1 WHERE type = 'theme' AND name = 'tao'");
  db_query("UPDATE {system} SET status = 1 WHERE type = 'theme' AND name = 'cube'");
  db_query("UPDATE {system} SET status = 1 WHERE type = 'theme' AND name = 'oddtao'");
  variable_set('theme_default', 'oddtao');
  variable_set('admin_theme', 'cube');
  variable_set('node_admin_theme', 1);
 
} 