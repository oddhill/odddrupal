<?php
/**
 * @file
 * f_company.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function f_company_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-company-field_comp_logo'
  $field_instances['node-company-field_comp_logo'] = array(
    'bundle' => 'company',
    'deleted' => 0,
    'description' => 'Ladda upp en logotyp för bolaget. Denna kommer presenteras i samband med utskicken av transaktioner.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comp_logo',
    'label' => 'Logotyp',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'companies',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ladda upp en logotyp för bolaget. Denna kommer presenteras i samband med utskicken av transaktioner.');
  t('Logotyp');

  return $field_instances;
}
