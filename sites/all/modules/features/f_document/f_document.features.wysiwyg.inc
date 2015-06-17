<?php
/**
 * @file
 * f_document.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function f_document_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: document_html
  $profiles['document_html'] = array(
    'format' => 'document_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Image' => 1,
          'HorizontalRule' => 1,
          'Format' => 1,
          'Table' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'self',
      'css_path' => '%b%t/css/wysiwyg.css',
      'stylesSet' => '',
      'block_formats' => 'p,h1,h2,h3,h4,h5',
      'advanced__active_tab' => 'edit-css',
      'forcePasteAsPlainText' => 0,
    ),
  );

  return $profiles;
}
