(function($) {

Drupal.behaviors.sedermeraVerificationsModal = {
  attach: function(context, settings) {

    // View verifications in a modal.
    $('a.verification.view').once('verification-view-modal').magnificPopup({
      type: 'ajax',
      callbacks: {
        parseAjax: function(mfpResponse) {
          // Alter the data in order to display the node only.
          mfpResponse.data = $(mfpResponse.data).find('.content-wrapper .node');
        },
        ajaxContentAdded: function() {
          Drupal.attachBehaviors();
        }
      }
    });

    // Edit verifications in a modal.
    $('a.verification.edit').once('verification-edit-modal').magnificPopup({
      type: 'ajax',
      callbacks: {
        parseAjax: function(mfpResponse) {
          // Alter the data in order to display the form only.
          mfpResponse.data = $(mfpResponse.data).find('.content-wrapper form');
        },
        ajaxContentAdded: function() {
          Drupal.attachBehaviors();
        }
      }
    });

    // View multiple verifications in a modal.
    $('a.verification.view-page').once('verification-view-modal').magnificPopup({
      type: 'ajax',
      callbacks: {
        parseAjax: function(mfpResponse) {
          // Alter the data in order to display the node only.
          mfpResponse.data = $(mfpResponse.data).find('.content-wrapper .view-verifications');
        },
        ajaxContentAdded: function() {
          Drupal.attachBehaviors();
        }
      }
    });

  }
};

})(jQuery);
