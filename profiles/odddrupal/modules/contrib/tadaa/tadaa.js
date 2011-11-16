(function($) {

// Create a namespace for our custom functions.
Drupal.tadaa = Drupal.tadaa || {};

$(document).ready(function() {
  // Refresh the current status.
  Drupal.tadaa.refreshOverview();
});

/**
 * Gets the current status for the selected environment.
 *
 * This is executed in the behavior.
 */
Drupal.tadaa.refreshOverview = function() {
  if (Drupal.settings.tadaa.selectedEnvironment) {
    // Set a loading class of the status wrappers, and change the text.
    $('#tadaa-modules-status, #tadaa-variables-status').attr('class', 'loading');
    $('#tadaa-modules-status span.status, #tadaa-variables-status span.status').text(Drupal.t('Checking…'));
    
    // Check the status for the active environment.
    $.getJSON(Drupal.settings.basePath + '?q=tadaa/environment/check', function(data) {
      // Set the class and text for the module status.
      var modulesClass = data.modules ? 'ok' :'error';
      var modulesText = data.modules ? Drupal.t('OK') : Drupal.t('Error');
      $('#tadaa-modules-status').attr('class', modulesClass);
      $('#tadaa-modules-status span.status').text(modulesText);
      // Set the class and text for the variable status.
      var variablesClass = data.variables ? 'ok' : 'error';
      var variablesText = data.variables ? Drupal.t('OK') : Drupal.t('Error');
      $('#tadaa-variables-status').attr('class', variablesClass);
      $('#tadaa-variables-status span.status').text(variablesText);
    });
  }
}

})(jQuery);