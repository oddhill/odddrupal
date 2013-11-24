<?php
/**
 * @file
 * Contains the backup_migrate_filter_treadmill class.
 */

/**
 * Backup & Migrate filter class that handles Treadmill behaviors.
 */
class backup_migrate_filter_treadmill extends backup_migrate_filter {

  /**
   * Get the default settings for this filter.
   */
  function backup_settings_default() {
    return array(
      'treadmill_enabled' => FALSE,
      'treadmill_url' => 'http://kund:kund@',
      'treadmill_key' => variable_get('cron_key', 'drupal'),
    );
  }

  /**
   * Get the form for the settings for this filter.
   */
  function backup_settings_form($settings) {
    // Wrap everything in a fieldset.
    $form['treadmill'] = array(
      '#type' => 'fieldset',
      '#title' => t('Treadmill options'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );

    // Enable Treadmill.
    $form['treadmill']['treadmill_enabled'] = array(
      '#type' => 'checkbox',
      '#title' => 'Enable Treadmill',
      '#default_value' => $settings['treadmill_enabled'],
      '#description' => t('Treadmill will perform various automated tasks for the destination when performing a backup.'),
    );

    // Destination URL.
    $form['treadmill']['treadmill_url'] = array(
      '#type' => 'textfield',
      '#title' => 'Destination URL',
      '#description' => t('The full base url for the destination site including a trailing slash, e.g. %example.', array('%example' => 'http://example.oddserver.se/')),
      '#required' => TRUE,
      '#default_value' => $settings['treadmill_url'],
      '#states' => array(
        'visible' => array(
          'input:[name="filters[treadmill_enabled]"]' => array('checked' => TRUE),
        ),
      ),
    );

    // Destination access key.
    $form['treadmill']['treadmill_key'] = array(
      '#type' => 'textfield',
      '#title' => 'Access key',
      '#required' => TRUE,
      '#default_value' => $settings['treadmill_key'],
      '#states' => array(
        'visible' => array(
          'input:[name="filters[treadmill_enabled]"]' => array('checked' => TRUE),
        ),
      ),
    );

    return $form;
  }

  /**
   * Run filter before the backup is started.
   */
  function pre_backup($source, $file, $settings) {
    if (!$settings->filters['treadmill_enabled']) {
      // Treadmill is not enabled, exit.
      return;
    }

    // Build the URL and the base query.
    $url = $settings->filters['treadmill_url'];
    $query = array('key' => $settings->filters['treadmill_key']);

    // Send the names of each table that exists for this site as a POST.
    $options = array(
      'headers' => array('Content-Type' => 'application/x-www-form-urlencoded'),
      'method' => 'POST',
      'data' => drupal_http_build_query(array_keys(drupal_get_complete_schema())),
    );

    // Delete the tables that doesn't exist for this schema.
    $query['q'] = 'treadmill/system/delete-tables';
    drupal_http_request(url($url, array('query' => $query)), $options);
  }

  /**
   * Run filter after the backup was successful.
   */
  function backup_succeed($settings, $message, $params) {
    if (!$settings->filters['treadmill_enabled']) {
      // Treadmill is not enabled, exit.
      return;
    }

    // Build the URL and the base query.
    $url = $settings->filters['treadmill_url'];
    $query = array('key' => $settings->filters['treadmill_key']);

    // Perform the Features revert.
    $query['q'] = 'treadmill/features/revert';
    drupal_http_request(url($url, array('query' => $query)));

    // Perform the Tadaa! environment switch.
    $query['q'] = 'tadaa/environment/switch/staging';
    drupal_http_request(url($url, array('query' => $query)));

    // Perform the system update.
    $query['q'] = 'treadmill/system/update';
    drupal_http_request(url($url, array('query' => $query)));
  }

}
