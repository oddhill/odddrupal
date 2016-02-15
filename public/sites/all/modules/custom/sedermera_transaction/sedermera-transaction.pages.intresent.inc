<?php

/**
 * Ajax reloads div content
 * @param int $offer_id
 *   Nid of offer to reload intresent list for
 * @return array ajax reload
 */
function sedermera_transaction_reload_intressent($offer_id) {
  // Generate new table
  $table = sedermera_transaction_intresent($offer_id);
  return transaction_ajax_callback('.offer-interested-list', render($table));
}

/**
 * Render intresent table
 * @param  int $offer_id
 *   The nid of offer to render intresent table for
 * @return Rendarable array
 *   Rendarable table of the intressents
 */
function sedermera_transaction_intresent($offer_id) {
  // Load all transaction ids corresponding to the current offer
  $transactions = _get_interested_transactions($offer_id);

  // If no transactions exists for the offer present empty table with no content
  if (empty($transactions)) {
    return array(
      '#prefix' => '<div class="view-empty">',
      '#markup' => 'Det finns inga intresserade kontaktpersoner',
      '#suffix' => '</div>',
    );
  }
  else {
    // Load the current offer
    $offer = node_load($offer_id);

    // Array of active investment types used in the offer
    $type_investment = _type_investment($offer);

    // Arrays holding the content used to build the table
    $header = array();
    $rows = array();

    // Generate the table header
    _generate_interested_header_row($header, $type_investment);

    // Holds the arrays of values for the total sum calculation
    $col_sum_total = array();

    // Generate a group for each contact person and its investors
    foreach ($transactions as $transaction_nid) {
      // Load the transaction
      $transaction = node_load($transaction_nid);

      // Generate contactperson head row
      _generate_interested_contact_person_head_row($rows, $transaction, $type_investment);

      // Column summation
      $col_sum = array(
        'fe_sign' => 0,
        'fe_warr' => 0,
        'le_sign' => 0,
        'le_warr' => 0,
        'pp_sign' => 0,
        're_sign' => 0,
        'bl_sum'  => 0,
        'bp_sum'  => 0,
        );

      // Generate the investor rows with editable fields
      foreach ($transaction->field_transaction_investor as $investor_transactions) {
        _generate_interested_investor_rows($rows, $investor_transactions, $type_investment, $transaction, $col_sum);
      }

      // Generate the contactperson sum row
      _generate_interested_sum_row($rows, $type_investment, $transaction, $col_sum);
      $col_sum_total[] = $col_sum;
    }

    // Array to calulate total sum per column
    $sumArray = array();

    // Calculate total col values
    foreach ($col_sum_total as $subArray) {
      foreach ($subArray as $id => $value) {
        $sumArray[$id]+=$value;
      }
    }

    // Generate the total sum row
    _generate_interested_total_sum_row($rows, $type_investment, $sumArray);

    // Add a class to the last table row.
    end($rows);
    $last_key = key($rows);
    $rows[$last_key]['class'][] = 'last-row';

    // Generate rendarable array for the table and return it.
    return array(
      '#theme' => 'table',
      '#header' => $header,
      '#rows' => $rows,
      '#prefix' => '<div class="offer-interested-list"><div id="interested-table" class="table-wrapper">',
      '#suffix' => '</div></div>',
    );
  }
}

/**
 * Get transactions corresponding to an offer
 * @param int $nid
 *   The offer id
 * @return array
 *   List of transaction ids
 */
