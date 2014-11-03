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

// Override module javascript and use try catch to isolate errors.
Drupal.behaviors.form_placeholder = {
  attach: function(context, settings) {
    try {
      var include = settings.form_placeholder.include;
      if (include) {
        include += ', ';
      }
      include += '.form-placeholder-include-children *';
      include += ', .form-placeholder-include';
      var exclude = settings.form_placeholder.exclude;
      if (exclude) {
        exclude += ', ';
      }
      exclude += '.form-placeholder-exclude-children *';
      exclude += ', .form-placeholder-exclude';

      var required_indicator = settings.form_placeholder.required_indicator;

      $(include, context).not(exclude).each(function() {
        $textfield = $(this);

        // Check if element is a textfield.
        if (!$textfield.is('input[type=text], input[type=email], input[type=password], textarea')) {
          return;
        }
        // Placeholder is supported.
        else if (Drupal.form_placeholder.placeholderIsSupported() || settings.form_placeholder.fallback_support) {
          $form = $textfield.closest('form');
          $label = $form.find('label[for=' + this.id + ']');

          if (required_indicator === 'append') {
            $label.find('.form-required').insertAfter($textfield).prepend('&nbsp;');
          }
          else if (required_indicator === 'remove') {
            $label.find('.form-required').remove();
          }
          else if (required_indicator === 'text') {
            $label.find('.form-required').text('(' + Drupal.t('required') + ')');
          }

          $textfield.attr('placeholder', $.trim($label.text()));
          $label.hide();

          // Fallback support for older browsers.
          if (!Drupal.form_placeholder.placeholderIsSupported() && settings.form_placeholder.fallback_support) {
            $textfield.placeholder();
          }
        }
      });
    } catch(err) {}
  }
};

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

imageFieldChange = function() {
  $('.image-widget-data input[type=file]').on('change', function (e) {
    $in = $(this);
    $in.prev().val($in.val());
  });
};

// Run whenever the DOM tree is changed, e.g. through AJAX/AHAH
Drupal.behaviors.sedermera = {
  attach: function (context, settings) {

    // If SVG is not supported replace it with png version
    if(!Modernizr.svg) { /* Check modernizr for svg support */
      $('img[src*="svg"]').attr('src', function() {
          return $(this).attr('src').replace('.svg', '.png'); /* Replace suffixes with .png */
      });
    }

    // Use selectBoxit on our select lists.
    $('select').selectBoxIt();

    filterHeightMatch();

    imageFieldChange();

    $('.image-widget-data input[type=file]').change(function (e) {
      $in = $(this);
      $in.prev().val($in.val());
    });

    // Use uniform to beautify our checkboxes and radio buttons.
    $('input[type="checkbox"], input[type="radio"]').once().uniform();

  }
};

})(jQuery);
