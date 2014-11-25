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

    // Toggle the value for the submit button when changing the send email
    // checkbox.
    $('#edit-send-mail').once(function() {
      $(this).change(function() {
        var submitText = $(this).is(':checked') ? 'Lägg till valda investerare, och skicka ut e-post' : 'Lägg till valda investerare';
        $(this).closest('form').find('input[type=submit]').val(submitText);
      });
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

})(jQuery);