function _get_interested_transactions($nid) {
  $result = db_query("SELECT o.entity_id AS nid
      FROM {field_data_field_transaction_offer} AS o
      INNER JOIN {field_data_field_transaction_interested} AS i
      ON (o.entity_id = i.entity_id)
      INNER JOIN {field_data_field_transaction_person} AS p
      ON (o.entity_id = p.entity_id)
      INNER JOIN {node} AS n
      ON (n.nid = p.field_transaction_person_target_id)
      WHERE field_transaction_offer_target_id = :nid
      AND field_transaction_interested_value = 1
      ORDER BY n.title ASC", array(':nid' => $nid))->fetchAllAssoc('nid');
  return array_keys($result);
}

/**
 * Creates the header row for the table
 * @param  array &$header
 *   The array to store the table header content in
 * @param  array $type_investment
 *   The active investment types used in the offer
 */
function _generate_interested_header_row(array &$header, array $type_investment) {
  // Collapsible column
  $header[] = array(
    'class' => array('table-head', 'collapsible-head'),
    'data' => '<span class="icon"></span>',
  );

  // Name column
  $header[] = array(
    'data' => 'Kontaktperson',
    'class' => array('table-head'),
  );

  // Dropdown column
  $header[] = array(
    'data' => '',
    'class' => array('table-head'),
  );

  // No interest column
  $header[] = array(
    'data' => 'Ej intresserad',
    'class' => array('table-head'),
  );

  // Teckningsförbindelse if Företrädesemission column
  if ($type_investment['fe_sign']) {
    $header[] = array(
      'data' => 'Teckningsförbindelse (FE)',
      'class' => array('table-head'),
    );
  }

  // Garantiåtagande if Företrädesemission column
  if ($type_investment['fe_warr']) {
    $header[] = array(
      'data' => 'Garantiåtagande (FE)',
      'class' => array('table-head'),
    );
  }

  // Teckningsförbindelse if Listningsemission column
  if ($type_investment['le_sign']) {
    $header[] = array(
      'data' => 'Teckningsförbindelse (LE)',
      'class' => array('table-head'),
    );
  }

  // Garantiåtagande if Listningsemission column
  if ($type_investment['le_warr']) {
    $header[] = array(
      'data' => 'Garantiåtagande (LE)',
      'class' => array('table-head'),
    );
  }

  // Teckningsförbindelse if Private placement column
  if ($type_investment['pp_sign']) {
    $header[] = array(
      'data' => 'Teckningsförbindelse (PP)',
      'class' => array('table-head'),
    );
  }

  // Teckningsförbindelse if Riktad emission column
  if ($type_investment['re_sign']) {
    $header[] = array(
      'data' => 'Teckningsförbindelse (RE)',
      'class' => array('table-head'),
    );
  }

  // Sum if Brygglån column
  if ($type_investment['bl_sum']) {
    $header[] = array(
      'data' => 'Brygglån',
      'class' => array('table-head'),
    );
  }

  // Sum if Blockpost column
  if ($type_investment['bp_sum']) {
    $header[] = array(
      'data' => 'Blockpost',
      'class' => array('table-head'),
    );
  }

  // Summation column
  $header[] = array(
    'data' => 'Summa',
    'class' => array('table-head'),
  );

  // Control column
  $header[] = array(
    'data' => '',
    'class' => array('table-head','ctrl'),
  );

  // To control column
  $header[] = array(
    'data' => 'Till kontroll',
    'class' => array('table-head'),
  );
}

/**
 * Creates the group header row for the contact person
 * @param  array &$rows
 *   The array to store the table rows content in
 * @param  stdClass $transaction
 *   Node containing the transaction information
 * @param  array $type_investment
 *   The active investment types used in the offer
 */
function _generate_interested_contact_person_head_row(array &$rows, stdClass $transaction, array $type_investment) {
  $transaction_wrap = entity_metadata_wrapper('node', $transaction);
  $person = $transaction_wrap->field_transaction_person->value();
  $investors = db_query("SELECT n.nid AS nid, n.title AS name FROM {node} AS n INNER JOIN field_data_field_shared_cont_pers AS u ON (n.nid = u.entity_id) WHERE u.field_shared_cont_pers_target_id = :tid", array(':tid' => $person->nid))->fetchAll();

  // If no investors for the contact person create simple string
  if (empty($investors)) {
    $drop_down = array(
      '#prefix' => '<em>Inga avtalsparter</em>',
      );
  }
  else {
    $options = array(
        '#prefix' => '<div class="dropdown">',
        '#suffix' => '</div>',
      );

    // Add checkbox for each investor connected to the contact person
    // Mark as selected if already selected
    foreach ($investors as $investor) {
      $selected = FALSE;
      $attributes = array(
        'class' => array('add-transaction-ap'),
        'data-transaction-id' => $transaction->nid,
        'data-ap-id' => $investor->nid,
      );

      foreach ($transaction_wrap->field_transaction_investor->value() as $node) {
        $res = db_query("SELECT COUNT(*) AS selected FROM {field_data_field_transaction_ap_ap} WHERE entity_id = :eid AND field_transaction_ap_ap_target_id = :tid", array(':eid' => $node->nid, ':tid' => $investor->nid))->fetchAssoc();

        if ($res['selected'] == 1) {
          $selected = TRUE;
          $attributes['checked'] = 'checked';
          $attributes['disabled'] = 'disabled';
          break;
        }
      }

      $options[$investor->nid] = array(
        '#type' => 'checkbox',
        '#title' => $investor->name,
        '#default_value' => $selected,
        '#attributes' => $attributes,
      );
    }

    // Create drop_down menu for contact person
    $drop_down = array(
      '#type' => 'checkboxes',
      '#prefix' => '<div class="select-container contracting-parties">',
      '#suffix' => '</div>',
      'select' => array(
        '#markup' => '<div class="select">Avtalsparter</div>',
      ),
      'options' => $options,
      '#attached' => array(
        'js' => array(
          drupal_get_path('module', 'sedermera_transaction') . '/js/sedermera_transaction_add_ap.js',
        ),
        'library' => array(
          array('system', 'drupal.ajax'),
          array('system', 'jquery.form'),
          array('editablefields', 'editablefields'),
        ),
      ),
    );
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
      // Dropdown column
      array(
        'data' => $drop_down,
      ),
      // No interest column
      array(),
    ),
    'class' => array('contact-person-row'),
    'data-id' => $person->nid,
  );

  $row = count($rows) -1;

  $sum = 0;

  // Teckningsförbindelse if Företrädesemission column
  if ($type_investment['fe_sign']) {
    $sum += $transaction_wrap->field_transaction_fe_sign->value();
    $field = field_view_field('node', $transaction, 'field_transaction_fe_sign',
          array(
            'label'=>'hidden',
            'settings' => array(
              'thousand_separator' => ' ',
            ),
          ));
    $rows[$row]['data'][] = array(
      'data' => render($field),
    );
  }

  // Garantiåtagande if Företrädesemission column
  if ($type_investment['fe_warr']) {
    $sum += $transaction_wrap->field_transaction_fe_warant->value();
    $field = field_view_field('node', $transaction, 'field_transaction_fe_warant',
          array(
            'label'=>'hidden',
            'settings' => array(
              'thousand_separator' => ' ',
            ),
          ));

    $rows[$row]['data'][] = array(
      'data' => render($field),
    );
  }

  // Teckningsförbindelse if Listningsemission column
  if ($type_investment['le_sign']) {
    $sum += $transaction_wrap->field_transaction_le_sign->value();
    $field = field_view_field('node', $transaction, 'field_transaction_le_sign',
          array(
            'label'=>'hidden',
            'settings' => array(
              'thousand_separator' => ' ',
            ),
          ));

    $rows[$row]['data'][] = array(
      'data' => render($field),
    );
  }

  // Garantiåtagande if Listningsemission column
  if ($type_investment['le_warr']) {
    $sum += $transaction_wrap->field_transaction_le_warrant->value();
    $field = field_view_field('node', $transaction, 'field_transaction_le_warrant',
          array(
            'label'=>'hidden',
            'settings' => array(
              'thousand_separator' => ' ',
            ),
          ));

    $rows[$row]['data'][] = array(
      'data' => render($field),
    );
  }

  // Teckningsförbindelse if Private Placement column
  if ($type_investment['pp_sign']) {
    $sum += $transaction_wrap->field_transaction_pp_sign->value();
    $field = field_view_field('node', $transaction, 'field_transaction_pp_sign',
          array(
            'label'=>'hidden',
            'settings' => array(
              'thousand_separator' => ' ',
            ),
          ));

    $rows[$row]['data'][] = array(
      'data' => render($field),
    );
  }

  // Teckningsförbindelse if Riktad emission column
  if ($type_investment['re_sign']) {
    $sum += $transaction_wrap->field_transaction_re_sign->value();
    $field = field_view_field('node', $transaction, 'field_transaction_re_sign',
          array(
            'label'=>'hidden',
            'settings' => array(
              'thousand_separator' => ' ',
            ),
          ));

    $rows[$row]['data'][] = array(
      'data' => render($field),
    );
  }

  // Sum if Brygglån column
  if ($type_investment['bl_sum']) {
    $sum += $transaction_wrap->field_transaction_bridging->value();
    $field = field_view_field('node', $transaction, 'field_transaction_bridging',
          array(
            'label'=>'hidden',
            'settings' => array(
              'thousand_separator' => ' ',
            ),
          ));

    $rows[$row]['data'][] = array(
      'data' => render($field),
    );
  }

  // Sum if Blockpost column
  if ($type_investment['bp_sum']) {
    $sum += $transaction_wrap->field_transaction_block->value();
    $field = field_view_field('node', $transaction, 'field_transaction_block',
          array(
            'label'=>'hidden',
            'settings' => array(
              'thousand_separator' => ' ',
            ),
          ));

    $rows[$row]['data'][] = array(
      'data' => render($field),
    );
  }

  // Summation column
  $rows[$row]['data'][] = array(
    'data' => number_format($sum, 0, ",", " ") . " :-",
  );

  // Control column
  $field = field_view_field('node', $person, 'field_user_id_ctrl',
        array(
          'label'=>'hidden',
          'type' => 'sedermera_verification_status',
          'settings' => array(
            'link' => TRUE,
            'link_destination' => 'view',
          ),
        ));
  $rows[$row]['data'][] = array(
    'data' => render($field),
    'class' => array('ctrl'),
  );

  // To control column
  $done = 0;
  $count = 0;

  foreach ($transaction->field_transaction_investor as $value) {
    foreach ($value as $val) {
      $result = db_query("SELECT field_transaction_ap_ctrl_value AS value FROM {field_data_field_transaction_ap_ctrl} WHERE entity_id = :eid", array(':eid' => $val['target_id']))->fetchAll();
      $done += $result[0]->value;
      $count++;
    }
  }

  $rows[$row]['data'][] = array(
    'data' => ($done === 0 && $count === 0) ? "0 valda" : $done ."/" . $count . " klara",
  );
}

