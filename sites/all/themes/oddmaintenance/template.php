<?php
// Add Google font library.
drupal_add_css('http://fonts.googleapis.com/css?family=Covered+By+Your+Grace', 'external');

/**
 * Implements hook_preprocess_HOOK().
 */
function oddmaintenance_preprocess_maintenance_page(&$variables) {
  if (MAINTENANCE_MODE == 'error') {
    // Database error.
    $variables['title'] = 'Oj! Vad hände här?';
    $variables['content'] = 'Det finns ett problem med webbsajten. Ibland uppstår oväntade saker med hemsidor och då kan det bli på detta viset. Vi arbetar dock aktivt på att ordna det!';
    $variables['site_name'] = 'Teknisk support';
  }
}
