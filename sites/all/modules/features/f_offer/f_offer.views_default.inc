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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any capital_raising content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
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
  /* Sort criterion: Investerare: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'eck_investor';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_offer_investor_target_id';
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
  $handler->display->display_options['path'] = 'node/%/erbjudna';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Erbjudna';
  $handler->display->display_options['menu']['weight'] = '0';
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
    t('Investerare'),
    t('Namn'),
    t('All'),
    t('%1'),
  );
  $export['offers'] = $view;

  return $export;
}
