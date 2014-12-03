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

})(jQuery);
