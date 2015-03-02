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

// Run once when the DOM is ready (page load)
$(document).ready(function() {

  // Fade in the date format (Kontaktlista)
  $(".form-type-date-combo .date-date .form-text").on('focusin', function() {
    $(this).parent().siblings(".description").fadeIn();
  });

  // Fade out the date format (Kontaktlista)
  $(".form-type-date-combo .date-date .form-text").on('focusout', function() {
    $(this).parent().siblings(".description").fadeOut();
  });
});

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

/**
 * Sets equal heights to columns.
 */
columnHeightMatch = function() {
  var $groups = $('.column');
  $groups.matchHeight();
};

/**
 * Function that sets the value of the image field to the new
 * text field that is used as a substitute.
 */

imageFieldChange = function() {
  $('.image-widget-data input[type=file]').on('change', function (e) {
    $in = $(this);
    $in.prev().val($in.val());
  });
};

/**
 * Function that sets the value of the file field to the new
 * text field that is used as a substitute.
 */
fileFieldChange = function() {
  $('.file-widget-data input[type=file]').on('change', function (e) {
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

    // Set equal heights to columns.
    columnHeightMatch();

    // Add the file field value to the substitute text field when
    // we've chosen a file from the file browser.
    imageFieldChange();
    fileFieldChange();

    // Use uniform to beautify our checkboxes and radio buttons. We'll add an
    // event listener to the change event, since Uniform doesn't automatically
    // respond to the change event. This is required since a "select-all"
    // checkbox doesn't actually click every checkbox, but only changes the
    // checked property.
    $('input[type="checkbox"], input[type="radio"]').once().uniform().change(function() {
      var $input = $(this);

      // Add the checked class to the parent element if the input has been
      // checked, or remove it otherwise.
      if ($input.prop('checked')) {
        $input.parent().addClass('checked');
      }
      else {
        $input.parent().removeClass('checked');
      }
    });
  }
};

/**
 * Override the Views AJAX scroll behavior when loading new content with an
 * empty function in order to disable the scrolling.
 */
Drupal.ajax.prototype.commands.viewsScrollTop = function (ajax, response, status) {

};

})(jQuery);
