(function($) {

Drupal.behaviors.sedermeraOfferMail= {
  attach: function (context, settings) {

    // Toggle the list of recipients when clicking the counter list item.
    $('li.recipients-counter').once(function() {
      $counter = $(this);
      $items = $counter.siblings();

      // Hide the items.
      $items.hide();

      // Display on click.
      $counter.click(function() {
        $items.slideToggle();
      });
    });

  }
};

})(jQuery);
