<?php
/**
 * @file
 * f_document.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_document_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__document_view';
  $strongarm->value = array(
    'view_modes' => array(
      'dashboard' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msg_capital_raising' => array(
        'custom_settings' => FALSE,
      ),
      'msg_investor' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'dashboard' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__document_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__document';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
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
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '12',
        ),
        'path' => array(
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '1',
        ),
        'additional_settings' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_document';
  $strongarm->value = '0';
  $export['language_content_type_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_document';
  $strongarm->value = array();
  $export['menu_options_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_document';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_document';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'revision_moderation',
  );
  $export['node_options_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_document';
  $strongarm->value = '0';
  $export['node_preview_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_document';
  $strongarm->value = 0;
  $export['node_submitted_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_document';
  $strongarm->value = 1;
  $export['node_view_permissions_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_dpi';
  $strongarm->value = '96';
  $export['pdf_using_mpdf_dpi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_img_dpi';
  $strongarm->value = '96';
  $export['pdf_using_mpdf_img_dpi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_margin_bottom';
  $strongarm->value = '16';
  $export['pdf_using_mpdf_margin_bottom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_margin_footer';
  $strongarm->value = '9';
  $export['pdf_using_mpdf_margin_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_margin_header';
  $strongarm->value = '9';
  $export['pdf_using_mpdf_margin_header'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_margin_left';
  $strongarm->value = '15';
  $export['pdf_using_mpdf_margin_left'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_margin_right';
  $strongarm->value = '15';
  $export['pdf_using_mpdf_margin_right'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_margin_top';
  $strongarm->value = '16';
  $export['pdf_using_mpdf_margin_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_css_file';
  $strongarm->value = '';
  $export['pdf_using_mpdf_pdf_css_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_default_font';
  $strongarm->value = 'DejaVuSerif';
  $export['pdf_using_mpdf_pdf_default_font'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_filename';
  $strongarm->value = '[site:name] - [node:title] - [node:changed:custom:Y-m-d]';
  $export['pdf_using_mpdf_pdf_filename'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_font_size';
  $strongarm->value = '10';
  $export['pdf_using_mpdf_pdf_font_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_footer';
  $strongarm->value = '';
  $export['pdf_using_mpdf_pdf_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_header';
  $strongarm->value = '';
  $export['pdf_using_mpdf_pdf_header'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_page_size';
  $strongarm->value = 'A4';
  $export['pdf_using_mpdf_pdf_page_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_password';
  $strongarm->value = '';
  $export['pdf_using_mpdf_pdf_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_save_option';
  $strongarm->value = '1';
  $export['pdf_using_mpdf_pdf_save_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_set_author';
  $strongarm->value = '';
  $export['pdf_using_mpdf_pdf_set_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_set_creator';
  $strongarm->value = '';
  $export['pdf_using_mpdf_pdf_set_creator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_set_subject';
  $strongarm->value = '';
  $export['pdf_using_mpdf_pdf_set_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_set_title';
  $strongarm->value = '';
  $export['pdf_using_mpdf_pdf_set_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_pdf_watermark_text';
  $strongarm->value = '';
  $export['pdf_using_mpdf_pdf_watermark_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_type_capital_raising';
  $strongarm->value = 0;
  $export['pdf_using_mpdf_type_capital_raising'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_type_company';
  $strongarm->value = 0;
  $export['pdf_using_mpdf_type_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_type_document';
  $strongarm->value = 1;
  $export['pdf_using_mpdf_type_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_watermark_image';
  $strongarm->value = 0;
  $export['pdf_using_mpdf_watermark_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_watermark_opacity';
  $strongarm->value = '0.5';
  $export['pdf_using_mpdf_watermark_opacity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdf_using_mpdf_watermark_option';
  $strongarm->value = 'text';
  $export['pdf_using_mpdf_watermark_option'] = $strongarm;

  return $export;
}
