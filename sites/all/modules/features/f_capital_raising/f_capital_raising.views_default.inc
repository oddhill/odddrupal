<?php
/**
 * @file
 * f_capital_raising.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_capital_raising_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'capital_raisings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Transaktioner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alla transaktioner';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any capital_raising content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrera listan';
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
  $handler->display->display_options['empty']['area']['content'] = 'Kunde inte hitta några transaktioner som matchade sökkriterierna.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cap_rais_comp_target_id']['id'] = 'field_cap_rais_comp_target_id';
  $handler->display->display_options['relationships']['field_cap_rais_comp_target_id']['table'] = 'field_data_field_cap_rais_comp';
  $handler->display->display_options['relationships']['field_cap_rais_comp_target_id']['field'] = 'field_cap_rais_comp_target_id';
  $handler->display->display_options['relationships']['field_cap_rais_comp_target_id']['label'] = 'Bolag';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_cap_rais_comp_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Bolag';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titel';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'capital_raising' => 'capital_raising',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Alla */
  $handler = $view->new_display('page', 'Alla', 'page');
  $handler->display->display_options['path'] = 'transaktioner/lista';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Arkiverade */
  $handler = $view->new_display('page', 'Arkiverade', 'archived');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Arkiverade transaktioner';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any unpublished content';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'capital_raising' => 'capital_raising',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['path'] = 'transaktioner/arkiverade';

  /* Display: Dashboard */
  $handler = $view->new_display('block', 'Dashboard', 'dashboard');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pågående emissioner';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Det finns inga utgående transaktioner.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_cap_rais_comp_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Bolag';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'cap-rais-company';
  $handler->display->display_options['fields']['title_1']['element_label_class'] = 'cap-rais-company';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titel';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'cap-rais-title';
  $handler->display->display_options['fields']['title']['element_label_class'] = 'cap-rais-title';
  /* Field: Content: Teckningstid */
  $handler->display->display_options['fields']['field_cap_rais_date']['id'] = 'field_cap_rais_date';
  $handler->display->display_options['fields']['field_cap_rais_date']['table'] = 'field_data_field_cap_rais_date';
  $handler->display->display_options['fields']['field_cap_rais_date']['field'] = 'field_cap_rais_date';
  $handler->display->display_options['fields']['field_cap_rais_date']['label'] = 'Löptid';
  $handler->display->display_options['fields']['field_cap_rais_date']['element_class'] = 'cap-rais-date';
  $handler->display->display_options['fields']['field_cap_rais_date']['element_label_class'] = 'cap-rais-date';
  $handler->display->display_options['fields']['field_cap_rais_date']['type'] = 'sedermera_capital_raising_remaining';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Teckningstid (field_cap_rais_date:value2) */
  $handler->display->display_options['sorts']['field_cap_rais_date_value2']['id'] = 'field_cap_rais_date_value2';
  $handler->display->display_options['sorts']['field_cap_rais_date_value2']['table'] = 'field_data_field_cap_rais_date';
  $handler->display->display_options['sorts']['field_cap_rais_date_value2']['field'] = 'field_cap_rais_date_value2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'capital_raising' => 'capital_raising',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Teckningstid (field_cap_rais_date:value2) */
  $handler->display->display_options['filters']['field_cap_rais_date_value2']['id'] = 'field_cap_rais_date_value2';
  $handler->display->display_options['filters']['field_cap_rais_date_value2']['table'] = 'field_data_field_cap_rais_date';
  $handler->display->display_options['filters']['field_cap_rais_date_value2']['field'] = 'field_cap_rais_date_value2';
  $handler->display->display_options['filters']['field_cap_rais_date_value2']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_cap_rais_date_value2']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date (node)';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Utgår inom';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(
      'title' => '14 dagar',
      'operator' => '<=',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'relative',
          'value' => NULL,
          'default_date' => 'now +14 days',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => NULL,
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => NULL,
          'default_to_date' => '',
        ),
      ),
    ),
    2 => array(
      'title' => '7 dagar',
      'operator' => '=',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'relative',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => NULL,
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => NULL,
          'default_to_date' => '',
        ),
      ),
    ),
  );
  $translatables['capital_raisings'] = array(
    t('Master'),
    t('Alla transaktioner'),
    t('more'),
    t('Filtrera listan'),
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
    t('Kunde inte hitta några transaktioner som matchade sökkriterierna.'),
    t('Bolag'),
    t('Titel'),
    t('Alla'),
    t('Arkiverade'),
    t('Arkiverade transaktioner'),
    t('Dashboard'),
    t('Pågående emissioner'),
    t('Det finns inga utgående transaktioner.'),
    t('Löptid'),
    t('Date (node)'),
    t('Utgår inom'),
  );
  $export['capital_raisings'] = $view;

  $view = new view();
  $view->name = 'erbjudande';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Erbjudande';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kontaktlista';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Kontaktlista */
  $handler = $view->new_display('page', 'Kontaktlista', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Lägg till fler';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = 'Lägg till fler kontaktpersoner';
  $handler->display->display_options['header']['link']['path'] = 'node/!1/kontaktlista/lagg-till';
  $handler->display->display_options['header']['link']['class'] = 'add-more';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_transaction_offer_target_id']['id'] = 'field_transaction_offer_target_id';
  $handler->display->display_options['relationships']['field_transaction_offer_target_id']['table'] = 'field_data_field_transaction_offer';
  $handler->display->display_options['relationships']['field_transaction_offer_target_id']['field'] = 'field_transaction_offer_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_transaction_person_target_id']['id'] = 'field_transaction_person_target_id';
  $handler->display->display_options['relationships']['field_transaction_person_target_id']['table'] = 'field_data_field_transaction_person';
  $handler->display->display_options['relationships']['field_transaction_person_target_id']['field'] = 'field_transaction_person_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_transaction_person_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Kontaktperson';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Teckningsförbindelse fe */
  $handler->display->display_options['fields']['field_transaction_fe_sign']['id'] = 'field_transaction_fe_sign';
  $handler->display->display_options['fields']['field_transaction_fe_sign']['table'] = 'field_data_field_transaction_fe_sign';
  $handler->display->display_options['fields']['field_transaction_fe_sign']['field'] = 'field_transaction_fe_sign';
  $handler->display->display_options['fields']['field_transaction_fe_sign']['label'] = 'Teckningsförbindelse';
  $handler->display->display_options['fields']['field_transaction_fe_sign']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_fe_sign']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Content: Garantiåtagande fe */
  $handler->display->display_options['fields']['field_transaction_fe_warant']['id'] = 'field_transaction_fe_warant';
  $handler->display->display_options['fields']['field_transaction_fe_warant']['table'] = 'field_data_field_transaction_fe_warant';
  $handler->display->display_options['fields']['field_transaction_fe_warant']['field'] = 'field_transaction_fe_warant';
  $handler->display->display_options['fields']['field_transaction_fe_warant']['label'] = 'Garantiåtagande';
  $handler->display->display_options['fields']['field_transaction_fe_warant']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_fe_warant']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_fe_warant']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Content: Teckningsförbindelse le */
  $handler->display->display_options['fields']['field_transaction_le_sign']['id'] = 'field_transaction_le_sign';
  $handler->display->display_options['fields']['field_transaction_le_sign']['table'] = 'field_data_field_transaction_le_sign';
  $handler->display->display_options['fields']['field_transaction_le_sign']['field'] = 'field_transaction_le_sign';
  $handler->display->display_options['fields']['field_transaction_le_sign']['label'] = 'Teckningsförbindelse';
  $handler->display->display_options['fields']['field_transaction_le_sign']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_le_sign']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_le_sign']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Content: Garantiåtagande le */
  $handler->display->display_options['fields']['field_transaction_le_warrant']['id'] = 'field_transaction_le_warrant';
  $handler->display->display_options['fields']['field_transaction_le_warrant']['table'] = 'field_data_field_transaction_le_warrant';
  $handler->display->display_options['fields']['field_transaction_le_warrant']['field'] = 'field_transaction_le_warrant';
  $handler->display->display_options['fields']['field_transaction_le_warrant']['label'] = 'Garantiåtagande';
  $handler->display->display_options['fields']['field_transaction_le_warrant']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_le_warrant']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Content: Teckningsförbindelse pp */
  $handler->display->display_options['fields']['field_transaction_pp_sign']['id'] = 'field_transaction_pp_sign';
  $handler->display->display_options['fields']['field_transaction_pp_sign']['table'] = 'field_data_field_transaction_pp_sign';
  $handler->display->display_options['fields']['field_transaction_pp_sign']['field'] = 'field_transaction_pp_sign';
  $handler->display->display_options['fields']['field_transaction_pp_sign']['label'] = 'Teckningsförbindelse';
  $handler->display->display_options['fields']['field_transaction_pp_sign']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_pp_sign']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_pp_sign']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Content: Teckningsförbindelse re */
  $handler->display->display_options['fields']['field_transaction_re_sign']['id'] = 'field_transaction_re_sign';
  $handler->display->display_options['fields']['field_transaction_re_sign']['table'] = 'field_data_field_transaction_re_sign';
  $handler->display->display_options['fields']['field_transaction_re_sign']['field'] = 'field_transaction_re_sign';
  $handler->display->display_options['fields']['field_transaction_re_sign']['label'] = 'Teckningsförbindelse';
  $handler->display->display_options['fields']['field_transaction_re_sign']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_re_sign']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_re_sign']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Content: Brygglån */
  $handler->display->display_options['fields']['field_transaction_bridging']['id'] = 'field_transaction_bridging';
  $handler->display->display_options['fields']['field_transaction_bridging']['table'] = 'field_data_field_transaction_bridging';
  $handler->display->display_options['fields']['field_transaction_bridging']['field'] = 'field_transaction_bridging';
  $handler->display->display_options['fields']['field_transaction_bridging']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_bridging']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_bridging']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Content: Blockpost */
  $handler->display->display_options['fields']['field_transaction_block']['id'] = 'field_transaction_block';
  $handler->display->display_options['fields']['field_transaction_block']['table'] = 'field_data_field_transaction_block';
  $handler->display->display_options['fields']['field_transaction_block']['field'] = 'field_transaction_block';
  $handler->display->display_options['fields']['field_transaction_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_block']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_block']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Content: Summa */
  $handler->display->display_options['fields']['field_transaction_sum']['id'] = 'field_transaction_sum';
  $handler->display->display_options['fields']['field_transaction_sum']['table'] = 'field_data_field_transaction_sum';
  $handler->display->display_options['fields']['field_transaction_sum']['field'] = 'field_transaction_sum';
  $handler->display->display_options['fields']['field_transaction_sum']['label'] = '';
  $handler->display->display_options['fields']['field_transaction_sum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_sum']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Anteckning */
  $handler->display->display_options['fields']['field_transaction_note']['id'] = 'field_transaction_note';
  $handler->display->display_options['fields']['field_transaction_note']['table'] = 'field_data_field_transaction_note';
  $handler->display->display_options['fields']['field_transaction_note']['field'] = 'field_transaction_note';
  $handler->display->display_options['fields']['field_transaction_note']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_note']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_note']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: Första kontakt */
  $handler->display->display_options['fields']['field_transaction_first']['id'] = 'field_transaction_first';
  $handler->display->display_options['fields']['field_transaction_first']['table'] = 'field_data_field_transaction_first';
  $handler->display->display_options['fields']['field_transaction_first']['field'] = 'field_transaction_first';
  $handler->display->display_options['fields']['field_transaction_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_first']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_first']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'date_default',
    'fallback_settings' => array(
      'format_type' => 'short',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'show_remaining_days' => 0,
    ),
  );
  /* Field: Content: Insynsinfo */
  $handler->display->display_options['fields']['field_transaction_info']['id'] = 'field_transaction_info';
  $handler->display->display_options['fields']['field_transaction_info']['table'] = 'field_data_field_transaction_info';
  $handler->display->display_options['fields']['field_transaction_info']['field'] = 'field_transaction_info';
  $handler->display->display_options['fields']['field_transaction_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_transaction_info']['alter']['text'] = 'Skicka';
  $handler->display->display_options['fields']['field_transaction_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_transaction_info']['alter']['path'] = 'test.php';
  $handler->display->display_options['fields']['field_transaction_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_info']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_info']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Content: Erbjudande */
  $handler->display->display_options['fields']['field_transaction_info_offer']['id'] = 'field_transaction_info_offer';
  $handler->display->display_options['fields']['field_transaction_info_offer']['table'] = 'field_data_field_transaction_info_offer';
  $handler->display->display_options['fields']['field_transaction_info_offer']['field'] = 'field_transaction_info_offer';
  $handler->display->display_options['fields']['field_transaction_info_offer']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_transaction_info_offer']['alter']['text'] = 'Skicka';
  $handler->display->display_options['fields']['field_transaction_info_offer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_transaction_info_offer']['alter']['path'] = 'test.php';
  $handler->display->display_options['fields']['field_transaction_info_offer']['alter']['alt'] = 'Skicka';
  $handler->display->display_options['fields']['field_transaction_info_offer']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_info_offer']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Content: Intresserad */
  $handler->display->display_options['fields']['field_transaction_interested']['id'] = 'field_transaction_interested';
  $handler->display->display_options['fields']['field_transaction_interested']['table'] = 'field_data_field_transaction_interested';
  $handler->display->display_options['fields']['field_transaction_interested']['field'] = 'field_transaction_interested';
  $handler->display->display_options['fields']['field_transaction_interested']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_interested']['type'] = 'editable';
  $handler->display->display_options['fields']['field_transaction_interested']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_transaction_offer_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'transaction' => 'transaction',
  );
  $handler->display->display_options['path'] = 'node/%/kontaktlista';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Kontaklista';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Alla */
  $handler = $view->new_display('page', 'Alla', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alla erbjudande';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Företag */
  $handler->display->display_options['fields']['field_offer_company']['id'] = 'field_offer_company';
  $handler->display->display_options['fields']['field_offer_company']['table'] = 'field_data_field_offer_company';
  $handler->display->display_options['fields']['field_offer_company']['field'] = 'field_offer_company';
  $handler->display->display_options['fields']['field_offer_company']['label'] = 'Bolag';
  $handler->display->display_options['fields']['field_offer_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_company']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'erbjudande' => 'erbjudande',
  );
  $handler->display->display_options['path'] = 'erbjudande/lista';
  $translatables['erbjudande'] = array(
    t('Master'),
    t('Kontaktlista'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Lägg till fler'),
    t('Lägg till fler kontaktpersoner'),
    t('Content entity referenced from field_transaction_offer'),
    t('Content entity referenced from field_transaction_person'),
    t('Kontaktperson'),
    t('Teckningsförbindelse'),
    t('Garantiåtagande'),
    t('Brygglån'),
    t('Blockpost'),
    t('Anteckning'),
    t('Första kontakt'),
    t('Insynsinfo'),
    t('Skicka'),
    t('Erbjudande'),
    t('Intresserad'),
    t('All'),
    t('Alla'),
    t('Alla erbjudande'),
    t('Bolag'),
  );
  $export['erbjudande'] = $view;

  return $export;
}
