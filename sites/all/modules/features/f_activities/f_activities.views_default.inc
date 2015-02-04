<?php
/**
 * @file
 * f_activities.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_activities_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aktiviteter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Aktiviteter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aktivitet';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Message: Rendered Message */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_message';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';

  /* Display: Transaktion */
  $handler = $view->new_display('block', 'Transaktion', 'capital_raising');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Message: Transaktion (field_shared_cap_rais) */
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['id'] = 'field_shared_cap_rais_target_id';
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['table'] = 'field_data_field_shared_cap_rais';
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['field'] = 'field_shared_cap_rais_target_id';
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_shared_cap_rais_target_id']['validate_options']['types'] = array(
    'capital_raising' => 'capital_raising',
  );

  /* Display: Investerare */
  $handler = $view->new_display('block', 'Investerare', 'investor');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Message: Investerare (field_shared_investor) */
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['id'] = 'field_shared_investor_target_id';
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['table'] = 'field_data_field_shared_investor';
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['field'] = 'field_shared_investor_target_id';
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_shared_investor_target_id']['validate']['type'] = 'numeric';
  $translatables['aktiviteter'] = array(
    t('Master'),
    t('Aktivitet'),
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
    t('Rendered Message'),
    t('Transaktion'),
    t('All'),
    t('Investerare'),
  );
  $export['aktiviteter'] = $view;

  return $export;
}
