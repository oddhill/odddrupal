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
  $view->name = 'all_offers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Erbjudanden';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Erbjudanden';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Företag */
  $handler->display->display_options['fields']['field_offer_company']['id'] = 'field_offer_company';
  $handler->display->display_options['fields']['field_offer_company']['table'] = 'field_data_field_offer_company';
  $handler->display->display_options['fields']['field_offer_company']['field'] = 'field_offer_company';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'erbjudande' => 'erbjudande',
  );

  /* Display: Alla */
  $handler = $view->new_display('page', 'Alla', 'page');
  $handler->display->display_options['path'] = 'erbjudanden/lista';
  $translatables['all_offers'] = array(
    t('Master'),
    t('Erbjudanden'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Företag'),
    t('Title'),
    t('Alla'),
  );
  $export['all_offers'] = $view;

  $view = new view();
  $view->name = 'customer_handler';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Kundansvarig';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['field_user_name']['id'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name']['table'] = 'field_data_field_user_name';
  $handler->display->display_options['fields']['field_user_name']['field'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_name']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    5 => '5',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_user_name' => 'field_user_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['customer_handler'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entity Reference'),
  );
  $export['customer_handler'] = $view;

  $view = new view();
  $view->name = 'investors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Avtalsparter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alla avtalsparter';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_shared_cust_id' => 'field_shared_cust_id',
    'field_shared_cont_pers' => 'field_shared_cont_pers',
    'field_user_owner' => 'field_user_owner',
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
    'field_shared_cust_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shared_cont_pers' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_owner' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_shared_cont_pers_target_id']['id'] = 'field_shared_cont_pers_target_id';
  $handler->display->display_options['relationships']['field_shared_cont_pers_target_id']['table'] = 'field_data_field_shared_cont_pers';
  $handler->display->display_options['relationships']['field_shared_cont_pers_target_id']['field'] = 'field_shared_cont_pers_target_id';
  $handler->display->display_options['relationships']['field_shared_cont_pers_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Namn';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Kundnummer */
  $handler->display->display_options['fields']['field_shared_cust_id']['id'] = 'field_shared_cust_id';
  $handler->display->display_options['fields']['field_shared_cust_id']['table'] = 'field_data_field_shared_cust_id';
  $handler->display->display_options['fields']['field_shared_cust_id']['field'] = 'field_shared_cust_id';
  $handler->display->display_options['fields']['field_shared_cust_id']['element_label_colon'] = FALSE;
  /* Field: Content: Kontaktperson */
  $handler->display->display_options['fields']['field_shared_cont_pers']['id'] = 'field_shared_cont_pers';
  $handler->display->display_options['fields']['field_shared_cont_pers']['table'] = 'field_data_field_shared_cont_pers';
  $handler->display->display_options['fields']['field_shared_cont_pers']['field'] = 'field_shared_cont_pers';
  $handler->display->display_options['fields']['field_shared_cont_pers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_cont_pers']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Kundansvarig */
  $handler->display->display_options['fields']['field_user_owner']['id'] = 'field_user_owner';
  $handler->display->display_options['fields']['field_user_owner']['table'] = 'field_data_field_user_owner';
  $handler->display->display_options['fields']['field_user_owner']['field'] = 'field_user_owner';
  $handler->display->display_options['fields']['field_user_owner']['relationship'] = 'field_shared_cont_pers_target_id';
  $handler->display->display_options['fields']['field_user_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_owner']['settings'] = array(
    'link' => 0,
  );
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'investor_company' => 'investor_company',
    'investor_private' => 'investor_private',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
    9 => 0,
    8 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Kundnummer (field_shared_cust_id) */
  $handler->display->display_options['filters']['field_shared_cust_id_value']['id'] = 'field_shared_cust_id_value';
  $handler->display->display_options['filters']['field_shared_cust_id_value']['table'] = 'field_data_field_shared_cust_id';
  $handler->display->display_options['filters']['field_shared_cust_id_value']['field'] = 'field_shared_cust_id_value';
  $handler->display->display_options['filters']['field_shared_cust_id_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_shared_cust_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_cust_id_value']['expose']['operator_id'] = 'field_shared_cust_id_value_op';
  $handler->display->display_options['filters']['field_shared_cust_id_value']['expose']['label'] = 'Kundnummer';
  $handler->display->display_options['filters']['field_shared_cust_id_value']['expose']['operator'] = 'field_shared_cust_id_value_op';
  $handler->display->display_options['filters']['field_shared_cust_id_value']['expose']['identifier'] = 'field_shared_cust_id_value';
  $handler->display->display_options['filters']['field_shared_cust_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Kundansvarig (field_user_owner) (reference filter) */
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['id'] = 'field_user_owner_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['table'] = 'field_data_field_user_owner';
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['field'] = 'field_user_owner_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['relationship'] = 'field_shared_cont_pers_target_id';
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['expose']['operator_id'] = 'field_user_owner_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['expose']['label'] = 'Kundansvarig';
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['expose']['operator'] = 'field_user_owner_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['expose']['identifier'] = 'field_user_owner_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_user_owner_target_id_entityreference_filter']['reference_display'] = 'kundansvarig:entityreference_1';

  /* Display: Avtalsparter */
  $handler = $view->new_display('page', 'Avtalsparter', 'page');
  $handler->display->display_options['path'] = 'avtalsparter/lista';
  $translatables['investors'] = array(
    t('Master'),
    t('Alla avtalsparter'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_shared_cont_pers'),
    t('Namn'),
    t('Kundnummer'),
    t('Kontaktperson'),
    t('Kundansvarig'),
    t('Avtalsparter'),
  );
  $export['investors'] = $view;

  $view = new view();
  $view->name = 'person';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kontaktpersoner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kontaktpersoner';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
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
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'document_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Namn';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: E-post */
  $handler->display->display_options['fields']['field_user_mail']['id'] = 'field_user_mail';
  $handler->display->display_options['fields']['field_user_mail']['table'] = 'field_data_field_user_mail';
  $handler->display->display_options['fields']['field_user_mail']['field'] = 'field_user_mail';
  $handler->display->display_options['fields']['field_user_mail']['element_label_colon'] = FALSE;
  /* Field: Content: Mobil */
  $handler->display->display_options['fields']['field_user_cell']['id'] = 'field_user_cell';
  $handler->display->display_options['fields']['field_user_cell']['table'] = 'field_data_field_user_cell';
  $handler->display->display_options['fields']['field_user_cell']['field'] = 'field_user_cell';
  $handler->display->display_options['fields']['field_user_cell']['element_label_colon'] = FALSE;
  /* Field: Content: Telefon */
  $handler->display->display_options['fields']['field_user_phone']['id'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['table'] = 'field_data_field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['field'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'person' => 'person',
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
    9 => 0,
    8 => 0,
    10 => 0,
  );

  /* Display: Lista */
  $handler = $view->new_display('page', 'Lista', 'list');
  $handler->display->display_options['path'] = 'kontaktpersoner/lista';

  /* Display: Skapa erbjudande */
  $handler = $view->new_display('embed', 'Skapa erbjudande', 'offer_embed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Namn';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  /* Field: Content: Mobil */
  $handler->display->display_options['fields']['field_user_cell']['id'] = 'field_user_cell';
  $handler->display->display_options['fields']['field_user_cell']['table'] = 'field_data_field_user_cell';
  $handler->display->display_options['fields']['field_user_cell']['field'] = 'field_user_cell';
  $handler->display->display_options['fields']['field_user_cell']['element_label_colon'] = FALSE;
  /* Field: Content: E-post */
  $handler->display->display_options['fields']['field_user_mail']['id'] = 'field_user_mail';
  $handler->display->display_options['fields']['field_user_mail']['table'] = 'field_data_field_user_mail';
  $handler->display->display_options['fields']['field_user_mail']['field'] = 'field_user_mail';
  $handler->display->display_options['fields']['field_user_mail']['element_label_colon'] = FALSE;
  /* Field: Content: Telefon */
  $handler->display->display_options['fields']['field_user_phone']['id'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['table'] = 'field_data_field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['field'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['element_label_colon'] = FALSE;
  $translatables['person'] = array(
    t('Master'),
    t('Kontaktpersoner'),
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
    t('Namn'),
    t('E-post'),
    t('Mobil'),
    t('Telefon'),
    t('Lista'),
    t('Skapa erbjudande'),
    t('- Choose an operation -'),
  );
  $export['person'] = $view;

  return $export;
}
