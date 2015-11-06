(function($) {

Drupal.behaviors.sedermeraVerificationStatusField = {
  attach: function (context, settings) {

    // Process each link that we find.
    $('a.sedermera-verification-status-check').once().each(function() {
      var $link = $(this);

      // Build the URL for the AJAX call, by removing the query string and
      // appending /check.
      var url = $link.prop('href').split('?')[0] + '/check'

      // Set the initial text for the link.
      $link.text('Hämtar...');
      $link.addClass('waiting');

      // Perform the AJAX request.
      $.get(url, function(data) {
        // Set the status text and class depending on the retrieved status.
        switch (data) {
          case settings.sedermeraVerification.notApproved:
            var statusText = 'Ej godkänd';
            var statusClass = 'not-approved';
            break;

          case settings.sedermeraVerification.expired:
            var statusText = 'Utgången';
            var statusClass = 'expired';
            break;

          case settings.sedermeraVerification.expiring:
            var statusText = 'Utgående';
            var statusClass = 'expiring';
            break;

          default:
            var statusText = 'Godkänd';
            var statusClass = 'approved';
        }

        // Change the text and status.
        $link.text(statusText);
        $link.removeClass('waiting').addClass(statusClass);
      })
    });

  }
};

})(jQuery);
