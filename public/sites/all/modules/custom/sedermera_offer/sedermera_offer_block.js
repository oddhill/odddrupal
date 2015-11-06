(function($) {

Drupal.behaviors.sedermeraOfferStock = {
  attach: function (context, settings) {

    // Create the progress bar for the total.
    $('.total-wrapper .progress .progress-bar').progressbar({
      display_text: 'fill'
    });

    // Create the progress bar for the vertical bars.
    $('.vertical-bars .progress .progress-bar').progressbar({
      display_text: 'center'
    });

  }
};

})(jQuery);
