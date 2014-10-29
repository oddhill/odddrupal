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
  $view->name = 'investors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_investor';
  $view->human_name = 'Investerare';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alla investerare';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer investors';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrera listan';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_shared_address_postal_code' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_shared_address_locality' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_shared_address_country' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_shared_industries_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'type' => 'type',
    'title' => 'title',
    'field_shared_address_locality' => 'field_shared_address_locality',
    'field_shared_address_country' => 'field_shared_address_locality',
    'field_shared_cell' => 'field_shared_cell',
    'field_shared_phone' => 'field_shared_phone',
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
    'field_shared_cell' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shared_phone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Kunde inte hitta några investerare som matchade sökkriterierna.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Field: Investerare: Mobiltelefon */
  $handler->display->display_options['fields']['field_shared_cell']['id'] = 'field_shared_cell';
  $handler->display->display_options['fields']['field_shared_cell']['table'] = 'field_data_field_shared_cell';
  $handler->display->display_options['fields']['field_shared_cell']['field'] = 'field_shared_cell';
  /* Field: Investerare: Telefon */
  $handler->display->display_options['fields']['field_shared_phone']['id'] = 'field_shared_phone';
  $handler->display->display_options['fields']['field_shared_phone']['table'] = 'field_data_field_shared_phone';
  $handler->display->display_options['fields']['field_shared_phone']['field'] = 'field_shared_phone';
  /* Filter criterion: Investerare: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'eck_investor';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Namn';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Investerare: Plats - Postal code */
  $handler->display->display_options['filters']['field_shared_address_postal_code']['id'] = 'field_shared_address_postal_code';
  $handler->display->display_options['filters']['field_shared_address_postal_code']['table'] = 'field_data_field_shared_address';
  $handler->display->display_options['filters']['field_shared_address_postal_code']['field'] = 'field_shared_address_postal_code';
  $handler->display->display_options['filters']['field_shared_address_postal_code']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_address_postal_code']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_address_postal_code']['expose']['operator_id'] = 'field_shared_address_postal_code_op';
  $handler->display->display_options['filters']['field_shared_address_postal_code']['expose']['label'] = 'Postnummer';
  $handler->display->display_options['filters']['field_shared_address_postal_code']['expose']['operator'] = 'field_shared_address_postal_code_op';
  $handler->display->display_options['filters']['field_shared_address_postal_code']['expose']['identifier'] = 'postal';
  $handler->display->display_options['filters']['field_shared_address_postal_code']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Investerare: Plats - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_shared_address_locality']['id'] = 'field_shared_address_locality';
  $handler->display->display_options['filters']['field_shared_address_locality']['table'] = 'field_data_field_shared_address';
  $handler->display->display_options['filters']['field_shared_address_locality']['field'] = 'field_shared_address_locality';
  $handler->display->display_options['filters']['field_shared_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_shared_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_address_locality']['expose']['operator_id'] = 'field_shared_address_locality_op';
  $handler->display->display_options['filters']['field_shared_address_locality']['expose']['label'] = 'Ort';
  $handler->display->display_options['filters']['field_shared_address_locality']['expose']['operator'] = 'field_shared_address_locality_op';
  $handler->display->display_options['filters']['field_shared_address_locality']['expose']['identifier'] = 'city';
  $handler->display->display_options['filters']['field_shared_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Investerare: Plats - Country */
  $handler->display->display_options['filters']['field_shared_address_country']['id'] = 'field_shared_address_country';
  $handler->display->display_options['filters']['field_shared_address_country']['table'] = 'field_data_field_shared_address';
  $handler->display->display_options['filters']['field_shared_address_country']['field'] = 'field_shared_address_country';
  $handler->display->display_options['filters']['field_shared_address_country']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_address_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_address_country']['expose']['operator_id'] = 'field_shared_address_country_op';
  $handler->display->display_options['filters']['field_shared_address_country']['expose']['label'] = 'Land';
  $handler->display->display_options['filters']['field_shared_address_country']['expose']['operator'] = 'field_shared_address_country_op';
  $handler->display->display_options['filters']['field_shared_address_country']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['field_shared_address_country']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_shared_address_country']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Investerare: Branscher (field_shared_industries) */
  $handler->display->display_options['filters']['field_shared_industries_tid']['id'] = 'field_shared_industries_tid';
  $handler->display->display_options['filters']['field_shared_industries_tid']['table'] = 'field_data_field_shared_industries';
  $handler->display->display_options['filters']['field_shared_industries_tid']['field'] = 'field_shared_industries_tid';
  $handler->display->display_options['filters']['field_shared_industries_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_industries_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_industries_tid']['expose']['operator_id'] = 'field_shared_industries_tid_op';
  $handler->display->display_options['filters']['field_shared_industries_tid']['expose']['label'] = 'Branscher';
  $handler->display->display_options['filters']['field_shared_industries_tid']['expose']['operator'] = 'field_shared_industries_tid_op';
  $handler->display->display_options['filters']['field_shared_industries_tid']['expose']['identifier'] = 'industries';
  $handler->display->display_options['filters']['field_shared_industries_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_shared_industries_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_shared_industries_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_industries_tid']['vocabulary'] = 'industries';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Investerare: Mobiltelefon */
  $handler->display->display_options['fields']['field_shared_cell']['id'] = 'field_shared_cell';
  $handler->display->display_options['fields']['field_shared_cell']['table'] = 'field_data_field_shared_cell';
  $handler->display->display_options['fields']['field_shared_cell']['field'] = 'field_shared_cell';
  /* Field: Investerare: Telefon */
  $handler->display->display_options['fields']['field_shared_phone']['id'] = 'field_shared_phone';
  $handler->display->display_options['fields']['field_shared_phone']['table'] = 'field_data_field_shared_phone';
  $handler->display->display_options['fields']['field_shared_phone']['field'] = 'field_shared_phone';
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
  $translatables['investors'] = array(
    t('Master'),
    t('Alla investerare'),
    t('more'),
    t('Filtrera listan'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Kunde inte hitta några investerare som matchade sökkriterierna.'),
    t('.'),
    t('Namn'),
    t('Plats'),
    t('Mobiltelefon'),
    t('Telefon'),
    t('Postnummer'),
    t('Ort'),
    t('Land'),
    t('Branscher'),
    t('Page'),
  );
  $export['investors'] = $view;

  return $export;
}
