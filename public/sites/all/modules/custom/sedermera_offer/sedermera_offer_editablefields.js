(function($) {

Drupal.behaviors.sedermeraEditablefields = {
  attach: function (context, settings) {

    // Trigger the blur event when pressing the return key for elements other
    // than submit buttons. The first row for the table will be submitted if we
    // don't do this, since a return click submits the first submit button for
    // the form.
    // @see https://www.drupal.org/node/1765712
    $('#views-form-offers-page, #views-form-offers-interest').find('input[type!=submit]').keypress(function(event) {
      if (event.which == 13) {
        event.target.blur();
        return false;
      }
    });
  }
};

})(jQuery);
