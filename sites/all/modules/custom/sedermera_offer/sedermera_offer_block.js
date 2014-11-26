(function($) {

Drupal.behaviors.sedermeraOfferStock = {
  attach: function (context, settings) {

    // Create the progress bar for the signed status.
    $('.progress .progress-bar').progressbar({
      display_text: 'fill'
    });

  }
};

})(jQuery);
