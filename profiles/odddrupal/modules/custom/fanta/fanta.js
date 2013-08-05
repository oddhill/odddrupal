(function($) {

  Drupal.behaviors.fanta = {
    attach: function (context, settings) {
      if ($.browser.msie && $.browser.version < 7) {
        // Popup if the browser is IE and the version is smaller than 7.
        e(settings.fanta.ie6Path);
      }
    }
  }

})(jQuery);
