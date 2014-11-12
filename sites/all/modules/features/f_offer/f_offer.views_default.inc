<?php
/**
 * @file
 * f_offer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_offer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'offers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_offer';
  $view->human_name = 'Erbjudna';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Erbjudna';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'eck administer offer offer entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_offer_cap_rais_target_id']['id'] = 'field_offer_cap_rais_target_id';
  $handler->display->display_options['relationships']['field_offer_cap_rais_target_id']['table'] = 'field_data_field_offer_cap_rais';
  $handler->display->display_options['relationships']['field_offer_cap_rais_target_id']['field'] = 'field_offer_cap_rais_target_id';
  $handler->display->display_options['relationships']['field_offer_cap_rais_target_id']['label'] = 'Transaktion';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_offer_investor_target_id']['id'] = 'field_offer_investor_target_id';
  $handler->display->display_options['relationships']['field_offer_investor_target_id']['table'] = 'field_data_field_offer_investor';
  $handler->display->display_options['relationships']['field_offer_investor_target_id']['field'] = 'field_offer_investor_target_id';
  $handler->display->display_options['relationships']['field_offer_investor_target_id']['label'] = 'Investerare';
  /* Field: Investerare: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Namn';
  /* Field: Erbjudande: Status */
  $handler->display->display_options['fields']['field_offer_status']['id'] = 'field_offer_status';
  $handler->display->display_options['fields']['field_offer_status']['table'] = 'field_data_field_offer_status';
  $handler->display->display_options['fields']['field_offer_status']['field'] = 'field_offer_status';
  $handler->display->display_options['fields']['field_offer_status']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_status']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Erbjudande: Intresserad */
  $handler->display->display_options['fields']['field_offer_interested']['id'] = 'field_offer_interested';
  $handler->display->display_options['fields']['field_offer_interested']['table'] = 'field_data_field_offer_interested';
  $handler->display->display_options['fields']['field_offer_interested']['field'] = 'field_offer_interested';
  $handler->display->display_options['fields']['field_offer_interested']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_interested']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => 'Test',
    'fallback_format' => 'list_default',
  );
  /* Field: Erbjudande: Summa */
  $handler->display->display_options['fields']['field_offer_amount']['id'] = 'field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['table'] = 'field_data_field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['field'] = 'field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_amount']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'decimal_separator' => ',',
      'scale' => '2',
      'prefix_suffix' => 1,
    ),
  );
  /* Contextual filter: Erbjudande: Transaktion (field_offer_cap_rais) */
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['id'] = 'field_offer_cap_rais_target_id';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['table'] = 'field_data_field_offer_cap_rais';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['field'] = 'field_offer_cap_rais_target_id';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['title'] = '%1';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_offer_cap_rais_target_id']['validate_options']['types'] = array(
    'capital_raising' => 'capital_raising',
  );

  /* Display: Erbjudna */
  $handler = $view->new_display('page', 'Erbjudna', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_offer_status' => 'field_offer_status',
    'field_offer_interested' => 'field_offer_interested',
    'field_offer_amount' => 'field_offer_amount',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_interested' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/erbjudna';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Erbjudna';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Intressenter */
  $handler = $view->new_display('page', 'Intressenter', 'interest');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Intressenter';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'id' => 'id',
    'title' => 'title',
    'field_offer_amount' => 'field_offer_amount',
    'field_offer_signed' => 'field_offer_signed',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_signed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_offer_cap_rais_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Erbjudande: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_offer';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Investerare: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Namn';
  /* Field: Erbjudande: Tecknad */
  $handler->display->display_options['fields']['field_offer_signed']['id'] = 'field_offer_signed';
  $handler->display->display_options['fields']['field_offer_signed']['table'] = 'field_data_field_offer_signed';
  $handler->display->display_options['fields']['field_offer_signed']['field'] = 'field_offer_signed';
  $handler->display->display_options['fields']['field_offer_signed']['label'] = 'Teckning';
  $handler->display->display_options['fields']['field_offer_signed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offer_signed']['alter']['text'] = 'Tecknad';
  $handler->display->display_options['fields']['field_offer_signed']['empty'] = '<a href="[path]/intressenter/[id]/teckna">Teckna</a>';
  $handler->display->display_options['fields']['field_offer_signed']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Erbjudande: Intresserad (field_offer_interested) */
  $handler->display->display_options['filters']['field_offer_interested_value']['id'] = 'field_offer_interested_value';
  $handler->display->display_options['filters']['field_offer_interested_value']['table'] = 'field_data_field_offer_interested';
  $handler->display->display_options['filters']['field_offer_interested_value']['field'] = 'field_offer_interested_value';
  $handler->display->display_options['filters']['field_offer_interested_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'node/%/intressenter';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Intressenter';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['offers'] = array(
    t('Master'),
    t('Erbjudna'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Transaktion'),
    t('Investerare'),
    t('Namn'),
    t('Status'),
    t('Intresserad'),
    t('Summa'),
    t('All'),
    t('%1'),
    t('Intressenter'),
    t('.'),
    t('Teckning'),
    t('Tecknad'),
    t('<a href="[path]/intressenter/[id]/teckna">Teckna</a>'),
  );
  $export['offers'] = $view;

  return $export;
}
