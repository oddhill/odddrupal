
(function($) {

/**
 * Initiate Fancybox using selector and options from the module's settings.
 */
Drupal.behaviors.initFancybox = {
  attach : function() {
    var settings = Drupal.settings.fancybox;

    if (settings && settings.selector.length) {
      $(settings.selector).fancybox(settings.options);
    }

    $('.imagefield-fancybox').fancybox(settings.options);
  }
}

})(jQuery);