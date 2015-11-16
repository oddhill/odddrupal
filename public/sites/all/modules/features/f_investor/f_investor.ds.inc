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
  $ds_fieldsetting->id = 'node|investor_bolag|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'investor_bolag';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|investor_bolag|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|investor_company|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'investor_company';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|investor_company|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|investor_private|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'investor_private';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|investor_private|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|investor_privat|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'investor_privat';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|investor_privat|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'investors' => array(
      'weight' => '11',
      'label' => 'above',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|person|full'] = $ds_fieldsetting;

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
  $ds_field->field = 'investors';
  $ds_field->label = 'Avtalsparter';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'person|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
$results = db_query("SELECT n.title AS name, a.alias AS alias FROM node AS n INNER JOIN field_data_field_shared_cont_pers AS u ON (n.nid = u.entity_id) INNER JOIN url_alias AS a ON (a.source = CONCAT(\'node/\', u.entity_id)) WHERE u.field_shared_cont_pers_target_id = :tid", array(\':tid\' => arg(1)))->fetchAll();

if ($results) {
  print "<ul>";
  foreach ($results as $key => $res) {
    print "<li>" . l($res->name, $res->alias) . "</li>";
  }
  print "</ul>";
}
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['investors'] = $ds_field;

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
  $ds_layout->id = 'node|ctrl|control';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ctrl';
  $ds_layout->view_mode = 'control';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ctrl_files',
        1 => 'field_ctrl_notes',
        2 => 'field_ctrl_app',
        3 => 'field_ctrl_date',
      ),
    ),
    'fields' => array(
      'field_ctrl_files' => 'ds_content',
      'field_ctrl_notes' => 'ds_content',
      'field_ctrl_app' => 'ds_content',
      'field_ctrl_date' => 'ds_content',
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
  $export['node|ctrl|control'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|investor_bolag|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'investor_bolag';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_shared_cust_id',
        2 => 'field_investor_comp_org_nbr',
        3 => 'field_investor_comp_cont_pers',
        4 => 'field_investor_comp_owners',
        5 => 'field_investor_comp_real',
        6 => 'field_investor_comp_address',
        7 => 'field_investor_comp_notes',
        8 => 'field_investor_comp_ctrl_ua',
        9 => 'field_investor_comp_ctrl_ptv',
        10 => 'field_investor_comp_ctrl_cred',
        11 => 'field_investor_comp_ctrl_reg',
        12 => 'field_investor_comp_ctrl_oth',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_shared_cust_id' => 'ds_content',
      'field_investor_comp_org_nbr' => 'ds_content',
      'field_investor_comp_cont_pers' => 'ds_content',
      'field_investor_comp_owners' => 'ds_content',
      'field_investor_comp_real' => 'ds_content',
      'field_investor_comp_address' => 'ds_content',
      'field_investor_comp_notes' => 'ds_content',
      'field_investor_comp_ctrl_ua' => 'ds_content',
      'field_investor_comp_ctrl_ptv' => 'ds_content',
      'field_investor_comp_ctrl_cred' => 'ds_content',
      'field_investor_comp_ctrl_reg' => 'ds_content',
      'field_investor_comp_ctrl_oth' => 'ds_content',
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
  $export['node|investor_bolag|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|investor_company|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'investor_company';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_shared_cust_id',
        2 => 'field_investor_comp_org_nbr',
        3 => 'field_investor_comp_owners',
        4 => 'field_investor_comp_real',
        5 => 'field_investor_comp_address',
        6 => 'field_investor_comp_notes',
        7 => 'field_investor_shared_ctrl_ua',
        8 => 'field_investor_shared_ctrl_ptv',
        9 => 'field_investor_shared_ctrl_cred',
        10 => 'field_investor_shared_ctrl_ext',
        11 => 'field_investor_shared_ctrl_oth',
        12 => 'verification_status',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_shared_cust_id' => 'ds_content',
      'field_investor_comp_org_nbr' => 'ds_content',
      'field_investor_comp_owners' => 'ds_content',
      'field_investor_comp_real' => 'ds_content',
      'field_investor_comp_address' => 'ds_content',
      'field_investor_comp_notes' => 'ds_content',
      'field_investor_shared_ctrl_ua' => 'ds_content',
      'field_investor_shared_ctrl_ptv' => 'ds_content',
      'field_investor_shared_ctrl_cred' => 'ds_content',
      'field_investor_shared_ctrl_ext' => 'ds_content',
      'field_investor_shared_ctrl_oth' => 'ds_content',
      'verification_status' => 'ds_content',
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
  $export['node|investor_company|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|investor_private|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'investor_private';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_shared_cust_id',
        2 => 'field_shared_cont_pers',
        3 => 'field_invest_pvt_notes',
        4 => 'field_investor_shared_ctrl_ua',
        5 => 'field_investor_shared_ctrl_ptv',
        6 => 'field_investor_shared_ctrl_cred',
        7 => 'field_investor_shared_ctrl_ext',
        8 => 'field_investor_shared_ctrl_oth',
        9 => 'verification_status',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_shared_cust_id' => 'ds_content',
      'field_shared_cont_pers' => 'ds_content',
      'field_invest_pvt_notes' => 'ds_content',
      'field_investor_shared_ctrl_ua' => 'ds_content',
      'field_investor_shared_ctrl_ptv' => 'ds_content',
      'field_investor_shared_ctrl_cred' => 'ds_content',
      'field_investor_shared_ctrl_ext' => 'ds_content',
      'field_investor_shared_ctrl_oth' => 'ds_content',
      'verification_status' => 'ds_content',
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
  $export['node|investor_private|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|investor_privat|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'investor_privat';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_shared_cust_id',
        2 => 'field_shared_cont_pers',
        3 => 'field_invest_pvt_notes',
        4 => 'field_invest_pvt_ctrl_ua',
        5 => 'field_invest_pvt_ctrl_ptv',
        6 => 'field_invest_pvt_ctrl_cred',
        7 => 'field_invest_pvt_ctrl_ext',
        8 => 'field_invest_pvt_ctrl_oth',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_shared_cust_id' => 'ds_content',
      'field_shared_cont_pers' => 'ds_content',
      'field_invest_pvt_notes' => 'ds_content',
      'field_invest_pvt_ctrl_ua' => 'ds_content',
      'field_invest_pvt_ctrl_ptv' => 'ds_content',
      'field_invest_pvt_ctrl_cred' => 'ds_content',
      'field_invest_pvt_ctrl_ext' => 'ds_content',
      'field_invest_pvt_ctrl_oth' => 'ds_content',
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
  $export['node|investor_privat|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|control';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'control';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_user_id_ctrl',
      ),
    ),
    'fields' => array(
      'field_user_id_ctrl' => 'ds_content',
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
  $export['node|person|control'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_user_owner',
        2 => 'field_user_ssn',
        3 => 'field_user_id_address',
        4 => 'field_user_mail',
        5 => 'field_user_cell',
        6 => 'field_user_phone',
        7 => 'field_user_fax',
        8 => 'field_user_branches',
        9 => 'field_user_interests',
        10 => 'field_user_notes',
        11 => 'investors',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_user_owner' => 'ds_content',
      'field_user_ssn' => 'ds_content',
      'field_user_id_address' => 'ds_content',
      'field_user_mail' => 'ds_content',
      'field_user_cell' => 'ds_content',
      'field_user_phone' => 'ds_content',
      'field_user_fax' => 'ds_content',
      'field_user_branches' => 'ds_content',
      'field_user_interests' => 'ds_content',
      'field_user_notes' => 'ds_content',
      'investors' => 'ds_content',
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
  $export['node|person|full'] = $ds_layout;

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
