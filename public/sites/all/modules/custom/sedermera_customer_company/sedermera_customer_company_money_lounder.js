(function($) {

/**
 * Toggle the file field depending on a Yes/No question.
 *
 * @param obj $questionWrapper
 *   The jQuery object for the wrapper, which should include the radio buttons.
 */
var toggleFieldField = function($inputWrapper) {
  // Get the checked value.
  var exposed = $('input:checked', $inputWrapper).val();

  // Find the file field. We'll assume that this is the next field in order.
  var $fileField = $inputWrapper.next();

  // Show or hide the file field depending on whether or not the proper radio
  // button has been checked.
  if (parseInt(exposed)) {
    $fileField.show();
  }
  else {
    $fileField.hide();
  }
};

Drupal.behaviors.sedermeraCustomerCompanyMoneyLounder = {
  attach: function (context, settings) {

    // Find the wrappers for the political exposed fields.
    var $inputs = $('.field-name-field-launder-exposed, .field-name-field-regime-exposed');

    // Process each input only once.
    $inputs.once(function() {
      var $inputWrapper = $(this);

      // Toggle the file field initially, and everytime the radio buttons
      // changes.
      toggleFieldField($inputWrapper);
      $(':radio', this).change(function() {
        toggleFieldField($inputWrapper);
      });
    });

  }
};

})(jQuery);
