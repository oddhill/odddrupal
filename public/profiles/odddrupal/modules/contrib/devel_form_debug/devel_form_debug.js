/**
 * @file devel_form_debug.js
 */
(function ($) {

  /**
   * Custom ajax command that shows content in a Jquery UI Dialog.
   * @param ajax
   * @param response
   * @param status
   */
  Drupal.ajax.prototype.commands.develFormDebugShowDialog = function (ajax, response, status) {

    var body = $('body');
    $('> div#devel-form-debug-dialog', body).length ? $('> div#devel-form-debug-dialog', body) : $('<div id="devel-form-debug-dialog"></div>').appendTo(body);

    var dialog = $("#devel-form-debug-dialog").dialog({
      autoOpen: false,
      width: 600,
      modal: true,
      resizable: true,
      height: "auto",
      fluid: true
    });

    // Show the actual dialog.
    dialog.html(response.data).dialog({title: response.title}).dialog('open');

    Drupal.attachBehaviors(dialog);
  };

  // Close dialog on overlay click.
  $('.ui-widget-overlay').live("click", function() {
    // Close the dialog.
    $("#devel-form-debug-dialog").dialog("close");
  });

  Drupal.behaviors.devel_form_debug = {
    attach: function() {
      var text_input = $('#devel-form-debug-dialog-form input[type=text]'),
          text_area = $('#devel-form-debug-dialog-form textarea');

      // Select all content in input field.
      text_input.focus(function(){
          $(this).select();
      });

      // Select all content in textarea field.
      text_area.focus(function(){
        $(this).select();
      });

      // Prevent webkit browsers from interference.
      text_input.mouseup(function(e){
          e.preventDefault();
      });
    }
  };

}(jQuery));