(function($) {

if (Drupal.jsAC) {

  // Override core functionality (autocomplete fields).
  Drupal.jsAC.prototype.setStatus = function (status) {
    switch (status) {
      case 'begin':
        $(this.input).addClass('throbbing');
        $(this.input).siblings('.throbber').addClass('throbbing'); // New line
        $(this.ariaLive).html(Drupal.t('Searching for matches...'));
        break;
      case 'cancel':
      case 'error':
      case 'found':
        $(this.input).removeClass('throbbing');
        $(this.input).siblings('.throbber').removeClass('throbbing'); // New line
        break;
    }
  };
}

filterHeightMatch = function() {

  var $target = $('.filtered-table');
  var $filter = $target.find('.table-filter');
  var $wrapper = $target.find('.table-wrapper');
  var filterHeight = $filter.outerHeight();
  var wrapperHeight = $wrapper.outerHeight();

  if (filterHeight < wrapperHeight) {
    $filter.height(wrapperHeight);
  }

};

// Run whenever the DOM tree is changed, e.g. through AJAX/AHAH
Drupal.behaviors.sedermera = {
  attach: function (context, settings) {

    // Use selectBoxit on our select lists.
    $('select').selectBoxIt();

    filterHeightMatch();

    // Use uniform to beautify our checkboxes and radio buttons.
    $('input[type="checkbox"], input[type="radio"]').once().uniform();

  }
};

// Run once when the DOM is ready (page load)
$(document).ready(function() {

  // If SVG is not supported replace it with png version
  if(!Modernizr.svg) { /* Check modernizr for svg support */
    $('img[src*="svg"]').attr('src', function() {
        return $(this).attr('src').replace('.svg', '.png'); /* Replace suffixes with .png */
    });
  }

});

})(jQuery);
