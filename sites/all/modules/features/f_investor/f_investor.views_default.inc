<?php
/**
 * @file
 * f_investor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_investor_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'investerare';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_investor';
  $view->human_name = 'Investerare';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Investerare';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'type' => 'type',
    'title' => 'title',
    'field_shared_address_locality' => 'field_shared_address_locality',
    'field_shared_address_country' => 'field_shared_address_locality',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
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
    'field_shared_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ', ',
      'empty_column' => 0,
    ),
    'field_shared_address_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Investerare: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Investerare: investor type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Investerare: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Namn';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'investor/[type]/[id]';
  /* Field: Investerare: Plats - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_shared_address_locality']['id'] = 'field_shared_address_locality';
  $handler->display->display_options['fields']['field_shared_address_locality']['table'] = 'field_data_field_shared_address';
  $handler->display->display_options['fields']['field_shared_address_locality']['field'] = 'field_shared_address_locality';
  $handler->display->display_options['fields']['field_shared_address_locality']['label'] = 'Plats';
  /* Field: Investerare: Plats - Country */
  $handler->display->display_options['fields']['field_shared_address_country']['id'] = 'field_shared_address_country';
  $handler->display->display_options['fields']['field_shared_address_country']['table'] = 'field_data_field_shared_address';
  $handler->display->display_options['fields']['field_shared_address_country']['field'] = 'field_shared_address_country';
  $handler->display->display_options['fields']['field_shared_address_country']['label'] = '';
  $handler->display->display_options['fields']['field_shared_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_address_country']['display_name'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'investerare';
  $handler->display->display_options['menu']['title'] = 'Alla investerare';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Investerare';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';
  $translatables['investerare'] = array(
    t('Master'),
    t('Investerare'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('.'),
    t('Namn'),
    t('Plats'),
    t('Page'),
  );
  $export['investerare'] = $view;

  return $export;
}
