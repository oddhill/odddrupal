<?php
/**
 * @file
 * f_company.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_company_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'company';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kundbolag';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alla kundbolag';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any company content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrera';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Det finns inga kundbolag att visa';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Namn';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Namn';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'kundbolag/lista';

  /* Display: Offerter */
  $handler = $view->new_display('page', 'Offerter', 'proposals');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'views_access_callback';
  $handler->display->display_options['access']['views_access_callback'] = 'sedermera_core_customer_company';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Lägg till offert';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = 'Lägg till offert';
  $handler->display->display_options['header']['link']['path'] = 'node/add/proposal';
  $handler->display->display_options['header']['link']['querystring'] = 'nid=!1';
  $handler->display->display_options['header']['link']['class'] = 'add-proposal';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Det finns inga offerter att visa';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_proposal_company_target_id']['id'] = 'field_proposal_company_target_id';
  $handler->display->display_options['relationships']['field_proposal_company_target_id']['table'] = 'field_data_field_proposal_company';
  $handler->display->display_options['relationships']['field_proposal_company_target_id']['field'] = 'field_proposal_company_target_id';
  $handler->display->display_options['relationships']['field_proposal_company_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Offert';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Kräver kundgodkännande */
  $handler->display->display_options['fields']['field_proposal_approval']['id'] = 'field_proposal_approval';
  $handler->display->display_options['fields']['field_proposal_approval']['table'] = 'field_data_field_proposal_approval';
  $handler->display->display_options['fields']['field_proposal_approval']['field'] = 'field_proposal_approval';
  $handler->display->display_options['fields']['field_proposal_approval']['label'] = 'Krävs kundgodkännande?';
  $handler->display->display_options['fields']['field_proposal_approval']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_proposal_approval']['alter']['text'] = 'JA';
  $handler->display->display_options['fields']['field_proposal_approval']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proposal_approval']['empty'] = 'NEJ';
  $handler->display->display_options['fields']['field_proposal_approval']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_proposal_approval']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_proposal_approval']['type'] = 'list_key';
  /* Field: Content: Kundgodkännande */
  $handler->display->display_options['fields']['field_proposal_cust_approval']['id'] = 'field_proposal_cust_approval';
  $handler->display->display_options['fields']['field_proposal_cust_approval']['table'] = 'field_data_field_proposal_cust_approval';
  $handler->display->display_options['fields']['field_proposal_cust_approval']['field'] = 'field_proposal_cust_approval';
  $handler->display->display_options['fields']['field_proposal_cust_approval']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proposal_cust_approval']['type'] = 'sedermera_customer_approval';
  $handler->display->display_options['fields']['field_proposal_cust_approval']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Offert undertecknad av enbart kund */
  $handler->display->display_options['fields']['field_proposal_customer']['id'] = 'field_proposal_customer';
  $handler->display->display_options['fields']['field_proposal_customer']['table'] = 'field_data_field_proposal_customer';
  $handler->display->display_options['fields']['field_proposal_customer']['field'] = 'field_proposal_customer';
  $handler->display->display_options['fields']['field_proposal_customer']['label'] = 'Signerad av kund';
  $handler->display->display_options['fields']['field_proposal_customer']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_proposal_customer']['alter']['text'] = '<span class=\'yes\'>Ja</span>';
  $handler->display->display_options['fields']['field_proposal_customer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proposal_customer']['empty'] = '<span class=\'no\'>Nej</span>';
  $handler->display->display_options['fields']['field_proposal_customer']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_proposal_customer']['click_sort_column'] = 'fid';
  /* Field: Content: Offert undertecknad av både kund och Sedermera */
  $handler->display->display_options['fields']['field_proposal_final']['id'] = 'field_proposal_final';
  $handler->display->display_options['fields']['field_proposal_final']['table'] = 'field_data_field_proposal_final';
  $handler->display->display_options['fields']['field_proposal_final']['field'] = 'field_proposal_final';
  $handler->display->display_options['fields']['field_proposal_final']['label'] = 'Signerad av Sedermera';
  $handler->display->display_options['fields']['field_proposal_final']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_proposal_final']['alter']['text'] = '<span class=\'yes\'>Ja</span>';
  $handler->display->display_options['fields']['field_proposal_final']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proposal_final']['empty'] = '<span class=\'no\'>Nej</span>';
  $handler->display->display_options['fields']['field_proposal_final']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_proposal_final']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_proposal_company_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal' => 'proposal',
  );
  $handler->display->display_options['path'] = 'node/%/offerter';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Offerter';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['company'] = array(
    t('Master'),
    t('Alla kundbolag'),
    t('more'),
    t('Filtrera'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Det finns inga kundbolag att visa'),
    t('Namn'),
    t('Page'),
    t('Offerter'),
    t('%1'),
    t('Lägg till offert'),
    t('Det finns inga offerter att visa'),
    t('Content entity referenced from field_proposal_company'),
    t('Offert'),
    t('Krävs kundgodkännande?'),
    t('JA'),
    t('NEJ'),
    t('Kundgodkännande'),
    t('Signerad av kund'),
    t('<span class=\'yes\'>Ja</span>'),
    t('<span class=\'no\'>Nej</span>'),
    t('Signerad av Sedermera'),
    t('All'),
  );
  $export['company'] = $view;

  return $export;
}
