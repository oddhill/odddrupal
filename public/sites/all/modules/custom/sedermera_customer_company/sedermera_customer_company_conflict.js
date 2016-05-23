(function($) {

Drupal.behaviors.sedermeraCustomerCompanyConflict = {
  attach: function (context, settings) {

    // Find the conflicts checkboxes, based on the field name class.
    var $conflicts = $('.node-conflict-form .form-items-wrapper .field-type-list-boolean').filter(function () {
      return this.className.match(/field-name-field-conflict-/);
    });

    // Process each conflict only once.
    $conflicts.once(function() {
      // Find the label and create the toggler.
      var $label = $('label', this);
      var $toggler = $('<a href="#" class="toggle-info">Info</a>');

      // Insert the toggler after the label.
      $toggler.insertAfter($label);

      // Toggle the description when clicking the toggler.
      $toggler.click(function(event) {
        $(this).parent().toggleClass('active');
        event.preventDefault();
      });
    });

  }
};

})(jQuery);
