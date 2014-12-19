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
        // Set the text and class depending on the status for the verification.
        var statusText = data ? 'Godkänd' : 'Ej godkänd';
        var statusClass = data ? 'approved' : 'not-approved';

        // Change the text and status.
        $link.text(statusText);
        $link.removeClass('waiting').addClass(statusClass);
      })
    });

  }
};

})(jQuery);
