(function($) {

Drupal.behaviors.sedermeraOffer = {
  attach: function (context, settings) {

    // Find the relevant elements.
    $tableForm = $('#views-form-investors-offer-embed');
    $tableFormCheckboxes = $tableForm.find('td.views-field-views-bulk-operations input[type=checkbox]');
    $investorCheckboxes = $('#edit-investors input[type=checkbox]');

    // Empty the "real" investor checkboxes if the views exposed form was
    // submitted.
    if ($(context).is('#views-exposed-form-investors-offer-embed')) {
      $investorCheckboxes.prop('checked', false).change();
    }

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