/**
 * Create the investor rows with editable fields for each investor connected to
 * the contactpersons transaction
 * @param  array &$rows
 *   The array to store the table rows content in
 * @param  array $investor_transactions
 *   List of investor transactions for the contact person
 * @param  array $type_investment
 *   The active investment types used in the offer
 */
function _generate_interested_investor_rows(array &$rows, array $investor_transactions, array $type_investment, $transaction, array &$col_sum) {
  $transaction_wrap = entity_metadata_wrapper('node', $transaction);
  $person = $transaction_wrap->field_transaction_person->value();

  // Get indicator of last investor
  $last = count($investor_transactions) - 1;

  foreach ($investor_transactions as $key => $investor) {
    $transaction_ap = node_load($investor['target_id']);
    $transaction_ap_wrap = entity_metadata_wrapper('node', $transaction_ap);

    // Get investor from transaction
    $investor = $transaction_ap_wrap->field_transaction_ap_ap->value();

    $row_class = '';

    $row_sum = 0;

    // If last investor add class
    if ($last === $key) {
      $row_class = 'last-investor';
    }

    $rows[] = array(
      'data' => array(
        // Collapsible column
        array(
          'class' => 'collapsible-row',
          'data' => '<span class="icon"></span>',
        ),
        // Name column
        array(
          'data' => $investor->title,
        ),
        // Dropdown column
        array(),
      ),
      'class' => array('investor-row', $row_class),
      'data-id' => $person->nid,
    );

    $row = count($rows) - 1;

    $no_interest = field_view_field('node', $transaction_ap, 'field_transaction_ap_no_inter',
          array(
            'label'=>'hidden',
            'type' => 'editable',
          ));
    $rows[$row]['data'][] = array(
      'data' => render($no_interest) . '<span>Ej intresserad</span>',
    );

    $non_mod = $transaction_ap_wrap->field_transaction_ap_no_inter->value();
    $type = ($non_mod) ? 'default' : 'editable';

    // Teckningsförbindelse if Företrädesemission column
    if ($type_investment['fe_sign']) {
      $row_sum += $transaction_ap_wrap->field_transaction_ap_fe_sign->value();
      $col_sum['fe_sign'] += $transaction_ap_wrap->field_transaction_ap_fe_sign->value();
      $field = field_view_field('node', $transaction_ap, 'field_transaction_ap_fe_sign',
            array(
              'label'=>'hidden',
              'type' => $type,
            ));
      $rows[$row]['data'][] = array(
        'data' => render($field),
      );
    }

    // Garantiåtagande if Företrädesemission column
    if ($type_investment['fe_warr']) {
      $row_sum += $transaction_ap_wrap->field_transaction_ap_fe_warrant->value();
      $col_sum['fe_warr'] += $transaction_ap_wrap->field_transaction_ap_fe_warrant->value();
      $field = field_view_field('node', $transaction_ap, 'field_transaction_ap_fe_warrant',
            array(
              'label'=>'hidden',
              'type' => $type,
            ));
      $rows[$row]['data'][] = array(
        'data' => render($field),
      );
    }

    // Teckningsförbindelse if Listningsemission column
    if ($type_investment['le_sign']) {
      $row_sum += $transaction_ap_wrap->field_transaction_ap_le_sign->value();
      $col_sum['le_sign'] += $transaction_ap_wrap->field_transaction_ap_le_sign->value();
      $field = field_view_field('node', $transaction_ap, 'field_transaction_ap_le_sign',
            array(
              'label'=>'hidden',
              'type' => $type,
            ));
      $rows[$row]['data'][] = array(
        'data' => render($field),
      );
    }

    // Garantiåtagande if Listningsemission column
    if ($type_investment['le_warr']) {
      $row_sum += $transaction_ap_wrap->field_transaction_ap_le_warrant->value();
      $col_sum['le_warr'] += $transaction_ap_wrap->field_transaction_ap_le_warrant->value();
      $field = field_view_field('node', $transaction_ap, 'field_transaction_ap_le_warrant',
            array(
              'label'=>'hidden',
              'type' => $type,
            ));
      $rows[$row]['data'][] = array(
        'data' => render($field),
      );
    }

    // Teckningsförbindelse if Private placement column
    if ($type_investment['pp_sign']) {
      $row_sum += $transaction_ap_wrap->field_transaction_ap_pp_sign->value();
      $col_sum['pp_sign'] += $transaction_ap_wrap->field_transaction_ap_pp_sign->value();
      $field = field_view_field('node', $transaction_ap, 'field_transaction_ap_pp_sign',
            array(
              'label'=>'hidden',
              'type' => $type,
            ));
      $rows[$row]['data'][] = array(
        'data' => render($field),
      );
    }

    // Teckningsförbindelse if Riktad emission column
    if ($type_investment['re_sign']) {
      $row_sum += $transaction_ap_wrap->field_transaction_ap_re_sign->value();
      $col_sum['re_sign'] += $transaction_ap_wrap->field_transaction_ap_re_sign->value();
      $field = field_view_field('node', $transaction_ap, 'field_transaction_ap_re_sign',
            array(
              'label'=>'hidden',
              'type' => $type,
            ));
      $rows[$row]['data'][] = array(
        'data' => render($field),
      );
    }

    // Sum if Brygglån column
    if ($type_investment['bl_sum']) {
      $row_sum += $transaction_ap_wrap->field_transaction_ap_bridging->value();
      $col_sum['bl_sum'] += $transaction_ap_wrap->field_transaction_ap_bridging->value();
      $field = field_view_field('node', $transaction_ap, 'field_transaction_ap_bridging',
            array(
              'label'=>'hidden',
              'type' => $type,
            ));
      $rows[$row]['data'][] = array(
        'data' => render($field),
      );
    }

    // Sum if Blockpost column
    if ($type_investment['bp_sum']) {
      $row_sum += $transaction_ap_wrap->field_transaction_ap_block->value();
      $col_sum['bp_sum'] += $transaction_ap_wrap->field_transaction_ap_block->value();
      $field = field_view_field('node', $transaction_ap, 'field_transaction_ap_block',
            array(
              'label'=>'hidden',
              'type' => $type,
            ));
      $rows[$row]['data'][] = array(
        'data' => render($field),
      );
    }

    // Summation column
    $rows[$row]['data'][] = array(
      'data' => number_format($row_sum, 0, ",", " ") . " :-",
    );

    // Control column
    $investor_view_full = node_view($investor);
    $rows[$row]['data'][] = array(
      'data' => render($investor_view_full['verification_status_investor']),
      'class' => array('ctrl'),
    );

    // To control column
    if ($transaction_ap_wrap->field_transaction_ap_ctrl->value()) {
      $rows[$row]['data'][] = array(
        'data' => '<div class="checker disabled"><span class="to-check-ctrl checked"></span></div> Kontrollera',
      );
    }
    else {
      $to_ctrl = field_view_field('node', $transaction_ap, 'field_transaction_ap_ctrl',
            array(
              'label'=>'hidden',
              'type' => $type,
            ));
      $rows[$row]['data'][] = array(
        'data' => render($to_ctrl) . '<span>Kontrollera</span>',
      );
    }
  }
}

