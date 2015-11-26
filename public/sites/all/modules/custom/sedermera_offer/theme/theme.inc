<?php
/**
 * @file
 * Theme implementations for the Sedermera Offer module.
 */

/**
 * Preprocess variables for the sedermera-offer-signed-mail template file.
 */
function template_preprocess_sedermera_offer_signed_mail(&$variables) {
  // Add URL to the logo.
  $variables['logo'] = url(drupal_get_path('theme', 'sedermera') . '/graphics/mail-logo.png', array('absolute' => TRUE));
  ddl($variables['logo']);
}

/**
 * Preprocess variables for the sedermera-offer-unsigned-mail template file.
 */
function template_preprocess_sedermera_offer_unsigned_mail(&$variables) {
  // Add URL to the logo.
  $variables['logo'] = url(drupal_get_path('theme', 'sedermera') . '/graphics/mail-logo.png');
}
