(function($) {

Drupal.behaviors.rabbitHole = {
  attach: function (context, settings) {
    
    var $redirectWrapper = $('fieldset.rabbit-hole-redirect-options');
  
    // Only show the redirect options if the user has selected redirect as the
    // behavior.
    if ($('#edit-rabbit-hole input[name=rabbit_hole_action]:checked').val() != settings.rabbitHole.redirectValue) {
      $redirectWrapper.hide();
    }
    $('#edit-rabbit-hole input[name=rabbit_hole_action]').change(function() {
      if ($(this).val() == settings.rabbitHole.redirectValue) {
        $redirectWrapper.show();
      }
      else {
        $redirectWrapper.hide();
      }
    });
  
  }
}

})(jQuery);