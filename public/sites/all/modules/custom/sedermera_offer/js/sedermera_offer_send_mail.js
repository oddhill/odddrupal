(function($) {

Drupal.behaviors.sedermeraOfferSendMail = {
  attach: function(context, settings) {

    $('a.send-mail').once('send-mail').click(function(e) {
      e.preventDefault();
      var $this = $(this);

      // Prompt the user before sending an email.
      if (!confirm('Är du säker på att du vill skicka informationen via e-post?')) {
        return;
      }

      // Bail out if this already has been triggered.
      if ($this.prop('clicked')) {
        return;
      }

      // Mark this as triggered.
      $this.prop('clicked', true);

      // Insert a throbber in the same way as Drupal does it.
      var throbberElement = $('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');
      $('.throbber', throbberElement).after('<div class="message">Vänligen vänta...</div>');
      $this.after(throbberElement);

      // Perform a GET request to the callback which creates the Transaktion AP
      // node.
      $.get($this.attr('href'), function(data, success) {
        var ajax = Drupal.ajax.prototype;

        // Remove the throbber.
        throbberElement.remove();

        // Reset the clicked property.
        $this.prop('clicked', false);

        // Set the AJAX effect.
        ajax.effect = 'none';

        // Execute every command that got returned.
        for (var i in data) {
          ajax.commands[data[i].command](ajax, data[i], status);
        }

        // Attach behaviors.
        Drupal.attachBehaviors();
      });
    });

  }
};

}(jQuery));
