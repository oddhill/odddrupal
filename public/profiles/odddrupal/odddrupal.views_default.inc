<?php
/**
 * @file
 * Default views provided by Odd Drupal.
 */

/**
 * Implements hook_views_default_views().
 */
function odddrupal_views_default_views() {
  $export = array();

  if (drupal_multilingual() && variable_get('install_language', 'en') != 'sv') {
    $view = new view();
    $view->name = 'administration_nodes';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Administration: Nodes';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Content';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['access']['perm'] = 'access content overview';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '50';
    $handler->display->display_options['style_plugin'] = 'table';
    if (module_exists('title') && field_info_field('title_field')) {
      $handler->display->display_options['style_options']['columns'] = array(
        'views_bulk_operations' => 'views_bulk_operations',
        'title_field' => 'title_field',
        'language' => 'language',
        'type' => 'type',
        'status' => 'status',
        'created' => 'created',
        'changed' => 'changed',
        'edit_node' => 'edit_node',
        'delete_node' => 'edit_node',
      );
    }
    else {
      $handler->display->display_options['style_options']['columns'] = array(
        'views_bulk_operations' => 'views_bulk_operations',
        'title' => 'title',
        'language' => 'language',
        'type' => 'type',
        'status' => 'status',
        'created' => 'created',
        'changed' => 'changed',
        'edit_node' => 'edit_node',
        'delete_node' => 'edit_node',
      );
    }
    $handler->display->display_options['style_options']['default'] = 'changed';
    if (module_exists('title') && field_info_field('title_field')) {
      $handler->display->display_options['style_options']['info'] = array(
        'views_bulk_operations' => array(
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'title_field' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'language' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'type' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'status' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'created' => array(
          'sortable' => 1,
          'default_sort_order' => 'desc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'changed' => array(
          'sortable' => 1,
          'default_sort_order' => 'desc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'edit_node' => array(
          'align' => '',
          'separator' => '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;',
          'empty_column' => 0,
        ),
        'delete_node' => array(
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
      );
    }
    else {
      $handler->display->display_options['style_options']['info'] = array(
        'views_bulk_operations' => array(
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
        'language' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'type' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'status' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'created' => array(
          'sortable' => 1,
          'default_sort_order' => 'desc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'changed' => array(
          'sortable' => 1,
          'default_sort_order' => 'desc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'edit_node' => array(
          'align' => '',
          'separator' => '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;',
          'empty_column' => 0,
        ),
        'delete_node' => array(
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
      );
    }
    /* Field: Bulk operations: Content */
    $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
    $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
    $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
    $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
    $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
      'action::node_assign_owner_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::views_bulk_operations_delete_item' => array(
        'selected' => 1,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 1,
        'label' => 'Delete',
      ),
      'action::views_bulk_operations_script_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::node_make_sticky_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::node_make_unsticky_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::views_bulk_operations_modify_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
        'settings' => array(
          'show_all_tokens' => 1,
          'display_values' => array(
            '_all_' => '_all_',
          ),
        ),
      ),
      'action::views_bulk_operations_argument_selector_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
        'settings' => array(
          'url' => '',
        ),
      ),
      'action::node_promote_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::node_publish_action' => array(
        'selected' => 1,
        'postpone_processing' => 0,
        'skip_confirmation' => 1,
        'override_label' => 1,
        'label' => 'Publish',
      ),
      'action::node_unpromote_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::node_save_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::system_send_email_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::node_unpublish_action' => array(
        'selected' => 1,
        'postpone_processing' => 0,
        'skip_confirmation' => 1,
        'override_label' => 1,
        'label' => 'Unpublish',
      ),
      'action::node_unpublish_by_keyword_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::pathauto_node_update_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 1,
        'override_label' => 1,
        'label' => 'Update URL alias',
      ),
    );
    /* Field: Content: Title */
    if (module_exists('title') && field_info_field('title_field')) {
      $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
      $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
      $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
      $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
    }
    else {
      $handler->display->display_options['fields']['title']['id'] = 'title';
      $handler->display->display_options['fields']['title']['table'] = 'node';
      $handler->display->display_options['fields']['title']['field'] = 'title';
      $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
      $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    }
    /* Field: Content: Type */
    $handler->display->display_options['fields']['type']['id'] = 'type';
    $handler->display->display_options['fields']['type']['table'] = 'node';
    $handler->display->display_options['fields']['type']['field'] = 'type';
    /* Field: Content: Language */
    $handler->display->display_options['fields']['language']['id'] = 'language';
    $handler->display->display_options['fields']['language']['table'] = 'node';
    $handler->display->display_options['fields']['language']['field'] = 'language';
    $handler->display->display_options['fields']['language']['empty'] = 'No language';
    /* Field: Content: Published */
    $handler->display->display_options['fields']['status']['id'] = 'status';
    $handler->display->display_options['fields']['status']['table'] = 'node';
    $handler->display->display_options['fields']['status']['field'] = 'status';
    $handler->display->display_options['fields']['status']['not'] = 0;
    /* Field: Content: Post date */
    $handler->display->display_options['fields']['created']['id'] = 'created';
    $handler->display->display_options['fields']['created']['table'] = 'node';
    $handler->display->display_options['fields']['created']['field'] = 'created';
    $handler->display->display_options['fields']['created']['label'] = 'Created';
    $handler->display->display_options['fields']['created']['date_format'] = 'short';
    /* Field: Content: Updated date */
    $handler->display->display_options['fields']['changed']['id'] = 'changed';
    $handler->display->display_options['fields']['changed']['table'] = 'node';
    $handler->display->display_options['fields']['changed']['field'] = 'changed';
    $handler->display->display_options['fields']['changed']['label'] = 'Changed';
    $handler->display->display_options['fields']['changed']['date_format'] = 'short';
    /* Field: Content: Edit link */
    $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['label'] = '';
    $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
    /* Field: Content: Delete link */
    $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['label'] = '';
    $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
    /* Filter criterion: Content: Title */
    if (module_exists('title') && field_info_field('title_field')) {
      $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
      $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
      $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
      $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
      $handler->display->display_options['filters']['title_field_value']['group'] = 1;
      $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
      $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
      $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
      $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
      $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
      $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
        2 => '2',
        1 => 0,
        3 => 0,
      );
    }
    else {
      $handler->display->display_options['filters']['title']['id'] = 'title';
      $handler->display->display_options['filters']['title']['table'] = 'node';
      $handler->display->display_options['filters']['title']['field'] = 'title';
      $handler->display->display_options['filters']['title']['operator'] = 'contains';
      $handler->display->display_options['filters']['title']['group'] = 1;
      $handler->display->display_options['filters']['title']['exposed'] = TRUE;
      $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
      $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
      $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
      $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
      $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
        2 => '2',
        1 => 0,
        3 => 0,
      );
    }
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['group'] = 1;
    $handler->display->display_options['filters']['type']['exposed'] = TRUE;
    $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
    $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
    $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      3 => 0,
    );
    /* Filter criterion: Content: Language */
    $handler->display->display_options['filters']['language']['id'] = 'language';
    $handler->display->display_options['filters']['language']['table'] = 'node';
    $handler->display->display_options['filters']['language']['field'] = 'language';
    $handler->display->display_options['filters']['language']['group'] = 1;
    $handler->display->display_options['filters']['language']['exposed'] = TRUE;
    $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
    $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
    $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
    $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
    $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      3 => 0,
    );
    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = 'All';
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['exposed'] = TRUE;
    $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
    $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
    $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
    $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
    $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      3 => 0,
    );

    /* Display: Content */
    $handler = $view->new_display('page', 'Content', 'content');
    $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
    $handler->display->display_options['path'] = 'admin/content';
    $handler->display->display_options['menu']['type'] = 'normal';
    $handler->display->display_options['menu']['title'] = 'Content';
    $handler->display->display_options['menu']['weight'] = '-10';
    $handler->display->display_options['menu']['name'] = 'management';
    $handler->display->display_options['menu']['context'] = 0;
    $translatables['administration_nodes'] = array(
      t('Master'),
      t('Content'),
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
      t('Title'),
      t('Type'),
      t('Language'),
      t('No language'),
      t('Published'),
      t('Created'),
      t('Changed'),
    );
  }
  else {
    $view = new view();
    $view->name = 'administration_nodes';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Administration: Nodes';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Content';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['access']['perm'] = 'access content overview';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '50';
    $handler->display->display_options['style_plugin'] = 'table';
    if (module_exists('title') && field_info_field('title_field')) {
      $handler->display->display_options['style_options']['columns'] = array(
        'views_bulk_operations' => 'views_bulk_operations',
        'title_field' => 'title_field',
        'type' => 'type',
        'status' => 'status',
        'created' => 'created',
        'changed' => 'changed',
        'edit_node' => 'edit_node',
        'delete_node' => 'edit_node',
      );
    }
    else {
      $handler->display->display_options['style_options']['columns'] = array(
        'views_bulk_operations' => 'views_bulk_operations',
        'title' => 'title',
        'type' => 'type',
        'status' => 'status',
        'created' => 'created',
        'changed' => 'changed',
        'edit_node' => 'edit_node',
        'delete_node' => 'edit_node',
      );
    }
    $handler->display->display_options['style_options']['default'] = 'changed';
    if (module_exists('title') && field_info_field('title_field')) {
      $handler->display->display_options['style_options']['info'] = array(
        'views_bulk_operations' => array(
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'title_field' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'type' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'status' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'created' => array(
          'sortable' => 1,
          'default_sort_order' => 'desc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'changed' => array(
          'sortable' => 1,
          'default_sort_order' => 'desc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'edit_node' => array(
          'align' => '',
          'separator' => '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;',
          'empty_column' => 0,
        ),
        'delete_node' => array(
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
      );
    }
    else {
      $handler->display->display_options['style_options']['info'] = array(
        'views_bulk_operations' => array(
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
        'type' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'status' => array(
          'sortable' => 1,
          'default_sort_order' => 'asc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'created' => array(
          'sortable' => 1,
          'default_sort_order' => 'desc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'changed' => array(
          'sortable' => 1,
          'default_sort_order' => 'desc',
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
        'edit_node' => array(
          'align' => '',
          'separator' => '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;',
          'empty_column' => 0,
        ),
        'delete_node' => array(
          'align' => '',
          'separator' => '',
          'empty_column' => 0,
        ),
      );
    }
    /* Field: Bulk operations: Content */
    $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
    $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
    $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
    $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
    $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
    $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
      'action::node_assign_owner_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::views_bulk_operations_delete_item' => array(
        'selected' => 1,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 1,
        'label' => 'Delete',
      ),
      'action::views_bulk_operations_script_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::node_make_sticky_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::node_make_unsticky_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::views_bulk_operations_modify_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
        'settings' => array(
          'show_all_tokens' => 1,
          'display_values' => array(
            '_all_' => '_all_',
          ),
        ),
      ),
      'action::views_bulk_operations_argument_selector_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
        'settings' => array(
          'url' => '',
        ),
      ),
      'action::node_promote_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::node_publish_action' => array(
        'selected' => 1,
        'postpone_processing' => 0,
        'skip_confirmation' => 1,
        'override_label' => 1,
        'label' => 'Publish',
      ),
      'action::node_unpromote_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::node_save_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::system_send_email_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::node_unpublish_action' => array(
        'selected' => 1,
        'postpone_processing' => 0,
        'skip_confirmation' => 1,
        'override_label' => 1,
        'label' => 'Unpublish',
      ),
      'action::node_unpublish_by_keyword_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::pathauto_node_update_action' => array(
        'selected' => 0,
        'postpone_processing' => 0,
        'skip_confirmation' => 1,
        'override_label' => 1,
        'label' => 'Update URL alias',
      ),
    );
    /* Field: Content: Title */
    if (module_exists('title') && field_info_field('title_field')) {
      $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
      $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
      $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
      $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
    }
    else {
      $handler->display->display_options['fields']['title']['id'] = 'title';
      $handler->display->display_options['fields']['title']['table'] = 'node';
      $handler->display->display_options['fields']['title']['field'] = 'title';
      $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
      $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    }
    /* Field: Content: Type */
    $handler->display->display_options['fields']['type']['id'] = 'type';
    $handler->display->display_options['fields']['type']['table'] = 'node';
    $handler->display->display_options['fields']['type']['field'] = 'type';
    /* Field: Content: Published */
    $handler->display->display_options['fields']['status']['id'] = 'status';
    $handler->display->display_options['fields']['status']['table'] = 'node';
    $handler->display->display_options['fields']['status']['field'] = 'status';
    $handler->display->display_options['fields']['status']['not'] = 0;
    /* Field: Content: Post date */
    $handler->display->display_options['fields']['created']['id'] = 'created';
    $handler->display->display_options['fields']['created']['table'] = 'node';
    $handler->display->display_options['fields']['created']['field'] = 'created';
    $handler->display->display_options['fields']['created']['label'] = 'Created';
    $handler->display->display_options['fields']['created']['date_format'] = 'short';
    /* Field: Content: Updated date */
    $handler->display->display_options['fields']['changed']['id'] = 'changed';
    $handler->display->display_options['fields']['changed']['table'] = 'node';
    $handler->display->display_options['fields']['changed']['field'] = 'changed';
    $handler->display->display_options['fields']['changed']['label'] = 'Changed';
    $handler->display->display_options['fields']['changed']['date_format'] = 'short';
    /* Field: Content: Edit link */
    $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['label'] = '';
    $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
    /* Field: Content: Delete link */
    $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['label'] = '';
    $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
    /* Filter criterion: Content: Title */
    if (module_exists('title') && field_info_field('title_field')) {
      $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
      $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
      $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
      $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
      $handler->display->display_options['filters']['title_field_value']['group'] = 1;
      $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
      $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
      $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
      $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
      $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
      $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
        2 => '2',
        1 => 0,
        3 => 0,
      );
    }
    else {
      $handler->display->display_options['filters']['title']['id'] = 'title';
      $handler->display->display_options['filters']['title']['table'] = 'node';
      $handler->display->display_options['filters']['title']['field'] = 'title';
      $handler->display->display_options['filters']['title']['operator'] = 'contains';
      $handler->display->display_options['filters']['title']['group'] = 1;
      $handler->display->display_options['filters']['title']['exposed'] = TRUE;
      $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
      $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
      $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
      $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
      $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
        2 => '2',
        1 => 0,
        3 => 0,
      );
    }
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['group'] = 1;
    $handler->display->display_options['filters']['type']['exposed'] = TRUE;
    $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
    $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
    $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      3 => 0,
    );
    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = 'All';
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['exposed'] = TRUE;
    $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
    $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
    $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
    $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
    $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      3 => 0,
    );

    /* Display: Content */
    $handler = $view->new_display('page', 'Content', 'content');
    $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
    $handler->display->display_options['path'] = 'admin/content';
    $handler->display->display_options['menu']['type'] = 'normal';
    $handler->display->display_options['menu']['title'] = 'Content';
    $handler->display->display_options['menu']['weight'] = '-10';
    $handler->display->display_options['menu']['name'] = 'management';
    $handler->display->display_options['menu']['context'] = 0;
    $translatables['administration_nodes'] = array(
      t('Master'),
      t('Content'),
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
      t('Title'),
      t('Type'),
      t('Published'),
      t('Created'),
      t('Changed'),
    );
  }
  $export['administration_nodes'] = $view;

  $view = new view();
  $view->name = 'administration_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Administration: Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'mail' => 'mail',
    'rid' => 'rid',
    'status' => 'status',
    'access' => 'access',
    'edit_node' => 'edit_node',
    'masquerade_as' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'access';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '&nbsp;&nbsp;&nbsp;',
      'empty_column' => 0,
    ),
    'masquerade_as' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Block',
    ),
    'action::views_bulk_operations_user_cancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Cancel account',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change roles',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'active-blocked';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['empty'] = 'Never';
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: User: Masquerade As */
  $handler->display->display_options['fields']['masquerade_as']['id'] = 'masquerade_as';
  $handler->display->display_options['fields']['masquerade_as']['table'] = 'users';
  $handler->display->display_options['fields']['masquerade_as']['field'] = 'masquerade_as';
  $handler->display->display_options['fields']['masquerade_as']['label'] = '';
  $handler->display->display_options['fields']['masquerade_as']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['masquerade_as']['masquerade_views'] = array(
    'custom_destination' => 1,
    'destination' => 'user',
  );
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Users */
  $handler = $view->new_display('page', 'Users', 'users');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/people';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Users';
  $handler->display->display_options['menu']['weight'] = '-4';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['administration_users'] = array(
    t('Master'),
    t('Users'),
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
    t('- Choose an operation -'),
    t('Block'),
    t('Cancel account'),
    t('Change roles'),
    t('Name'),
    t('E-mail'),
    t('Roles'),
    t('Status'),
    t('Last access'),
    t('Never'),
    t('masquerade'),
  );
  $export['administration_users'] = $view;

  return $export;
}
