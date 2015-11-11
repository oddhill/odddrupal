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
  $view->name = 'transactions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Transaktioner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Transaktioner';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'transaction' => 'transaction',
  );

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
  $handler->display->display_options['relationships']['field_transaction_person_target_id']['id'] = 'field_transaction_person_target_id';
  $handler->display->display_options['relationships']['field_transaction_person_target_id']['table'] = 'field_data_field_transaction_person';
  $handler->display->display_options['relationships']['field_transaction_person_target_id']['field'] = 'field_transaction_person_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_transaction_offer_target_id']['id'] = 'field_transaction_offer_target_id';
  $handler->display->display_options['relationships']['field_transaction_offer_target_id']['table'] = 'field_data_field_transaction_offer';
  $handler->display->display_options['relationships']['field_transaction_offer_target_id']['field'] = 'field_transaction_offer_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Transaction id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_transaction_person_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Person id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'field_transaction_offer_target_id';
  $handler->display->display_options['fields']['nid_2']['label'] = 'Erbjudande id';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_transaction_fe_sign']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_transaction_le_warrant']['element_label_colon'] = FALSE;
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
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Insynsinfo';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$node_tr = node_load($row->nid);
$node_of = node_load($row->nid_2);

if ($node_of->field_offer_logout_info[\'und\'][0][value]) {
 print \'Utloggad\';
}
else if ($node_tr->field_transaction_info[\'und\'][0][value]) {
  print \'Skickad\';
}
else {
  print l(\'Skicka\', "offer/send-info/$row->nid");
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Erbjudande */
  $handler->display->display_options['fields']['field_transaction_info_offer']['id'] = 'field_transaction_info_offer';
  $handler->display->display_options['fields']['field_transaction_info_offer']['table'] = 'field_data_field_transaction_info_offer';
  $handler->display->display_options['fields']['field_transaction_info_offer']['field'] = 'field_transaction_info_offer';
  $handler->display->display_options['fields']['field_transaction_info_offer']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_transaction_info_offer']['alter']['text'] = 'Skicka';
  $handler->display->display_options['fields']['field_transaction_info_offer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_transaction_info_offer']['alter']['path'] = 'test.php';
  $handler->display->display_options['fields']['field_transaction_info_offer']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['path'] = 'node/%/kontaktlista';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Kontaklista';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['transactions'] = array(
    t('Master'),
    t('Transaktioner'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Kontaktlista'),
    t('Lägg till fler'),
    t('Lägg till fler kontaktpersoner'),
    t('Content entity referenced from field_transaction_person'),
    t('Content entity referenced from field_transaction_offer'),
    t('Transaction id'),
    t('Person id'),
    t('Erbjudande id'),
    t('Kontaktperson'),
    t('Teckningsförbindelse'),
    t('Garantiåtagande'),
    t('Brygglån'),
    t('Blockpost'),
    t('Summa'),
    t('Anteckning'),
    t('Första kontakt'),
    t('Insynsinfo'),
    t('Erbjudande'),
    t('Skicka'),
    t('Intresserad'),
    t('All'),
  );
  $export['transactions'] = $view;

  return $export;
}