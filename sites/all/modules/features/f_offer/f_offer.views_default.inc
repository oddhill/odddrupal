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
  $handler->display->display_options['title'] = 'Kontaktlista';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'eck view offer offer entities';
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
  /* Field: Erbjudande: Teckningsförbindelse */
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

  /* Display: Kontaktlista */
  $handler = $view->new_display('page', 'Kontaktlista', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_shared_email' => 'field_shared_email',
    'views_send' => 'views_send',
    'id' => 'id',
    'type' => 'type',
    'title' => 'title',
    'field_shared_cell' => 'field_shared_cell',
    'field_shared_phone' => 'field_shared_phone',
    'field_offer_newem' => 'field_offer_newem',
    'field_offer_pp' => 'field_offer_pp',
    'field_offer_loan' => 'field_offer_loan',
    'field_offer_amount_guar' => 'field_offer_amount_guar',
    'field_offer_amount' => 'field_offer_amount',
    'field_offer_sum' => 'field_offer_sum',
    'field_offer_status' => 'field_offer_status',
    'field_offer_first_contact' => 'field_offer_first_contact',
    'field_offer_interested' => 'field_offer_interested',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_shared_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_send' => array(
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
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shared_cell' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shared_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_newem' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_pp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_loan' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_amount_guar' => array(
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
    'field_offer_sum' => array(
      'sortable' => 0,
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
    'field_offer_first_contact' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Lägg till fler';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = 'Lägg till fler investerare';
  $handler->display->display_options['header']['link']['path'] = 'node/!1/kontaktlista/lagg-till';
  $handler->display->display_options['header']['link']['class'] = 'add-more';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Inga investerare har lagts till för denna transaktion.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Send e-mail */
  $handler->display->display_options['fields']['views_send']['id'] = 'views_send';
  $handler->display->display_options['fields']['views_send']['table'] = 'views';
  $handler->display->display_options['fields']['views_send']['field'] = 'views_send';
  $handler->display->display_options['fields']['views_send']['label'] = '';
  $handler->display->display_options['fields']['views_send']['element_label_colon'] = FALSE;
  /* Field: Investerare: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Investerare: investor type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Investerare: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Namn';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'investor/[type]/[id]';
  /* Field: Erbjudande: Riktad nyemission */
  $handler->display->display_options['fields']['field_offer_newem']['id'] = 'field_offer_newem';
  $handler->display->display_options['fields']['field_offer_newem']['table'] = 'field_data_field_offer_newem';
  $handler->display->display_options['fields']['field_offer_newem']['field'] = 'field_offer_newem';
  $handler->display->display_options['fields']['field_offer_newem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_newem']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_newem']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'decimal_separator' => '.',
      'scale' => '2',
      'prefix_suffix' => 0,
    ),
  );
  /* Field: Erbjudande: Private Placement */
  $handler->display->display_options['fields']['field_offer_pp']['id'] = 'field_offer_pp';
  $handler->display->display_options['fields']['field_offer_pp']['table'] = 'field_data_field_offer_pp';
  $handler->display->display_options['fields']['field_offer_pp']['field'] = 'field_offer_pp';
  $handler->display->display_options['fields']['field_offer_pp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_pp']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_pp']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 0,
    ),
  );
  /* Field: Erbjudande: Brygglån */
  $handler->display->display_options['fields']['field_offer_loan']['id'] = 'field_offer_loan';
  $handler->display->display_options['fields']['field_offer_loan']['table'] = 'field_data_field_offer_loan';
  $handler->display->display_options['fields']['field_offer_loan']['field'] = 'field_offer_loan';
  $handler->display->display_options['fields']['field_offer_loan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_loan']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_loan']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 0,
    ),
  );
  /* Field: Erbjudande: Garantiåtagande */
  $handler->display->display_options['fields']['field_offer_amount_guar']['id'] = 'field_offer_amount_guar';
  $handler->display->display_options['fields']['field_offer_amount_guar']['table'] = 'field_data_field_offer_amount_guar';
  $handler->display->display_options['fields']['field_offer_amount_guar']['field'] = 'field_offer_amount_guar';
  $handler->display->display_options['fields']['field_offer_amount_guar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_amount_guar']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_amount_guar']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'decimal_separator' => ',',
      'scale' => '2',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Erbjudande: Teckningsförbindelse */
  $handler->display->display_options['fields']['field_offer_amount']['id'] = 'field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['table'] = 'field_data_field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['field'] = 'field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_amount']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_amount']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'decimal_separator' => ',',
      'scale' => '2',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Erbjudande: Summa */
  $handler->display->display_options['fields']['field_offer_sum']['id'] = 'field_offer_sum';
  $handler->display->display_options['fields']['field_offer_sum']['table'] = 'field_data_field_offer_sum';
  $handler->display->display_options['fields']['field_offer_sum']['field'] = 'field_offer_sum';
  $handler->display->display_options['fields']['field_offer_sum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_sum']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
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
  /* Field: Erbjudande: Första kontakt */
  $handler->display->display_options['fields']['field_offer_first_contact']['id'] = 'field_offer_first_contact';
  $handler->display->display_options['fields']['field_offer_first_contact']['table'] = 'field_data_field_offer_first_contact';
  $handler->display->display_options['fields']['field_offer_first_contact']['field'] = 'field_offer_first_contact';
  $handler->display->display_options['fields']['field_offer_first_contact']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_first_contact']['settings'] = array(
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
  /* Field: Erbjudande: Insynsinfo */
  $handler->display->display_options['fields']['field_offer_info_mail']['id'] = 'field_offer_info_mail';
  $handler->display->display_options['fields']['field_offer_info_mail']['table'] = 'field_data_field_offer_info_mail';
  $handler->display->display_options['fields']['field_offer_info_mail']['field'] = 'field_offer_info_mail';
  $handler->display->display_options['fields']['field_offer_info_mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_info_mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_info_mail']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Content: Insynsinformation utloggad */
  $handler->display->display_options['fields']['field_cap_rais_info_mail']['id'] = 'field_cap_rais_info_mail';
  $handler->display->display_options['fields']['field_cap_rais_info_mail']['table'] = 'field_data_field_cap_rais_info_mail';
  $handler->display->display_options['fields']['field_cap_rais_info_mail']['field'] = 'field_cap_rais_info_mail';
  $handler->display->display_options['fields']['field_cap_rais_info_mail']['relationship'] = 'field_offer_cap_rais_target_id';
  $handler->display->display_options['fields']['field_cap_rais_info_mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_rais_info_mail']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Insynsinformation';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if ($data->field_field_cap_rais_info_mail[0][raw][value]) {
