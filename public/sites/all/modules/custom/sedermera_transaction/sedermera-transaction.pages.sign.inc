<?php

/**
 * Ajax reloads div content
 * @param int $offer_id
 *   Nid of offer to reload agreement list for
 * @return array ajax reload
 */
function sedermera_transaction_reload_agreement($offer_id) {
  // Generate new table
  $table = sedermera_transaction_sign($offer_id);
  return transaction_ajax_callback('.offer-agreements-list', render($table));
}

/**
 * Render sign table
 */
function sedermera_transaction_sign() {
  // Load all transaction ids corresponding to the current offer
  $transactions = _get_control_transactions(arg(1));

  // Load all agreements ids to be signed from transactions
  $agreements = _get_agreements($transactions);

  // If no transactions exists for the offer present empty table with no content
  if (empty($agreements)) {
    return array(
      '#prefix' => '<div class="view-empty">',
      '#markup' => 'Det finns inga avtal att teckna',
      '#suffix' => '</div>',
    );
  }
  else {
    // Load the current offer
    $offer = node_load(arg(1));

    // Arrays holding the content used to build the table
    $header = array();
    $rows = array();

    // Generate the table header
    _generate_sign_header_row($header);

    // Generate agreement rows
    foreach ($agreements as $transaction => $transaction_agreements) {
      _generate_sign_agreement_row($rows, $transaction, $transaction_agreements);
    }

    // Add a class to the last table row.
    end($rows);
    $last_key = key($rows);
    $rows[$last_key]['class'][] = 'last-row';

    // Generate rendarable array for the table and return it.
    return array(
      '#theme' => 'table',
      '#header' => $header,
      '#rows' => $rows,
      '#prefix' => '<div class="offer-agreements-list"><div id="agreements-list" class="table-wrapper">',
      '#suffix' => '</div></div>',
    );
  }
}

/**
 * Generates the header row for sign
 * @param array &$header
 *   To store the header
 */
function _generate_sign_header_row(array &$header) {
  // Name column
  $header[] = array(
    'data' => 'Kontaktperson',
    'class' => array('table-head')
  );

  // Investor column
  $header[] = array(
    'data' => 'Avtalspart',
    'class' => array('table-head')
  );

  // Type column
  $header[] = array(
    'data' => 'Transaktionstyp',
    'class' => array('table-head')
  );

  // Summation column
  $header[] = array(
    'data' => 'Summa',
    'class' => array('table-head')
  );

  // Control column
  $header[] = array(
    'data' => 'Kontroller',
    'class' => array('table-head','ctrl')
  );

  // Agreement column
  $header[] = array(
    'data' => 'Kundavtal',
    'class' => array('table-head')
  );

  // Sign column
  $header[] = array(
    'data' => 'Teckning',
    'class' => array('table-head')
  );
}

/**
 * Generate agreement rows
 * @param array &$rows
 *   To store the rows
 * @param $transaction
 *   The current transaction
 * @param array $agreements
 *   All agreements connected to the transaction
 */
function _generate_sign_agreement_row(array &$rows, $transaction, array $agreements) {
  $transaction_wrap = entity_metadata_wrapper('node', $transaction);
  $person = $transaction_wrap->field_transaction_person->value();

  foreach ($agreements as $agreement) {
    $agreement_node = node_load($agreement);
    $agreement_wrap = entity_metadata_wrapper('node', $agreement_node);
    $transaction_ap = node_load(_get_investor_nid($transaction_wrap->nid->value(), $agreement_wrap->nid->value()));
    $transaction_ap_wrap = entity_metadata_wrapper('node', $transaction_ap);

    $sum = 0;

    //Get the correct sum and type for the agreement
    switch ($agreement_wrap->field_transaction_agree_type_rea->value()) {
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

    // Control
    $investor_view_full = node_view($agreement_node);

    // Create the to sign variable dependent on if already checked
    if ($agreement_wrap->field_transaction_agree_sign->value()) {
      $to_sign = '<div class="checker disabled"><span class="to-sign-ctrl checked"></span></div> Tecknad';
    }
    else {
      // Fetch the investor from the transaction_ap node.
      $investor = $transaction_ap_wrap->field_transaction_ap_ap;

      // Verify that the verifications has been approved. Start of with the ID
      // verifications.
      $verifications = sedermera_verification_get_ids_for_investor($investor->nid->value());

      // Fetch the dates for UA and PTV in order to determine which one that
      // should be checked.
      $ua_date = $investor->field_investor_shared_ctrl_ua->field_ctrl_date->value();
      $ptv_date = $investor->field_investor_shared_ctrl_ptv->field_ctrl_date->value();

      // Add the UA control if it has been set, or if none of UA or PTV has been
      // set.
      if ($ua_date || (!$ua_date && !$ptv_date)) {
        $verifications[] = $investor->field_investor_shared_ctrl_ua->nid->value();
      }

      // Add the PTV control if it has been set and UA hasn't been set, or if both
      // UA and PTV hasn't been set.
      if (($ptv_date && !$ua_date) || (!$ua_date && !$ptv_date)) {
        $verifications[] = $investor->field_investor_shared_ctrl_ptv->nid->value();
      }

      // Add the other regular verifications.
      $verifications[] = $investor->field_investor_shared_ctrl_ext->nid->value();
      $verifications[] = $transaction_ap_wrap->field_transaction_ap_ctrl_eu->nid->value();

      // Add Penningtvätt if there's an UA verification.
      if (!empty($ua_date)) {
        $verifications[] = $agreement_wrap->field_transaction_agree_ctrl->nid->value();
      }

      // Fetch the status.
      $status = sedermera_verification_get_status_multiple($verifications);

      // Display the checkbox if the verification status is expiring or approved.
      if ($status != SEDERMERA_VERIFICATION_NOT_APPROVED) {
        $field = field_view_field('node', $agreement_node, 'field_transaction_agree_sign',
          array(
            'label'=>'hidden',
            'type' => 'editable',
          ));
        $to_sign = render($field) . '<span>Teckna</span>';
      }
      else {
        // The verifications aren't approved. Don't display the checkbox.
        $to_sign = '';
      }
    }

    $rows[] = array(
      'data' => array(
        // Name column
        array(
          'data' => $person->title,
        ),
        // Investor column
        array(
          'data' => $transaction_ap_wrap->field_transaction_ap_ap->value()->title,
        ),
        // Type column
        array(
          'data' => $type,
        ),
        // Summation column
        array(
          'data' => number_format($sum, 0, ",", " ") . " :-",
        ),
        // Control column
        array(
          'data' => render($investor_view_full['verification_status_transaction_agreement']),
          'class' => array('ctrl'),
        ),
        // Agreement column
        array(
          'data' => l('Hantera avtal', "node/" . $agreement_node->nid . '/edit/control', array('attributes' => array('class' => array('mfp-verification-edit')))),
        ),
        // Sign column
        array(
          'data' => render($to_sign),
        ),
      ),
      'class' => array(),
      'data-id' => '',
    );
  }
}
