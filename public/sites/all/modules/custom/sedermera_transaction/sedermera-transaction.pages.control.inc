<?php

/**
 * Ajax reloads div content
 * @param int $offer_id
 *   Nid of offer to reload control list for
 * @return array ajax reload
 */
function sedermera_transaction_reload_controller($offer_id) {
  // Generate new table
  $table = sedermera_transaction_control($offer_id);
  return transaction_ajax_callback('.offer-controller-list', render($table));
}

/**
 * Render control table
 * @return Rendarable array
 *   Rendarable table of the comtrol list
 */
function sedermera_transaction_control() {
  // Load all transaction ids corresponding to the current offer
  $transactions = _get_control_transactions(arg(1));

  // If no transactions exists for the offer present empty table with no content
  if (empty($transactions)) {
    return array(
      '#prefix' => '<div class="view-empty">',
      '#markup' => 'Det finns inga transaktioner',
      '#suffix' => '</div>',
    );
  }
  else {
    // Load the current offer
    $offer = node_load(arg(1));

    // Array of active investment types used in the offer
    $type_investment = _type_investment($offer);

    // Arrays holding the content used to build the table
    $header = array();
    $rows = array();

    // Generate the table header
    _generate_control_header_row($header);

    // Generate a group for each contact person and its investors
    foreach ($transactions as $transaction_nid) {
      // Load the transaction
      $transaction = node_load($transaction_nid);

      // Generate contactperson head row
      _generate_control_contact_person_head_row($rows, $transaction, $type_investment);

      // Generate the investor rows
      foreach ($transaction->field_transaction_investor as $investor_transactions) {

        // Contains agreements for the transaction
        $agreements = array();

        // Checks if there are any agreements for the investor
        foreach ($investor_transactions as $key => $value) {
          $agreement = _get_agreements_for_investor($value['target_id']);

          if (!empty($agreement)) {
            $agreements[$value['target_id']] = $agreement;
          }
        }

        // Generate investor head row for agreements
        foreach ($agreements as $key => $agreement) {
          _generate_control_investor_rows($rows, $key, $type_investment, $transaction);

          // Generate rows for all agreements for the transaction on this offer.
          foreach ($agreement as $value) {
            _generate_control_agreement_rows($rows, $value, $key, $transaction);
          }
          _generate_control_empty_row($rows, $transaction);
        }
      }
    }

    // Add a class to the last table row.
    end($rows);
    $last_key = key($rows);
    $rows[$last_key]['class'][] = 'last-row';

    // Generate rendarable array for the table and return it. We'll need to
    // attach the editablefields library since the checkbox for "Tecka" might
    // appear after the table is reloaded, but that callback doesn't add the
    // required JS to the output.
    return array(
      '#theme' => 'table',
      '#header' => $header,
      '#rows' => $rows,
      '#prefix' => '<div class="offer-controller-list"><div id="controller-list" class="table-wrapper">',
      '#suffix' => '</div></div>',
      '#attached' => array(
        'library' => array(
          array('editablefields', 'editablefields'),
          array('system', 'jquery.form'),
          array('system', 'drupal.ajax'),
        ),
      ),
    );
  }
}

/**
 * Generates the header row for control
 * @param array &$header
 *   To store the header in
 */
function _generate_control_header_row(array &$header) {
  // Collapsible column
  $header[] = array(
    'class' => array('table-head', 'collapsible-head'),
    'data' => '<span class="icon"></span>',
  );

  // Name column
  $header[] = array(
    'data' => 'Kontaktperson',
    'class' => array('table-head')
  );

  // Summation column
  $header[] = array(
    'data' => 'Summa',
    'class' => array('table-head')
  );

  // Control ID column
  $header[] = array(
    'data' => 'ID',
    'class' => array('table-head','ctrl')
  );

  // Control UA column
  $header[] = array(
    'data' => 'UA',
    'class' => array('table-head','ctrl')
  );

  // Control PTV column
  $header[] = array(
    'data' => 'PTV',
    'class' => array('table-head','ctrl')
  );

  // Control KRE column
  $header[] = array(
    'data' => 'KRE',
    'class' => array('table-head','ctrl')
  );

  // Control EXR column
  $header[] = array(
    'data' => 'EXR',
    'class' => array('table-head','ctrl')
  );

  // Control EU column
  $header[] = array(
    'data' => 'EU',
    'class' => array('table-head','ctrl')
  );

  // Control KOM column
  $header[] = array(
    'data' => 'KOM',
    'class' => array('table-head','ctrl')
  );

  // Control PEN column
  $header[] = array(
    'data' => 'PEN',
    'class' => array('table-head','ctrl')
  );

  // Control agreement column
  $header[] = array(
    'data' => 'Kundavtal',
    'class' => array('table-head')
  );

  // To sign column
  $header[] = array(
    'data' => 'Att teckna',
    'class' => array('table-head')
  );

  // Empty column
  $header[] = array(
    'class' => array('table-head')
  );
}

