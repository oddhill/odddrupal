<?php
/**
 * @file
 * f_capital_raising.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function f_capital_raising_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-capital_raising-body'
  $field_instances['node-capital_raising-body'] = array(
    'bundle' => 'capital_raising',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Text',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-capital_raising-field_cap_rais_comp'
  $field_instances['node-capital_raising-field_cap_rais_comp'] = array(
    'bundle' => 'capital_raising',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ange för vilket bolag denna kapitalanskaffning tillhör.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'token_formatters',
        'settings' => array(
          'check_access' => 1,
          'link' => '',
          'text' => '[node:field_comp_logo:medium:render]',
        ),
        'type' => 'token_formatters_entity_reference',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cap_rais_comp',
    'ied_settings' => array(
      'display_fields' => 1,
    ),
    'label' => 'Bolag',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-capital_raising-field_cap_rais_date'
  $field_instances['node-capital_raising-field_cap_rais_date'] = array(
    'bundle' => 'capital_raising',
    'deleted' => 0,
    'description' => 'Ange mellan vilka datum denna kapitalanskaffning har sin teckningstid.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date_range_formatter',
        'settings' => array(
          'one_month' => 'j - {j} F Y',
          'several_months' => 'j F - {j} {F} Y',
          'several_years' => 'j F Y - {j} {F} {Y}',
          'single' => 'j F Y',
        ),
        'type' => 'date_range_without_time',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cap_rais_date',
    'label' => 'Teckningstid',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-capital_raising-field_cap_rais_file'
  $field_instances['node-capital_raising-field_cap_rais_file'] = array(
    'bundle' => 'capital_raising',
    'deleted' => 0,
    'description' => 'Bifoga filer som är relevanta för denna kapitalanskaffning.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cap_rais_file',
    'label' => 'Filer',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'capital_raisings',
      'file_extensions' => 'pdf doc xls',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ange för vilket bolag denna kapitalanskaffning tillhör.');
  t('Ange mellan vilka datum denna kapitalanskaffning har sin teckningstid.');
  t('Bifoga filer som är relevanta för denna kapitalanskaffning.');
  t('Bolag');
  t('Filer');
  t('Teckningstid');
  t('Text');

  return $field_instances;
}