/**
 * Generates a summation row for the group
 * @param  array &$rows
 *   The array to store the table rows content in
 * @param  array $type_investment
 *   The active investment types used in the offer
 */
function _generate_interested_sum_row(array &$rows, array $type_investment, $transaction, $col_sum) {
  $transaction_wrap = entity_metadata_wrapper('node', $transaction);
  $person = $transaction_wrap->field_transaction_person->value();

  $rows[] = array(
    'data' => array(
      // Collapsible column
      array(
        'class' => array('collapsible-row'),
      ),
      // Name column
      array(),
      // Dropdown column
      array(),
      // No interest column
      array(
        'data' => '<strong>Summa kontaktperson:</strong>',
      ),
    ),
    'class' => array('summation-row'),
    'data-id' => $person->nid,
  );

  $row = count($rows) - 1;

  // Teckningsförbindelse if Företrädesemission column
  if ($type_investment['fe_sign']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($col_sum['fe_sign'], 0, ",", " ") . " :-",
    );
  }

  // Garantiåtagande if Företrädesemission column
  if ($type_investment['fe_warr']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($col_sum['fe_warr'], 0, ",", " ") . " :-",
    );
  }

  // Teckningsförbindelse if Listningsemission column
  if ($type_investment['le_sign']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($col_sum['le_sign'], 0, ",", " ") . " :-",
    );
  }

  // Garantiåtagande if Listnigsemission column
  if ($type_investment['le_warr']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($col_sum['le_warr'], 0, ",", " ") . " :-",
    );
  }

  // Teckningsförbindelse if Private Placement column
  if ($type_investment['pp_sign']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($col_sum['pp_sign'], 0, ",", " ") . " :-",
    );
  }

  // Teckningsförbindelse if Riktat emission column
  if ($type_investment['re_sign']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($col_sum['re_sign'], 0, ",", " ") . " :-",
    );
  }

  // Sum if Brygglån column
  if ($type_investment['bl_sum']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($col_sum['bl_sum'], 0, ",", " ") . " :-",
    );
  }

  // Sum if Blockpost column
  if ($type_investment['bp_sum']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($col_sum['bp_sum'], 0, ",", " ") . " :-",
    );
  }

  // Summation column
  $rows[$row]['data'][] = array(
    'data' => number_format(array_sum($col_sum), 0, ",", " ") . " :-",
  );

  // Control column
  $rows[$row]['data'][] = array();

  // To control column
  $rows[$row]['data'][] = array();
}

