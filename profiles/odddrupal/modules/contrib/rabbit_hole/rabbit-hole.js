(function($) {

Drupal.behaviors.rabbitHole = {
  attach: function (context, settings) {

    // Set the summary for the settings form.
    $('fieldset.rabbit-hole-settings-form').drupalSetSummary(function() {
      var $rabbitHoleAction = $('#edit-rabbit-hole-action input:checked');
      
      // Get the label of the selected action.
      var summary = $('label[for=' + $rabbitHoleAction.attr('id') + ']').text();
      
      // If redirect is selected, add the url to the summary.
      if ($rabbitHoleAction.val() == settings.rabbitHole.redirectValue) {
        summary += ' (' + $('#edit-rabbit-hole-redirect').val() + ')';
      }
      
      return Drupal.checkPlain(summary);
    });
  
    // Only show the redirect options if the user has selected redirect as the
    // behavior.
    var $redirectFieldset = $('fieldset.rabbit-hole-redirect-options');
    if ($('#edit-rabbit-hole input[name=rabbit_hole_action]:checked').val() != settings.rabbitHole.redirectValue) {
      $redirectFieldset.hide();
    }
    $('#edit-rabbit-hole input[name=rabbit_hole_action]').change(function() {
      if ($(this).val() == settings.rabbitHole.redirectValue) {
        $redirectFieldset.show();
      }
      else {
        $redirectFieldset.hide();
      }
    });
  
  }
}

})(jQuery);