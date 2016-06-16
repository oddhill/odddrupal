(function($) {

Drupal.behaviors.sedermeraTransactionAddAp = {
  attach: function(context, settings) {

    $(':checkbox.add-transaction-ap').once('add-transaction-ap').change(function(e) {
      var $this = $(this);

      // Make sure that the checkbox is checked, just in case.
      if (!$this.is(':checked')) {
        return;
      }

      // Get the offer, transaction and avtalspart IDs.
      var offer_id = $this.data('offer-id');
      var transaction_id = $this.data('transaction-id');
      var ap_id = $this.data('ap-id');

      // Insert a throbber in the same way as Drupal does it.
      var throbberElement = $('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');
      $('.throbber', throbberElement).after('<div class="message">Vänligen vänta...</div>');
      $this.after(throbberElement);

      // Perform a GET request to the callback which creates the Transaktion AP
      // node.
      $.get(settings.basePath + 'node/' + offer_id + '/add-ap/' + transaction_id + '/' + ap_id, function(data, success) {
        var ajax = Drupal.ajax.prototype;

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
