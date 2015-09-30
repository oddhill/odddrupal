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
    'transaction_history' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
    'transaction_history' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
  $ds_fieldsetting->id = 'node|kontrolluppgift_privat|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'kontrolluppgift_privat';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'handle_control' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|kontrolluppgift_privat|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|kontrolluppgift|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'kontrolluppgift';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'handle_control' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
  $ds_field->field = 'handle_control';
  $ds_field->label = 'Hantera kontroll';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php if (arg(3) == \'kontroll\') { ?>
<form action="/node/<?php print $entity->nid; ?>/revisions" method="POST">
<input name="private" type="submit" value="Hantera kontroll" />
</form>
<?php } ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['handle_control'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'transaction_history';
  $ds_field->label = 'Transaktionshistoria';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'investor' => 'investor',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|aadbde9fc19498653ca73f9fe62d3aa2',
    'block_render' => '1',
  );
  $export['transaction_history'] = $ds_field;

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
  $ds_layout->id = 'contact_person|contact_person|full';
  $ds_layout->entity_type = 'contact_person';
  $ds_layout->bundle = 'contact_person';
  $ds_layout->view_mode = 'full';
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
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['contact_person|contact_person|full'] = $ds_layout;

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
        7 => 'field_shared_interests',
        8 => 'transaction_history',
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
      'field_shared_interests' => 'ds_content',
      'transaction_history' => 'ds_content',
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
        4 => 'field_shared_notes',
        5 => 'field_shared_interests',
        6 => 'transaction_history',
        7 => 'field_invest_cont_person_prvt',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_shared_custresp' => 'ds_content',
      'field_shared_industries' => 'ds_content',
      'field_shared_address' => 'ds_content',
      'field_shared_notes' => 'ds_content',
      'field_shared_interests' => 'ds_content',
      'transaction_history' => 'ds_content',
      'field_invest_cont_person_prvt' => 'ds_content',
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
  $ds_layout->id = 'node|kontrolluppgift_privat|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'kontrolluppgift_privat';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ctrl_ok',
        2 => 'group_ctrl_upp',
        3 => 'group_ctrl_ptv',
        4 => 'group_ctrl_id',
        5 => 'group_ctrl_ext',
        6 => 'group_ctrl_eu',
        7 => 'group_ctrl_credit',
        8 => 'group_ctrl_comp',
        9 => 'group_ctrl_oth',
        10 => 'handle_control',
        11 => 'field_ctrl_files_upp',
        12 => 'field_ctrl_files_ptv',
        13 => 'field_ctrl_app_upp',
        14 => 'field_ctrl_app_ptv',
        15 => 'field_ctrl_files_id',
        16 => 'field_ctrl_date_upp',
        17 => 'field_ctrl_date_ptv',
        18 => 'field_ctrl_app_id',
        19 => 'field_ctrl_files_ext',
        20 => 'field_ctrl_note_upp',
        21 => 'field_ctrl_note_ptv',
        22 => 'field_ctrl_files_eu',
        23 => 'field_ctrl_date_id',
        24 => 'field_ctrl_app_ext',
        25 => 'field_ctrl_files_credit',
        26 => 'field_ctrl_note_id',
        27 => 'field_ctrl_app_eu',
        28 => 'field_ctrl_date_ext',
        29 => 'field_ctrl_date_eu',
        30 => 'field_ctrl_app_credit',
        31 => 'field_ctrl_files_comp',
        32 => 'field_ctrl_note_ext',
        33 => 'field_ctrl_note_eu',
        34 => 'field_ctrl_date_credit',
        35 => 'field_ctrl_files_oth',
        36 => 'field_ctrl_app_comp',
        37 => 'field_ctrl_date_comp',
        38 => 'field_ctrl_app_oth',
        39 => 'field_ctrl_note_credit',
        40 => 'field_ctrl_date_oth',
        41 => 'field_ctrl_note_comp',
        42 => 'field_ctrl_note_oth',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ctrl_ok' => 'ds_content',
      'group_ctrl_upp' => 'ds_content',
      'group_ctrl_ptv' => 'ds_content',
      'group_ctrl_id' => 'ds_content',
      'group_ctrl_ext' => 'ds_content',
      'group_ctrl_eu' => 'ds_content',
      'group_ctrl_credit' => 'ds_content',
      'group_ctrl_comp' => 'ds_content',
      'group_ctrl_oth' => 'ds_content',
      'handle_control' => 'ds_content',
      'field_ctrl_files_upp' => 'ds_content',
      'field_ctrl_files_ptv' => 'ds_content',
      'field_ctrl_app_upp' => 'ds_content',
      'field_ctrl_app_ptv' => 'ds_content',
      'field_ctrl_files_id' => 'ds_content',
      'field_ctrl_date_upp' => 'ds_content',
      'field_ctrl_date_ptv' => 'ds_content',
      'field_ctrl_app_id' => 'ds_content',
      'field_ctrl_files_ext' => 'ds_content',
      'field_ctrl_note_upp' => 'ds_content',
      'field_ctrl_note_ptv' => 'ds_content',
      'field_ctrl_files_eu' => 'ds_content',
      'field_ctrl_date_id' => 'ds_content',
      'field_ctrl_app_ext' => 'ds_content',
      'field_ctrl_files_credit' => 'ds_content',
      'field_ctrl_note_id' => 'ds_content',
      'field_ctrl_app_eu' => 'ds_content',
      'field_ctrl_date_ext' => 'ds_content',
      'field_ctrl_date_eu' => 'ds_content',
      'field_ctrl_app_credit' => 'ds_content',
      'field_ctrl_files_comp' => 'ds_content',
      'field_ctrl_note_ext' => 'ds_content',
      'field_ctrl_note_eu' => 'ds_content',
      'field_ctrl_date_credit' => 'ds_content',
      'field_ctrl_files_oth' => 'ds_content',
      'field_ctrl_app_comp' => 'ds_content',
      'field_ctrl_date_comp' => 'ds_content',
      'field_ctrl_app_oth' => 'ds_content',
      'field_ctrl_note_credit' => 'ds_content',
      'field_ctrl_date_oth' => 'ds_content',
      'field_ctrl_note_comp' => 'ds_content',
      'field_ctrl_note_oth' => 'ds_content',
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
  $export['node|kontrolluppgift_privat|full'] = $ds_layout;

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
        1 => 'field_ctrl_ok',
        2 => 'group_ctrl_upp',
        3 => 'group_ctrl_ptv',
        4 => 'group_ctrl_id',
        5 => 'group_ctrl_id_real',
        6 => 'group_ctrl_reg',
        7 => 'group_ctrl_eu',
        8 => 'group_ctrl_credit',
        9 => 'group_ctrl_comp',
        10 => 'group_ctrl_oth',
        11 => 'field_ctrl_files_reg',
        12 => 'field_ctrl_files_eu',
        13 => 'handle_control',
        14 => 'field_ctrl_app_reg',
        15 => 'field_ctrl_files_credit',
        16 => 'field_ctrl_app_eu',
        17 => 'field_ctrl_date_reg',
        18 => 'field_ctrl_note_reg',
        19 => 'field_ctrl_files_id_real',
        20 => 'field_ctrl_date_eu',
        21 => 'field_ctrl_app_credit',
        22 => 'field_ctrl_note_eu',
        23 => 'field_ctrl_date_credit',
        24 => 'field_ctrl_files_id',
        25 => 'field_ctrl_app_id_real',
        26 => 'field_ctrl_date_id_real',
        27 => 'field_ctrl_files_comp',
        28 => 'field_ctrl_note_credit',
        29 => 'field_ctrl_app_id',
        30 => 'field_ctrl_files_oth',
        31 => 'field_ctrl_app_comp',
        32 => 'field_ctrl_date_id',
        33 => 'field_ctrl_note_id_real',
        34 => 'field_ctrl_app_oth',
        35 => 'field_ctrl_files_ptv',
        36 => 'field_ctrl_date_comp',
        37 => 'field_ctrl_note_id',
        38 => 'field_ctrl_date_oth',
        39 => 'field_ctrl_note_comp',
        40 => 'field_ctrl_app_ptv',
        41 => 'field_ctrl_note_oth',
        42 => 'field_ctrl_date_ptv',
        43 => 'field_ctrl_note_ptv',
        44 => 'field_ctrl_files_upp',
        45 => 'field_ctrl_app_upp',
        46 => 'field_ctrl_date_upp',
        47 => 'field_ctrl_note_upp',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ctrl_ok' => 'ds_content',
      'group_ctrl_upp' => 'ds_content',
      'group_ctrl_ptv' => 'ds_content',
      'group_ctrl_id' => 'ds_content',
      'group_ctrl_id_real' => 'ds_content',
      'group_ctrl_reg' => 'ds_content',
      'group_ctrl_eu' => 'ds_content',
      'group_ctrl_credit' => 'ds_content',
      'group_ctrl_comp' => 'ds_content',
      'group_ctrl_oth' => 'ds_content',
      'field_ctrl_files_reg' => 'ds_content',
      'field_ctrl_files_eu' => 'ds_content',
      'handle_control' => 'ds_content',
      'field_ctrl_app_reg' => 'ds_content',
      'field_ctrl_files_credit' => 'ds_content',
      'field_ctrl_app_eu' => 'ds_content',
      'field_ctrl_date_reg' => 'ds_content',
      'field_ctrl_note_reg' => 'ds_content',
      'field_ctrl_files_id_real' => 'ds_content',
      'field_ctrl_date_eu' => 'ds_content',
      'field_ctrl_app_credit' => 'ds_content',
      'field_ctrl_note_eu' => 'ds_content',
      'field_ctrl_date_credit' => 'ds_content',
      'field_ctrl_files_id' => 'ds_content',
      'field_ctrl_app_id_real' => 'ds_content',
      'field_ctrl_date_id_real' => 'ds_content',
      'field_ctrl_files_comp' => 'ds_content',
      'field_ctrl_note_credit' => 'ds_content',
      'field_ctrl_app_id' => 'ds_content',
      'field_ctrl_files_oth' => 'ds_content',
      'field_ctrl_app_comp' => 'ds_content',
      'field_ctrl_date_id' => 'ds_content',
      'field_ctrl_note_id_real' => 'ds_content',
      'field_ctrl_app_oth' => 'ds_content',
      'field_ctrl_files_ptv' => 'ds_content',
      'field_ctrl_date_comp' => 'ds_content',
      'field_ctrl_note_id' => 'ds_content',
      'field_ctrl_date_oth' => 'ds_content',
      'field_ctrl_note_comp' => 'ds_content',
      'field_ctrl_app_ptv' => 'ds_content',
      'field_ctrl_note_oth' => 'ds_content',
      'field_ctrl_date_ptv' => 'ds_content',
      'field_ctrl_note_ptv' => 'ds_content',
      'field_ctrl_files_upp' => 'ds_content',
      'field_ctrl_app_upp' => 'ds_content',
      'field_ctrl_date_upp' => 'ds_content',
      'field_ctrl_note_upp' => 'ds_content',
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
