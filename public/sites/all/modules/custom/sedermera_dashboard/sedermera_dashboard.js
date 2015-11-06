(function($) {

Drupal.behaviors.sedermeraDashboard = {
  attach: function (context, settings) {

    // Get the verifications block.
    var $verifications = $('.block-sedermera-dashboard-verifications:not(.ajax-processed)').addClass('ajax-processed');

    // Bail out if there's no block to process.
    if (!$verifications.length) {
      return;
    }

    // Add AJAX behavior to the pager.
    $verifications.find('ul.pager a').click(function(event) {
      event.preventDefault();
      $pagerLink = $(this);

      // Add a throbber, just like the Views AJAX pager.
      $pagerLink.after('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');

      // Perform a GET request to the href of the pager link.
      $.get($pagerLink.attr('href'), function(data, success) {
        // Find the new verifications, and replace the current verifications.
        $newVerifications = $(data).find('.block-sedermera-dashboard-verifications');
        $verifications.replaceWith($newVerifications);

        // Attach behaviors.
        Drupal.attachBehaviors($newVerifications);
      });

    });

  }
};

})(jQuery);
