(function($) {

Drupal.behaviors.sedermeraVerificationsModal = {
  attach: function(context, settings) {

    // View verifications in a modal.
    $('a.verification.view').once('verification-view-modal').magnificPopup({
      type: 'ajax',
      closeOnBgClick: false,
      callbacks: {
        parseAjax: function(mfpResponse) {
          // Alter the data in order to display the node only.
          mfpResponse.data = $(mfpResponse.data).find('.content-wrapper .node');
        },
        ajaxContentAdded: function() {
          Drupal.attachBehaviors();

          // Close modal when clicking "OK" button
          $('.modal-close').on('click', function() {
            $.magnificPopup.close();
          });
        }
      }
    });

    // Edit verifications in a modal.
    $('a.verification.edit, .mfp-verification-edit').once('verification-edit-modal').magnificPopup({
      type: 'ajax',
      closeOnBgClick: false,
      callbacks: {
        parseAjax: function(mfpResponse) {
          // Find the scripts which doesn't exist for the page already.
          $(mfpResponse.data).filter('script').each(function() {
            var src = $(this).attr('src');

            // Add the script to head if the src is missing (JS settings) or if
            // the script doesn't exist.
            if (!src || !$('script[src="' + src + '"]').length) {
              $('head').append(this);
            }
          });

          // Alter the data in order to display the form only.
          mfpResponse.data = $(mfpResponse.data).find('.content-wrapper form');
        },
        ajaxContentAdded: function() {
          Drupal.attachBehaviors();

          // Submit the form via AJAX when clicking the submit button.
          $(this.content).find('.form-actions :submit').click(function(event) {
            event.preventDefault();

            // Submit the form.
            $(this).closest('form').ajaxSubmit({
              beforeSubmit: function(formData, $form) {
                // Add a throbber before the form is submitted.
                var throbberElement = $('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');
                $('.throbber', throbberElement).after('<div class="message">Vänligen vänta...</div>');
                $form.find('.form-actions :submit').after(throbberElement);
              },
              success: function(responseText) {
                // Reload the current page by performing a GET request to the
                // current path, appended with /reload. This assumes that we're
                // currently displaying one of the lists that supports a reload.
                // See sedermera_transaction_menu() for further details.
                $.get(window.location.pathname + '/reload', function(data) {
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

                // Define the new content of the modal.
                var content = '<div class="verification-body"><div class="success"><p>Ändringarna sparades.</p></div></div><div class="verification-footer"><button title="Close (Esc)" type="button" class="modal-close">OK</button></div>';

                // Open a new modal with the content.
                $.magnificPopup.open({
                  items: {
                    src: content,
                    type: 'inline'
                  }
                });

                // Close modal when clicking "OK" button
                $('.modal-close').on('click', function() {
                  $.magnificPopup.close();
                });
              }
            });
          });
        }
      }
    });

    // View multiple verifications in a modal.
    $('a.verification.view-page').once('verification-view-modal').magnificPopup({
      type: 'ajax',
      closeOnBgClick: false,
      callbacks: {
        parseAjax: function(mfpResponse) {
          // Alter the data in order to display the node only.
          mfpResponse.data = $(mfpResponse.data).find('.content-wrapper .verifications-summary');
        },
        ajaxContentAdded: function() {
          Drupal.attachBehaviors();

          // Close modal when clicking "OK" button
          $('.modal-close').on('click', function() {
            $.magnificPopup.close();
          });
        }
      }
    });

  }
};

})(jQuery);
