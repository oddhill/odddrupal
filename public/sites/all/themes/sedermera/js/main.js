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

// View and edit content in modals
var initiateModals = function() {

  // View control in modal
  $('.mfp-verification-view').magnificPopup({
    type: 'ajax',

    callbacks: {
      parseAjax: function(mfpResponse) {
        // mfpResponse.data is a "data" object from ajax "success" callback
        // for simple HTML file, it will be just String
        // You may modify it to change contents of the popup
        // For example, to show just #some-element:
        mfpResponse.data = $(mfpResponse.data).find('.node-ctrl, .node-transaction-agreement');

        // mfpResponse.data must be a String or a DOM (jQuery) element

        console.log('Ajax content loaded:', mfpResponse);
      },
      ajaxContentAdded: function() {
        // Ajax content is loaded and appended to DOM
        console.log(this.content);

        // Close modal when clicking "OK" button
        $('.modal-close').on('click', function() {
          $.magnificPopup.close();
        });
      }
    }
  });

  // Edit control in modal
  $('.mfp-verification-edit').magnificPopup({
    type: 'ajax',

    callbacks: {
      parseAjax: function(mfpResponse) {
        // mfpResponse.data is a "data" object from ajax "success" callback
        // for simple HTML file, it will be just String
        // You may modify it to change contents of the popup
        // For example, to show just #some-element:
        mfpResponse.data = $(mfpResponse.data).find('.node-form');

        // mfpResponse.data must be a String or a DOM (jQuery) element

        console.log('Ajax content loaded:', mfpResponse);
      },
      ajaxContentAdded: function() {
        // Ajax content is loaded and appended to DOM
        console.log(this.content);

        // Use selectBoxit on our select lists.
        $('select').selectBoxIt();
      }
    }
  });
};

// Handle select container states
var selectLookAlike = function() {

  var $container = $('.select-container');
  var $button = $container.find('.select');

  $('html').on('click', function() {
    $container.removeClass('active');
  });

  $button.once().on('click', function() {
    $(this).parents('.select-container').toggleClass('active');
  });

  $container.click(function(event) {
    event.stopPropagation();
  });
};

// Interested list collapsing
var listCollapser = function() {

  // Define vars
  var $collapseCells, $investors, $button, collapseDataId;

  // Store all collapisble cells
  $collapseCells = $('td.collapsible');
  $button = $collapseCells.find('span.icon');

  // Add click behavior
  $button.on('click', function() {
    $(this).parents('tr').toggleClass('collapsed');
    collapseDataId = $(this).parents('tr').data('id');
    $('tr.investor-row[data-id=' + collapseDataId + ']').toggleClass('hidden');
    $('tr.summation-row[data-id=' + collapseDataId + ']').toggleClass('hidden');
    $('tr.agreement-row[data-id=' + collapseDataId + ']').toggleClass('hidden');
    $('tr.empty-row[data-id=' + collapseDataId + ']').toggleClass('hidden');
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

  // Add a TOC to controls
  tocInitiator();

  // Initiate modals
  initiateModals();

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
    $('select').selectBoxIt({
      showFirstOption: false
    });

    selectLookAlike();
    listCollapser();

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
if (Drupal.ajax) {
  Drupal.ajax.prototype.commands.viewsScrollTop = function (ajax, response, status) {

  };
}

// Override the default event handler for the required state. We have configured
// the form placeholder module to place the required asterix after the actual
// input instead of within the label, since we're using the label as a
// placeholder and hiding the regular label. This override will also place the
// marker after the input instead of within the label.
// @see misc/states.js.
$(document).unbind('state:required');
$(document).bind('state:required', function(e) {
  if (e.trigger) {
    var $input = $(e.target);
    var $wrapper = $input.closest('.form-item, .form-wrapper');

    if (e.value) {
      // Avoids duplicate required markers on initialization.
      if (!$wrapper.find('.form-required').length) {
        $input.after('<span class="form-required">*</span>');
      }
    }
    else {
      $wrapper.find('.form-required').remove();
    }
  }
});

})(jQuery);
