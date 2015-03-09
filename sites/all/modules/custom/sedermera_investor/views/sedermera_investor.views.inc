<?php
/**
 * @file
 * Views integration for the Sedermera Investor module.
 */

/**
 * Implements hook_views_data().
 */
function sedermera_investor_views_data() {
  // Add the sign link field to the investor table.
  $data['eck_offer']['sign'] = array(
    'title' => 'Teckna investeraren',
    'help' => 'Länk för att teckna en investerare för ett erbjudande.',
    'field' => array(
      'handler' => 'sedermera_investor_views_handler_sign_field',
    ),
  );

  return $data;
}
