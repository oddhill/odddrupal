(function($) {

Drupal.behaviors.sedermeraOfferEmail= {
  attach: function (context, settings) {

    // Find the relevant elements.
    var $checkbox = $('#edit-send-email');
    var $submitButton = $checkbox.closest('form').find('input[type=submit][name=op]');

    // Toggle the value for the submit button when changing the send email
    // checkbox.
    $checkbox.once(function() {
      $checkbox.change(function() {
        var submitText = $checkbox.is(':checked') ? settings.sedermera_offer.send_email : settings.sedermera_offer.no_email;
        $submitButton.val(submitText);
      });
    });

  }
};

})(jQuery);
