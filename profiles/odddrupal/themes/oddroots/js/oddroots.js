(function($) {

Drupal.behaviors.oddroots = {
  attach: function (context, settings) {
    // Put focused class on every form.
    $('form').focusedForm();
  }
}

})(jQuery);