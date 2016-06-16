(function($) {

/**
 * Toggle the text field for the emission value.
 */
var toggleEmissionValueField = function() {
  // Get the checked value for the emission radio buttons.
  var emission = $('.field-name-field-credit-risk-emission input:checked').val();

  // Show or hide the emission value field depending on whether or not the
  // proper radio button has been checked.
  if (parseInt(emission)) {
    $('.field-name-field-credit-risk-emission-value').show();
  }
  else {
    $('.field-name-field-credit-risk-emission-value').hide();
  }
};

Drupal.behaviors.sedermeraCustomerCompanyCredit = {
  attach: function (context, settings) {

    // Toggle the emission field initially and whenever the relevant input
    // changes.
    toggleEmissionValueField();
    $('.field-name-field-credit-risk-emission input').change(toggleEmissionValueField);

  }
};

})(jQuery);