/**
 * Generate header for each contact person on the control table
 * @param  array &$rows
 *   To store the rows
 * @param  stdClass $transaction
 *   Object of the current transaction
 * @param  array $type_investment
 *   List of which transaction types used
 */
function _generate_control_contact_person_head_row(array &$rows, stdClass $transaction, array $type_investment) {
  $sum = _get_control_transactions_sum($transaction->nid, $type_investment);
  $transaction_wrap = entity_metadata_wrapper('node', $transaction);
  $person = $transaction_wrap->field_transaction_person->value();
  $investors = db_query("SELECT n.nid AS nid, n.title AS name FROM {node} AS n INNER JOIN field_data_field_shared_cont_pers AS u ON (n.nid = u.entity_id) WHERE u.field_shared_cont_pers_target_id = :tid", array(':tid' => $person->nid))->fetchAll();

  // Control ID
  $ctrl_id = field_view_field('node', $person, 'field_user_id_ctrl',
    array(
      'label'=>'hidden',
      'type' => 'sedermera_verification_status',
      'settings' => array(
        'link' => TRUE,
        'link_destination' => 'edit',
      ),
    ));

  // To sign
  $done = 0;
  $count = 0;

  foreach ($transaction_wrap->field_transaction_investor->value() as $object) {
    if (empty($object->field_transaction_ap_agree)) {
      continue;
    }

    foreach ($object->field_transaction_ap_agree[LANGUAGE_NONE] as $tid) {
      $result = db_query("SELECT field_transaction_agree_to_sign_value AS value
        FROM {field_data_field_transaction_agree_to_sign}
        WHERE entity_id = :eid", array(':eid' => $tid['target_id']))->fetchAssoc();

      $done += $result['value'];
      $count++;
    }
  }

  $rows[] = array(
    'data' => array(
      // Collapsible column
      array(
        'class' => 'collapsible',
        'data' => '<span class="icon"></span>',
      ),
      // Name column
      array(
        'data' => $person->title,
      ),
      // Summation column
      array(
        'data' => number_format($sum, 0, ",", " ") . " :-",
      ),
      // Control ID column
      array(
        'data' => render($ctrl_id),
        'class' => array('ctrl'),
      ),
      // Control UA column
      array(
        'class' => array('ctrl'),
      ),
      // Control PTV column
      array(
        'class' => array('ctrl'),
      ),
      // Control KRE column
      array(
        'class' => array('ctrl'),
      ),
      // Control EXR column
      array(
        'class' => array('ctrl'),
      ),
      // Control EU column
      array(
        'class' => array('ctrl'),
      ),
      // Control KOM column
      array(
        'class' => array('ctrl'),
      ),
      // Control PEN column
      array(
        'class' => array('ctrl'),
      ),
      // Control agreement column
      array(),
      // To sign column
      array(
        'data' => ($done == 0 && $count == 0) ? "0 valda" : $done ."/" . $count . " klara",
      ),
      // Empty column
      array(),
    ),
    'class' => array('contact-person-row'),
    'data-id' => $person->nid,
  );
}

/**
 * Get all agreements for the investor
 * @param int $nid
 *   Nid of the investor
 * @return array
 *   List of nid of all agreements for the investor
 */
function _get_agreements_for_investor($nid) {
  $result = db_query("SELECT field_transaction_ap_agree_target_id AS nid
    FROM field_data_field_transaction_ap_agree
    WHERE entity_id = :nid", array(':nid' => $nid))->fetchAllAssoc('nid');

  return array_keys($result);
}

/**
 * Generates investor rows
 * @param array &$rows
 *   Array to store the rows
 * @param int $investor
 *   nid of the current investor
 * @param array $type_investment
 *   List of which transaction types used
 */
function _generate_control_investor_rows(array &$rows, $investor, array $type_investment, $transaction) {
  $transaction_ap = node_load($investor);
  $transaction_ap_wrap = entity_metadata_wrapper('node', $transaction_ap);

  $transaction_wrap = entity_metadata_wrapper('node', $transaction);
  $person = $transaction_wrap->field_transaction_person->value();

  // Get investor from transaction
  $investor = $transaction_ap_wrap->field_transaction_ap_ap->value();

  // Control ID
  $investor_view_full = node_view($investor);

  // Fetch the dates for UA and PTV in order to determine which one that should
  // be displayed.
  $ua_date = $transaction_ap_wrap->field_transaction_ap_ap->field_investor_shared_ctrl_ua->field_ctrl_date->value();
  $ptv_date = $transaction_ap_wrap->field_transaction_ap_ap->field_investor_shared_ctrl_ptv->field_ctrl_date->value();

  // Control UA. Display if UA has a date set, or if none of UA and PTV has been
  // set.
  if ($ua_date || (!$ua_date && !$ptv_date)) {
    $ctrl_ua = field_view_field('node', $investor, 'field_investor_shared_ctrl_ua',
      array(
        'label'=>'hidden',
        'type' => 'sedermera_verification_status',
        'settings' => array(
          'link' => TRUE,
          'link_destination' => 'edit',
        ),
      ));
  }
  else {
    $ctrl_ua = array();
  }

  // Control PTV. Display if PTV has a date set, but not UA, or if both UA and
  // PTV hasn't been set.
  if (($ptv_date && !$ua_date) || (!$ua_date && !$ptv_date)) {
    $ctrl_ptv = field_view_field('node', $investor, 'field_investor_shared_ctrl_ptv',
      array(
        'label'=>'hidden',
        'type' => 'sedermera_verification_status',
        'settings' => array(
          'link' => TRUE,
          'link_destination' => 'edit',
        ),
      ));
  }
  else {
    $ctrl_ptv = array();
  }

  // Control KRE
  $ctrl_kre = field_view_field('node', $investor, 'field_investor_shared_ctrl_cred',
    array(
      'label'=>'hidden',
      'type' => 'sedermera_verification_status',
      'settings' => array(
        'link' => TRUE,
        'link_destination' => 'edit',
      ),
    ));

  // Control EXR
  $ctrl_exr = field_view_field('node', $investor, 'field_investor_shared_ctrl_ext',
    array(
      'label'=>'hidden',
      'type' => 'sedermera_verification_status',
      'settings' => array(
        'link' => TRUE,
        'link_destination' => 'edit',
      ),
    ));

  // Control EU
  $ctrl_eu = field_view_field('node', $transaction_ap, 'field_transaction_ap_ctrl_eu',
    array(
      'label'=>'hidden',
      'type' => 'sedermera_verification_status',
      'settings' => array(
        'link' => TRUE,
        'link_destination' => 'edit',
      ),
    ));

  // Control KOM column
  $ctrl_kom = field_view_field('node', $transaction_ap, 'field_transaction_ap_ctrl_comp',
    array(
      'label'=>'hidden',
      'type' => 'sedermera_verification_status',
      'settings' => array(
        'link' => TRUE,
        'link_destination' => 'edit',
      ),
    ));

  $rows[] = array(
    'data' => array(
      // Collapsible column
      array(
        'class' => 'collapsible-row',
        'data' => '<span class="icon"></span>'
      ),
      // Name column
      array(
        'data' => $investor->title,
      ),
      // Summation column
      array(),
      // Control ID column
      array(
        'data' => render($investor_view_full['verification_id_investor']),
        'class' => array('ctrl'),
      ),
      // Control UA column
      array(
        'data' => render($ctrl_ua),
        'class' => array('ctrl'),
      ),
      // Control PTV column
      array(
        'data' => render($ctrl_ptv),
        'class' => array('ctrl'),
      ),
      // Control KRE column
      array(
        'data' => render($ctrl_kre),
        'class' => array('ctrl'),
      ),
      // Control EXR column
      array(
        'data' => render($ctrl_exr),
        'class' => array('ctrl'),
      ),
      // Control EU column
      array(
        'data' => render($ctrl_eu),
        'class' => array('ctrl'),
      ),
      // Control KOM column
      array(
        'data' => render($ctrl_kom),
        'class' => array('ctrl'),
      ),
      // Control PEN column
      array(
        'class' => array('ctrl'),
      ),
      // Control agreement column
      array(),
      // To sign column
      array(),
      // Empty column
      array(),
    ),
    'class' => array('investor-row'),
    'data-id' => $person->nid,
  );
}

/**
 * Generate agreement rows
 * @param array &$rows
 *   Array to store the rows
 * @param int $agreement
 *   nid of current agreement
 * @param int $transaction_ap
 *   nid of current investor
 */
function _generate_control_agreement_rows(array &$rows, $agreement, $transaction_ap, $transaction) {
  $transaction_wrap = entity_metadata_wrapper('node', $transaction);
  $person = $transaction_wrap->field_transaction_person->value();

  $agreement_node = node_load($agreement);
  $agreement_node_wrap = entity_metadata_wrapper('node', $agreement_node);

  $transaction_node = node_load($transaction_ap);
  $transaction_ap_wrap = entity_metadata_wrapper('node',  $transaction_node);

  $investor = $transaction_ap_wrap->field_transaction_ap_ap->value();
  $investor_wrap = entity_metadata_wrapper('node', $investor);
  $ctrl_ua = $investor_wrap->field_investor_shared_ctrl_ua->value();

  $sum = 0;

  //Get the correct sum for the agreement
  switch ($agreement_node_wrap->field_transaction_agree_type_rea->value()) {
    case 'fe_sign':
      $sum = $transaction_ap_wrap->field_transaction_ap_fe_sign->value();
      $type = 'Teckningsförbindelse (FE)';
      break;
    case 'fe_warrant':
      $sum = $transaction_ap_wrap->field_transaction_ap_fe_warrant->value();
      $type = 'Garantiåtagande (FE)';
      break;
    case 'le_sign':
      $sum = $transaction_ap_wrap->field_transaction_ap_le_sign->value();
      $type = 'Teckningsförbindelse (LE)';
      break;
    case 'le_warrant':
      $sum = $transaction_ap_wrap->field_transaction_ap_le_warrant->value();
      $type = 'Garantiåtagande (LE)';
      break;
    case 'pp_sign':
      $sum = $transaction_ap_wrap->field_transaction_ap_pp_sign->value();
      $type = 'Teckningsförbindelse (PP)';
      break;
    case 're_sign':
      $sum = $transaction_ap_wrap->field_transaction_ap_re_sign->value();
      $type = 'Teckningsförbindelse (RE)';
      break;
    case 'bridging':
      $sum = $transaction_ap_wrap->field_transaction_ap_bridging->value();
      $type = 'Brygglån';
      break;
    case 'block':
      $sum = $transaction_ap_wrap->field_transaction_ap_block->value();
      $type = 'Blockpost';
      break;
  }

  if ($sum == 0) {
    return;
  }

  // Create penningtvatt variable
  $ctrl_pen = '';

  if (!empty($ctrl_ua->field_ctrl_date)) {
    $ctrl_pen = field_view_field('node', $agreement_node, 'field_transaction_agree_ctrl',
      array(
        'label'=>'hidden',
        'type' => 'sedermera_verification_status',
        'settings' => array(
          'link' => TRUE,
          'link_destination' => 'edit',
        ),
      ));
  }

  // Create the to sign variable dependent on if already checked
  if ($agreement_node_wrap->field_transaction_agree_to_sign->value()) {
    $to_sign = '<div class="checker disabled"><span class="to-sign-ctrl checked"></span></div> Att teckna';
  }
  else {
    // Verify that the verifications has been approved. Start of with the ID
    // verifications.
    $verifications = sedermera_verification_get_ids_for_investor($investor->nid);

    // Fetch the dates for UA and PTV in order to determine which one that
    // should be checked.
    $ua_date = $investor_wrap->field_investor_shared_ctrl_ua->field_ctrl_date->value();
    $ptv_date = $investor_wrap->field_investor_shared_ctrl_ptv->field_ctrl_date->value();

    // Add the UA control if it has been set, or if none of UA or PTV has been
    // set.
    if ($ua_date || (!$ua_date && !$ptv_date)) {
      $verifications[] = $investor_wrap->field_investor_shared_ctrl_ua->nid->value();
    }

    // Add the PTV control if it has been set and UA hasn't been set, or if both
    // UA and PTV hasn't been set.
    if (($ptv_date && !$ua_date) || (!$ua_date && !$ptv_date)) {
      $verifications[] = $investor_wrap->field_investor_shared_ctrl_ptv->nid->value();
    }

    // Add the other regular verifications.
    $verifications[] = $investor_wrap->field_investor_shared_ctrl_ext->nid->value();
    $verifications[] = $transaction_ap_wrap->field_transaction_ap_ctrl_eu->nid->value();

    // Add Penningtvätt if there's an UA verification.
    if (!empty($ua_date)) {
      $verifications[] = $agreement_node_wrap->field_transaction_agree_ctrl->nid->value();
    }

    // Fetch the status.
    $status = sedermera_verification_get_status_multiple($verifications);

    // Display the checkbox if the verification status is expiring or approved.
    if ($status != SEDERMERA_VERIFICATION_NOT_APPROVED) {
      $field = field_view_field('node', $agreement_node, 'field_transaction_agree_to_sign',
        array(
          'label'=>'hidden',
          'type' => 'editable',
        ));
      $to_sign = render($field) . '<span>Att teckna</span>';
    }
    else {
      // The verifications aren't approved. Don't display the checkbox.
      $to_sign = '';
    }
  }

  $rows[] = array(
    'data' => array(
      // Collapsible column
      array(
        'class' => 'empty-column',
      ),
      // Name column
      array(
        'data' => $type,
      ),
      // Summation column
      array(
        'data' => number_format($sum, 0, ",", " ") . " :-",
      ),
      // Control ID column
      array(
        'class' => array('ctrl'),
      ),
      // Control UA column
      array(
        'class' => array('ctrl'),
      ),
      // Control PTV column
      array(
        'class' => array('ctrl'),
      ),
      // Control KRE column
      array(
        'class' => array('ctrl'),
      ),
      // Control EXR column
      array(
        'class' => array('ctrl'),
      ),
      // Control EU column
      array(
        'class' => array('ctrl'),
      ),
      // Control KOM column
      array(
        'class' => array('ctrl'),
      ),
      // Control PEN column
      array(
        'data' => render($ctrl_pen),
        'class' => array('ctrl'),
      ),
      // Control agreement column
      array(
        'data' => l('Hantera avtal', "node/" . $agreement_node->nid . "/edit/control", array('attributes' => array('class' => array('mfp-verification-edit')))),
      ),
      // To sign column
      array(
        'data' => $to_sign,
      ),
      // Empty column
      array(
        'class' => 'empty-column',
      ),
    ),
    'class' => array('agreement-row'),
    'data-id' => $person->nid,
  );
}

/**
 * Generate emtpy row
 * @param array $rows
 *   To store the rows
 * @param $transaction
 *   [description]
 */
function _generate_control_empty_row(array &$rows, $transaction) {
  $transaction_wrap = entity_metadata_wrapper('node', $transaction);
  $person = $transaction_wrap->field_transaction_person->value();

  $rows[] = array(
    'data' => array(
      // Collapsible column
      array(),
      // Name column
      array(),
      // Summation column
      array(),
      // Control ID column
      array(),
      // Control UA column
      array(),
      // Control PTV column
      array(),
      // Control KRE column
      array(),
      // Control EXR column
      array(),
      // Control EU column
      array(),
      // Control KOM column
      array(),
      // Control PEN column
      array(),
      // Control agreement column
      array(),
      // To sign column
      array(),
      // Empty column
      array(),
    ),
    'class' => array('empty-row'),
    'data-id' => $person->nid,
  );
}
