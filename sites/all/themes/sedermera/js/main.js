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

// Function that implements Tocify.
var tocInitiator = function() {

  var $target = $("#toc");
  var offset = $target.offset();
  var l,n,i,x,scrollTo,stickTo;
  var $adminmenu;
  var $toolbar = $("#toolbar");
  var $submenu = $(".main-navigation li.active-trail ul.menu");

  // Set x var to 29 (height) if admin menu is present.
  if ($('body').hasClass('admin-menu')) {
    x = 29;
    $adminmenu = true;
  }
  else {
    x = 0;
    $adminmenu = false;
  }

  // Calculate scrollTo and stickTo values.
  // add 42 or 20 to value so that the margin is included.
  if ($adminmenu || $toolbar || $submenu) {
    scrollTo = x + $toolbar.height() + $submenu.height();
    stickTo = scrollTo + 20;
    scrollTo = scrollTo + 42;
  }
  else {
    scrollTo = 42;
    stickTo = 20;
  }

  $target.tocify({
    context: '.control_list',
    selectors: 'h3',
    scrollTo: scrollTo,
    highlightOffset: scrollTo,
    extendPage: false
  });

  $(window).scroll(function() {
    l = $(window).scrollTop() + stickTo;

    if (offset) {
      i = offset.top;
    }

    n = l - i;

    if (i <= l) {
      $target.css({"transform": 'translateY(' + n + 'px)'});
    }
    else {
      $target.css({"transform": 'translateY(' + 0 + 'px)'});
    }
  });
};

// Run once when the DOM is ready (page load)
$(document).ready(function() {
  var ischeck = 0;
  $("#uniform-edit-field-cap-rais-info-mail-und").click(function() {
    ischeck = 1;
  });

  $('#capital-raising-node-form').submit(function(event) {
    if (ischeck == 1) {
      var conf = confirm('Insynsinformation kommer att loggas ut.');
      if (conf === false) {
        event.preventDefault();
      }
    }
  });

  // Fade in the date format (Kontaktlista)
  $(".form-type-date-combo .date-date .form-text").on('focusin', function() {
    $(this).parent().siblings(".description").fadeIn();
  });

  // Add a TOC to controls
  tocInitiator();

  // Fade out the date format (Kontaktlista)
  $(".form-type-date-combo .date-date .form-text").on('focusout', function() {
    $(this).siblings(".description").fadeOut();
  });

  // Hide/show appendix in Document list (Dina dokument)
  $(".appendix").parent().hide();
  $(".show-appendix").click(function () {
    var elem = $(this).parent().parent();

    elem.siblings().removeClass("open");
    elem.toggleClass("open").nextUntil('tr:has(.document)').slideToggle();

    elem.prevAll('tr:has(.appendix)').hide();
    elem.nextUntil('tr:has(.document)').last().nextAll('tr:has(.appendix)').hide();
  });

  // Move/replace revision tab buttons on page-node-revisions-view
  $('.secondary').insertBefore('.document-head-wrapper');

  // Don't show document header if no header content
  if (!$('.document-head-content').children().length)$('.document-head-content').hide();
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
      exclude += ', .form-placeholder-processed';

      var required_indicator = settings.form_placeholder.required_indicator;

      $(include).not(exclude).each(function() {
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
      }).addClass('form-placeholder-processed');
    } catch(err) {}
  }
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
