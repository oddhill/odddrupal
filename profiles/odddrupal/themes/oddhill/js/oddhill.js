(function($) {

Drupal.behaviors.oddhill = {
  attach: function (context, settings) {
    // Put focused class on every form.
    $('form').focusedForm();
  }
}

})(jQuery);