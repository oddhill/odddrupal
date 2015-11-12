(function ($) {

  Drupal.behaviors.editablefieldsViewsRefresh = {
    attach: function (context, settings) {
      $('.editable-field').ajaxComplete(function(event, xhr, settings) {
        location.reload();
      });
    }
  };
})(jQuery);
