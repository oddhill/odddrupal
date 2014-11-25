(function($) {

Drupal.behaviors.sedermeraOfferWorkFlow = {
  attach: function (context, settings) {

    // Find the relevant elements.
    $tableForm = $('#views-form-investors-offer-embed');
    $tableFormCheckboxes = $tableForm.find('td.views-field-views-bulk-operations input[type=checkbox]');
    $investorCheckboxes = $('#edit-investors input[type=checkbox]');

    // Check the table checkboxes that corresponds to a checked investor
    // checkbox.
    $investorCheckboxes.filter(':checked').each(function() {
      $tableFormCheckboxes.filter('[value=' + this.value + ']').prop('checked', true).change();
    });

    // Change the checked property for the "real" investor checkboxes when the
    // corresponding checkbox from the view changes.
    $tableFormCheckboxes.once(function() {
      $(this).change(function() {
        $investorCheckboxes.filter('[value=' + this.value + ']').prop('checked', $(this).prop('checked')).change();
      })
    });

  }
};

Drupal.behaviors.sedermeraOfferStock = {
  attach: function (context, settings) {

    // Create the progress bar for the signed status.
    $('.progress .progress-bar').progressbar({
      display_text: 'fill'
    });

  }
};

Drupal.behaviors.sedermeraOfferWarning = {
  attach: function (context, settings) {

    // Indicates whether the form has been submitted or not.
    var formSubmitted = false;

    // Change the submitted property ones any form has been submitted.
    $('form').submit(function() {
      formSubmitted = true;
    });

    // Warn the user when leaving the page, if the form wasn't submitted.
    $(window).bind('beforeunload', function() {
      if (!formSubmitted) {
        return 'Om du lämnar sidan kommer transaktionen inte att skapas, och du förlorar all information du har angivit.';
      }
    });

  }
};

})(jQuery);
