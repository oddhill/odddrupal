<?php
/**
 * @file
 * f_verification.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_verification_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_kontrolluppgift_id';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_ctrl';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_kontrolluppgift';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_kontrolluppgift_id';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_kontrolluppgift_privat';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_ctrl';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_kontrolluppgift';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_kontrolluppgift_id';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_kontrolluppgift_privat';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_ctrl';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_kontrolluppgift';
  $strongarm->value = 1;
  $export['auto_entitylabel_php_node_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_kontrolluppgift_id';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_kontrolluppgift_privat';
  $strongarm->value = 1;
  $export['auto_entitylabel_php_node_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_kontrolluppgift_id';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_kontrolluppgift_id';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_kontrolluppgift_id';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_kontrolluppgift_id';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ctrl';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__kontrolluppgift';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'PDF' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'mail' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__kontrolluppgift_id';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__kontrolluppgift_privat';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'PDF' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'mail' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ctrl';
  $strongarm->value = '0';
  $export['language_content_type_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_kontrolluppgift';
  $strongarm->value = '0';
  $export['language_content_type_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_kontrolluppgift_id';
  $strongarm->value = '0';
  $export['language_content_type_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_kontrolluppgift_privat';
  $strongarm->value = '0';
  $export['language_content_type_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ctrl';
  $strongarm->value = array();
  $export['menu_options_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_kontrolluppgift';
  $strongarm->value = array();
  $export['menu_options_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_kontrolluppgift_id';
  $strongarm->value = array();
  $export['menu_options_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_kontrolluppgift_privat';
  $strongarm->value = array();
  $export['menu_options_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ctrl';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_kontrolluppgift';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_kontrolluppgift_id';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_kontrolluppgift_privat';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__kontrolluppgift';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__kontrolluppgift_id';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__kontrolluppgift_privat';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_kontrolluppgift';
  $strongarm->value = '0';
  $export['new_revisions_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_kontrolluppgift_id';
  $strongarm->value = '0';
  $export['new_revisions_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_kontrolluppgift_privat';
  $strongarm->value = '0';
  $export['new_revisions_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_kontrolluppgift';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    3 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    5 => array(
      'gid' => 9,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    6 => array(
      'gid' => 8,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    7 => array(
      'gid' => 10,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_kontrolluppgift_id';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_kontrolluppgift_privat';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    3 => array(
      'gid' => 5,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    4 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    5 => array(
      'gid' => 9,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    6 => array(
      'gid' => 8,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    7 => array(
      'gid' => 10,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ctrl';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kontrolluppgift';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
    2 => 'revision_moderation',
  );
  $export['node_options_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kontrolluppgift_id';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kontrolluppgift_privat';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
    2 => 'revision_moderation',
  );
  $export['node_options_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ctrl';
  $strongarm->value = '0';
  $export['node_preview_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_kontrolluppgift';
  $strongarm->value = '0';
  $export['node_preview_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_kontrolluppgift_id';
  $strongarm->value = '0';
  $export['node_preview_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_kontrolluppgift_privat';
  $strongarm->value = '0';
  $export['node_preview_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ctrl';
  $strongarm->value = 0;
  $export['node_submitted_ctrl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_kontrolluppgift';
  $strongarm->value = 0;
  $export['node_submitted_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_kontrolluppgift_id';
  $strongarm->value = 0;
  $export['node_submitted_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_kontrolluppgift_privat';
  $strongarm->value = 0;
  $export['node_submitted_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_kontrolluppgift';
  $strongarm->value = 1;
  $export['node_view_permissions_kontrolluppgift'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_kontrolluppgift_privat';
  $strongarm->value = 1;
  $export['node_view_permissions_kontrolluppgift_privat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_kontrolluppgift_id';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_kontrolluppgift_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_kontrolluppgift_id';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_kontrolluppgift_id'] = $strongarm;

  return $export;
}
