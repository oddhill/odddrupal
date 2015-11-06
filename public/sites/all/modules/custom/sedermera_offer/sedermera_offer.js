(function($) {

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
