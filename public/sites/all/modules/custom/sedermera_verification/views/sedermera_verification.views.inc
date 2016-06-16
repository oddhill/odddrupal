<?php
/**
 * @file
 * Views integration for the Sedermera Verification module.
 */

/**
 * Implements hook_views_data().
 */
function sedermera_verification_views_data() {
  // Add the verification status field to the investor table.
  $data['eck_investor']['verification_status'] = array(
    'title' => 'Status för kontrollen',
    'help' => 'Huruvida kontrollen för investeraren är godkänd eller ej.',
    'field' => array(
      'handler' => 'sedermera_verificaton_views_handler_status_field',
    ),
  );

  return $data;
}
