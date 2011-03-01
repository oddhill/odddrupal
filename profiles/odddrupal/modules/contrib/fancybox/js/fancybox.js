
/**
 * Initiate Fancybox using selector and options from the module's settings.
 */
Drupal.behaviors.initFancybox = function() {
  var settings = Drupal.settings.fancybox;

  // Convert any JavaScript events to function calls.
  var events = ["onStart", "onComplete", "onClosed", "onCleanup", "onCancel"];
  for (var i in events) {
    if (settings.options[events[i]].length && typeof(settings.options[events[i]]) == 'string') {
      settings.options[events[i]] = eval("("+settings.options[events[i]]+")");
    }
  }

  if (settings && settings.selector.length) {
    $(settings.selector).fancybox(settings.options);
  }

  $('.imagefield-fancybox').fancybox(settings.options);

  // emvideo support
  settings.options.hideOnContentClick = false;
  $('.emvideo-modal-fancybox').fancybox(settings.options);

}