/**
 * Generates a total summation row
 * @param  array &$rows
 *   The array to store the table rows content in
 * @param  array $type_investment
 *   The active investment types used in the offer
 * @param  array $sumArray
 *   The array containing the calculated values
 */
function _generate_interested_total_sum_row(array &$rows, array $type_investment, array $sumArray) {

  $rows[] = array(
    'data' => array(
      // Collapsible column
      array(
        'class' => array('collapsible-row'),
      ),
      // Name column
      array(),
      // Dropdown column
      array(),
      // No interest column
      array(
        'data' => '<strong>Total summa:</strong>',
      ),
    ),
    'class' => array('summation-row','total-row'),
  );

  $row = count($rows) - 1;

  // Teckningsförbindelse if Företrädesemission column
  if ($type_investment['fe_sign']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($sumArray['fe_sign'], 0, ",", " ") . " :-",
    );
  }

  // Garantiåtagande if Företrädesemission column
  if ($type_investment['fe_warr']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($sumArray['fe_warr'], 0, ",", " ") . " :-",
    );
  }

  // Teckningsförbindelse if Listningsemission column
  if ($type_investment['le_sign']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($sumArray['le_sign'], 0, ",", " ") . " :-",
    );
  }

  // Garantiåtagande if Listnigsemission column
  if ($type_investment['le_warr']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($sumArray['le_warr'], 0, ",", " ") . " :-",
    );
  }

  // Teckningsförbindelse if Private Placement column
  if ($type_investment['pp_sign']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($sumArray['pp_sign'], 0, ",", " ") . " :-",
    );
  }

  // Teckningsförbindelse if Riktat emission column
  if ($type_investment['re_sign']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($sumArray['re_sign'], 0, ",", " ") . " :-",
    );
  }

  // Sum if Brygglån column
  if ($type_investment['bl_sum']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($sumArray['bl_sum'], 0, ",", " ") . " :-",
    );
  }

  // Sum if Blockpost column
  if ($type_investment['bp_sum']) {
    $rows[$row]['data'][] = array(
      'data' => number_format($sumArray['bp_sum'], 0, ",", " ") . " :-",
    );
  }

  // Summation column
  $rows[$row]['data'][] = array(
    'data' => number_format(array_sum($sumArray), 0, ",", " ") . " :-",
  );

  // Control column
  $rows[$row]['data'][] = array();

  // To control column
  $rows[$row]['data'][] = array();
}