print \'Info utloggad\';
}
else if ($data->field_field_offer_info_mail[0][raw][value]) {
print \'Info skickat\';
}
else {
  $node = node_load($data->node_field_data_field_offer_cap_rais_nid);
  $title = str_replace(\' \', \'-\', strtolower($node->title));

  print l(t(\'Skicka info\'), \'/offer/send-info/\' . $title . \'/\' . $data->id . \'/\' . $data->node_field_data_field_offer_cap_rais_nid . \'/\' . $data->eck_investor_field_data_field_offer_investor_id . \'/\'); 
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'node/%/kontaktlista';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Kontaktlista';
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
    'id_1' => 'id_1',
    'type' => 'type',
    'title' => 'title',
    'field_offer_interested_date' => 'field_offer_interested_date',
    'field_offer_newem' => 'field_offer_newem',
    'field_offer_pp' => 'field_offer_pp',
    'field_offer_loan' => 'field_offer_loan',
    'field_offer_amount_guar' => 'field_offer_amount_guar',
    'field_offer_amount' => 'field_offer_amount',
    'verification_status' => 'verification_status',
    'sign' => 'sign',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
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
    'id_1' => array(
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
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_interested_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_newem' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_pp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_loan' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_amount_guar' => array(
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
    'verification_status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sign' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Inga investerare är intresserade av denna transaktion. Gå till fliken <em>Kontaktlista</em> för att se alla tillagda investerare.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Field: Investerare: Id */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['id_1']['label'] = '';
  $handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_1']['separator'] = '';
  /* Field: Investerare: investor type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Investerare: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Namn';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'investor/[type]/[id_1]';
  /* Field: Erbjudande: Intresserad den */
  $handler->display->display_options['fields']['field_offer_interested_date']['id'] = 'field_offer_interested_date';
  $handler->display->display_options['fields']['field_offer_interested_date']['table'] = 'field_data_field_offer_interested_date';
  $handler->display->display_options['fields']['field_offer_interested_date']['field'] = 'field_offer_interested_date';
  $handler->display->display_options['fields']['field_offer_interested_date']['label'] = 'Intresserad sen';
  $handler->display->display_options['fields']['field_offer_interested_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Erbjudande: Riktad nyemission */
  $handler->display->display_options['fields']['field_offer_newem']['id'] = 'field_offer_newem';
  $handler->display->display_options['fields']['field_offer_newem']['table'] = 'field_data_field_offer_newem';
  $handler->display->display_options['fields']['field_offer_newem']['field'] = 'field_offer_newem';
  $handler->display->display_options['fields']['field_offer_newem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_newem']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_newem']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 0,
    ),
  );
  /* Field: Erbjudande: Private Placement */
  $handler->display->display_options['fields']['field_offer_pp']['id'] = 'field_offer_pp';
  $handler->display->display_options['fields']['field_offer_pp']['table'] = 'field_data_field_offer_pp';
  $handler->display->display_options['fields']['field_offer_pp']['field'] = 'field_offer_pp';
  $handler->display->display_options['fields']['field_offer_pp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_pp']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_pp']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 0,
    ),
  );
  /* Field: Erbjudande: Brygglån */
  $handler->display->display_options['fields']['field_offer_loan']['id'] = 'field_offer_loan';
  $handler->display->display_options['fields']['field_offer_loan']['table'] = 'field_data_field_offer_loan';
  $handler->display->display_options['fields']['field_offer_loan']['field'] = 'field_offer_loan';
  $handler->display->display_options['fields']['field_offer_loan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_loan']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_loan']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 0,
    ),
  );
  /* Field: Erbjudande: Garantiåtagande */
  $handler->display->display_options['fields']['field_offer_amount_guar']['id'] = 'field_offer_amount_guar';
  $handler->display->display_options['fields']['field_offer_amount_guar']['table'] = 'field_data_field_offer_amount_guar';
  $handler->display->display_options['fields']['field_offer_amount_guar']['field'] = 'field_offer_amount_guar';
  $handler->display->display_options['fields']['field_offer_amount_guar']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_amount_guar']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'decimal_separator' => ',',
      'scale' => '2',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Erbjudande: Teckningsförbindelse */
  $handler->display->display_options['fields']['field_offer_amount']['id'] = 'field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['table'] = 'field_data_field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['field'] = 'field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['type'] = 'editable';
  $handler->display->display_options['fields']['field_offer_amount']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'decimal_separator' => ',',
      'scale' => '2',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Erbjudande: Summa */
  $handler->display->display_options['fields']['field_offer_sum']['id'] = 'field_offer_sum';
  $handler->display->display_options['fields']['field_offer_sum']['table'] = 'field_data_field_offer_sum';
  $handler->display->display_options['fields']['field_offer_sum']['field'] = 'field_offer_sum';
  $handler->display->display_options['fields']['field_offer_sum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_sum']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Investerare: Status för kontrollen */
  $handler->display->display_options['fields']['verification_status']['id'] = 'verification_status';
  $handler->display->display_options['fields']['verification_status']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['verification_status']['field'] = 'verification_status';
  $handler->display->display_options['fields']['verification_status']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['verification_status']['label'] = 'Kontroll';
  /* Field: Erbjudande: Teckna investeraren */
  $handler->display->display_options['fields']['sign']['id'] = 'sign';
  $handler->display->display_options['fields']['sign']['table'] = 'eck_offer';
  $handler->display->display_options['fields']['sign']['field'] = 'sign';
  $handler->display->display_options['fields']['sign']['label'] = 'Teckning';
  $handler->display->display_options['fields']['sign']['element_label_class'] = 'views-field';
  $handler->display->display_options['fields']['sign']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sign']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['sign']['hide_alter_empty'] = FALSE;
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

  /* Display: Teckningslista */
  $handler = $view->new_display('page', 'Teckningslista', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teckningslista';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
    'field_offer_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Inga investerare har tecknats för denna transaktion. Gå till fliken <em>Kontaktlista</em> för att se alla tillagda investerare.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Investerare: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: Investerare: investor type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Investerare: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_investor';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_offer_investor_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Namn';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'investor/[type]/[id]';
  /* Field: Erbjudande: Tecknat den */
  $handler->display->display_options['fields']['field_offer_signed_date']['id'] = 'field_offer_signed_date';
  $handler->display->display_options['fields']['field_offer_signed_date']['table'] = 'field_data_field_offer_signed_date';
  $handler->display->display_options['fields']['field_offer_signed_date']['field'] = 'field_offer_signed_date';
  $handler->display->display_options['fields']['field_offer_signed_date']['label'] = 'Tecknad den';
  $handler->display->display_options['fields']['field_offer_signed_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Erbjudande: Garantiåtagande */
  $handler->display->display_options['fields']['field_offer_amount_guar']['id'] = 'field_offer_amount_guar';
  $handler->display->display_options['fields']['field_offer_amount_guar']['table'] = 'field_data_field_offer_amount_guar';
  $handler->display->display_options['fields']['field_offer_amount_guar']['field'] = 'field_offer_amount_guar';
  $handler->display->display_options['fields']['field_offer_amount_guar']['empty'] = '-';
  $handler->display->display_options['fields']['field_offer_amount_guar']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Erbjudande: Teckningsförbindelse */
  $handler->display->display_options['fields']['field_offer_amount']['id'] = 'field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['table'] = 'field_data_field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['field'] = 'field_offer_amount';
  $handler->display->display_options['fields']['field_offer_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_amount']['empty'] = '-';
  $handler->display->display_options['fields']['field_offer_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Erbjudande: Riktad nyemission */
  $handler->display->display_options['fields']['field_offer_newem']['id'] = 'field_offer_newem';
  $handler->display->display_options['fields']['field_offer_newem']['table'] = 'field_data_field_offer_newem';
  $handler->display->display_options['fields']['field_offer_newem']['field'] = 'field_offer_newem';
  $handler->display->display_options['fields']['field_offer_newem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_newem']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Erbjudande: Private Placement */
  $handler->display->display_options['fields']['field_offer_pp']['id'] = 'field_offer_pp';
  $handler->display->display_options['fields']['field_offer_pp']['table'] = 'field_data_field_offer_pp';
  $handler->display->display_options['fields']['field_offer_pp']['field'] = 'field_offer_pp';
  $handler->display->display_options['fields']['field_offer_pp']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Erbjudande: Brygglån */
  $handler->display->display_options['fields']['field_offer_loan']['id'] = 'field_offer_loan';
  $handler->display->display_options['fields']['field_offer_loan']['table'] = 'field_data_field_offer_loan';
  $handler->display->display_options['fields']['field_offer_loan']['field'] = 'field_offer_loan';
  $handler->display->display_options['fields']['field_offer_loan']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Erbjudande: Tecknad (field_offer_signed) */
  $handler->display->display_options['filters']['field_offer_signed_value']['id'] = 'field_offer_signed_value';
  $handler->display->display_options['filters']['field_offer_signed_value']['table'] = 'field_data_field_offer_signed';
  $handler->display->display_options['filters']['field_offer_signed_value']['field'] = 'field_offer_signed_value';
  $handler->display->display_options['filters']['field_offer_signed_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'node/%/teckningslista';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Teckningslista';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['offers'] = array(
    t('Master'),
    t('Kontaktlista'),
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
    t('Teckningsförbindelse'),
    t('All'),
    t('%1'),
    t('Lägg till fler'),
    t('Lägg till fler investerare'),
    t('Inga investerare har lagts till för denna transaktion.'),
    t('.'),
    t('Riktad nyemission'),
    t('Private Placement'),
    t('Brygglån'),
    t('Garantiåtagande'),
    t('Summa'),
    t('Första kontakt'),
    t('Insynsinfo'),
    t('Insynsinformation utloggad'),
    t('Insynsinformation'),
    t('Intressenter'),
    t('Inga investerare är intresserade av denna transaktion. Gå till fliken <em>Kontaktlista</em> för att se alla tillagda investerare.'),
    t('Intresserad sen'),
    t('Kontroll'),
    t('Teckning'),
    t('Teckningslista'),
    t('Inga investerare har tecknats för denna transaktion. Gå till fliken <em>Kontaktlista</em> för att se alla tillagda investerare.'),
    t(','),
    t('Tecknad den'),
    t('-'),
  );
  $export['offers'] = $view;

  return $export;
}
