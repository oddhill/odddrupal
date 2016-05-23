(function($) {

/**
 * Toggle the note field for a question.
 *
 * @param obj $questionWrapper
 *   The jQuery object for the wrapper, which should include the radio buttons
 *   and note field.
 */
var toggleNoteValueField = function($questionWrapper) {
  // Get the checked value for the emission radio buttons.
  var suitable = $('input:checked', $questionWrapper).val();

  // Fetch the proper note field. We're assuming that this is the next field.
  var $noteField = $questionWrapper.next();

  // Show or hide the note text field depending on whether or not the proper
  // radio button has been checked.
  if (!suitable || parseInt(suitable)) {
    $noteField.hide();
  }
  else {
    $noteField.show();
  }
};

Drupal.behaviors.sedermeraCustomerCompanySuitability = {
  attach: function (context, settings) {

    // Find the question radio buttons, based on the field name class.
    var $questions = $('.node-suitability_assessment-form .form-items-wrapper .field-type-list-boolean').filter(function () {
      return this.className.match(/field-name-field-suitability-quest-/);
    });

    // Process each question only once.
    $questions.once(function() {
      var $questionWrapper = $(this);

      // Toggle the note field initially, and everytime the radio buttons
      // changes.
      toggleNoteValueField($questionWrapper);
      $(':radio', this).change(function() {
        toggleNoteValueField($questionWrapper);
      });
    });

  }
};

})(jQuery);
