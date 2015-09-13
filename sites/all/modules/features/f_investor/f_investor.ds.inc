<?php
/**
 * @file
 * f_investor.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_investor_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'investor|company|default';
  $ds_fieldsetting->entity_type = 'investor';
  $ds_fieldsetting->bundle = 'company';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['investor|company|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'investor|lead|default';
  $ds_fieldsetting->entity_type = 'investor';
  $ds_fieldsetting->bundle = 'lead';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'upgrade_lead' => array(
      'weight' => '7',
      'label' => 'above',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['investor|lead|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'investor|person|default';
  $ds_fieldsetting->entity_type = 'investor';
  $ds_fieldsetting->bundle = 'person';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['investor|person|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|kontrolluppgift|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'kontrolluppgift';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|kontrolluppgift|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|transaction_history|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'transaction_history';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|transaction_history|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|intressen|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'intressen';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|intressen|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function f_investor_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'upgrade_lead';
  $ds_field->label = 'Uppgradera lead';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'investor' => 'investor',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<form action="/investerare/skapa/privatperson?destination=investerare/lista" method="POST">
<input name="upgrade_lead" type="hidden" value="1" />
<input name="lead_id" type="hidden" value="<?php print $entity->id; ?>" />
<input name="private" type="submit" value="Uppgradera lead till investerare" />
</form>
<form action="/investerare/skapa/bolag?destination=investerare/lista" method="POST">
<input name="upgrade_lead" type="hidden" value="1" />
<input name="lead_id" type="hidden" value="<?php print $entity->id; ?>" />
<input name="company" type="submit" value="Uppgradera lead till bolag" />
</form>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['upgrade_lead'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_investor_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'contact_person|contact_person|default';
  $ds_layout->entity_type = 'contact_person';
  $ds_layout->bundle = 'contact_person';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_comp_cont_name',
        1 => 'field_comp_cont_mail',
        2 => 'field_comp_cont_cell',
        3 => 'field_comp_cont_phone',
        4 => 'field_comp_cont_fax',
      ),
    ),
    'fields' => array(
      'field_comp_cont_name' => 'ds_content',
      'field_comp_cont_mail' => 'ds_content',
      'field_comp_cont_cell' => 'ds_content',
      'field_comp_cont_phone' => 'ds_content',
      'field_comp_cont_fax' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['contact_person|contact_person|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'investor|company|default';
  $ds_layout->entity_type = 'investor';
  $ds_layout->bundle = 'company';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_shared_custresp',
        2 => 'field_shared_industries',
        3 => 'field_shared_address',
        4 => 'field_shared_notes',
        5 => 'field_invest_comp_own',
        6 => 'field_invest_cont_person',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_shared_custresp' => 'ds_content',
      'field_shared_industries' => 'ds_content',
      'field_shared_address' => 'ds_content',
      'field_shared_notes' => 'ds_content',
      'field_invest_comp_own' => 'ds_content',
      'field_invest_cont_person' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['investor|company|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'investor|company|investor_verification';
  $ds_layout->entity_type = 'investor';
  $ds_layout->bundle = 'company';
  $ds_layout->view_mode = 'investor_verification';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_shared_veri_id',
        1 => 'field_shared_veri_register',
        2 => 'field_shared_veri_eu',
        3 => 'field_shared_veri_credit',
        4 => 'field_shared_veri_upp',
        5 => 'field_shared_veri_ovr',
        6 => 'field_shared_veri_ptv',
        7 => 'field_shared_veri_id_real',
        8 => 'field_shared_veri_komp',
      ),
    ),
    'fields' => array(
      'field_shared_veri_id' => 'ds_content',
      'field_shared_veri_register' => 'ds_content',
      'field_shared_veri_eu' => 'ds_content',
      'field_shared_veri_credit' => 'ds_content',
      'field_shared_veri_upp' => 'ds_content',
      'field_shared_veri_ovr' => 'ds_content',
      'field_shared_veri_ptv' => 'ds_content',
      'field_shared_veri_id_real' => 'ds_content',
      'field_shared_veri_komp' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['investor|company|investor_verification'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'investor|lead|default';
  $ds_layout->entity_type = 'investor';
  $ds_layout->bundle = 'lead';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_lead_first_name',
        2 => 'field_lead_last_name',
        3 => 'field_shared_email',
        4 => 'field_shared_phone',
        5 => 'field_shared_cell',
        6 => 'field_shared_notes',
        7 => 'upgrade_lead',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_lead_first_name' => 'ds_content',
      'field_lead_last_name' => 'ds_content',
      'field_shared_email' => 'ds_content',
      'field_shared_phone' => 'ds_content',
      'field_shared_cell' => 'ds_content',
      'field_shared_notes' => 'ds_content',
      'upgrade_lead' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['investor|lead|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'investor|person|default';
  $ds_layout->entity_type = 'investor';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_shared_custresp',
        2 => 'field_shared_industries',
        3 => 'field_shared_address',
        4 => 'field_shared_email',
        5 => 'field_shared_cell',
        6 => 'field_shared_phone',
        7 => 'field_shared_fax',
        8 => 'field_shared_notes',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_shared_custresp' => 'ds_content',
      'field_shared_industries' => 'ds_content',
      'field_shared_address' => 'ds_content',
      'field_shared_email' => 'ds_content',
      'field_shared_cell' => 'ds_content',
      'field_shared_phone' => 'ds_content',
      'field_shared_fax' => 'ds_content',
      'field_shared_notes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['investor|person|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'investor|person|investor_verification';
  $ds_layout->entity_type = 'investor';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'investor_verification';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_shared_veri_upp',
        1 => 'field_shared_veri_ptv',
        2 => 'field_shared_veri_id',
        3 => 'field_shared_veri_address',
        4 => 'field_shared_veri_eu',
        5 => 'field_shared_veri_credit',
        6 => 'field_shared_veri_komp',
        7 => 'field_shared_veri_ovr',
      ),
    ),
    'fields' => array(
      'field_shared_veri_upp' => 'ds_content',
      'field_shared_veri_ptv' => 'ds_content',
      'field_shared_veri_id' => 'ds_content',
      'field_shared_veri_address' => 'ds_content',
      'field_shared_veri_eu' => 'ds_content',
      'field_shared_veri_credit' => 'ds_content',
      'field_shared_veri_komp' => 'ds_content',
      'field_shared_veri_ovr' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['investor|person|investor_verification'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|kontrolluppgift|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'kontrolluppgift';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_control_files',
        2 => 'field_control_approved',
        3 => 'field_control_date',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_control_files' => 'ds_content',
      'field_control_approved' => 'ds_content',
      'field_control_date' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|kontrolluppgift|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|transaction_history|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'transaction_history';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_transaction_company',
        2 => 'field_transaction_id',
        3 => 'field_transaction_title',
        4 => 'field_transaction_invest_name',
        5 => 'field_transaction_investor_id',
        6 => 'field_transaction_max_invest',
        7 => 'field_transaction_amount_guar',
        8 => 'field_transaction_amount',
        9 => 'field_transaction_newem',
        10 => 'field_transaction_pp',
        11 => 'field_transaction_loan',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_transaction_company' => 'ds_content',
      'field_transaction_id' => 'ds_content',
      'field_transaction_title' => 'ds_content',
      'field_transaction_invest_name' => 'ds_content',
      'field_transaction_investor_id' => 'ds_content',
      'field_transaction_max_invest' => 'ds_content',
      'field_transaction_amount_guar' => 'ds_content',
      'field_transaction_amount' => 'ds_content',
      'field_transaction_newem' => 'ds_content',
      'field_transaction_pp' => 'ds_content',
      'field_transaction_loan' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|transaction_history|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|intressen|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'intressen';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|intressen|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function f_investor_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'investor_verification';
  $ds_view_mode->label = 'Kontroll';
  $ds_view_mode->entities = array(
    'investor' => 'investor',
  );
  $export['investor_verification'] = $ds_view_mode;

  return $export;
}
