// Define the namespace for the module.
Drupal.tadaa = {};

$(document).ready(function() {
  
  // Refresh the current status.
  Drupal.tadaa.refresh_overview();
  
  // Update the environment when the select changes.
  $('#tadaa-environments').change(function() {
    if ($(this).val() != '') {
      $(this).attr('disabled', 'disabled');
      $.ajax({
        async: false,
        url: 'tadaa/environment/set/' + $(this).val(),
        dataType: 'json',
        success: function(data) {
          Drupal.settings.tadaa.environment = data.environment;
          Drupal.settings.tadaa.modules = data.modules;
          Drupal.settings.tadaa.variables = data.variables;
          Drupal.tadaa.refresh_overview();
          Drupal.tadaa.refresh_modules();
          Drupal.tadaa.refresh_variables();
        }
      });
      $(this).removeAttr('disabled');
    }
  });
  
  // Update the email when the value changes.
  $('#tadaa-mail').focus(function() {
    $(this).parent('div').addClass('focused');  
  });
  $('#tadaa-mail').blur(function() {
    $(this).parent('div').removeClass('focused');
  });
  $('#tadaa-mail').change(function() {
    var mail = $(this).val();
    var expression = /^(([^<>()[\]\\.,;:\s@\"]+(\.[^<>()[\]\\.,;:\s@\"]+)*)|(\".+\"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/
    if (mail.match(expression)) {
      $(this).attr('disabled', 'disabled');
      $(this).parent('div').removeClass('invalid');
      $.ajax({
        async: false,
        url: 'tadaa/mail/set/' + $(this).val(),
        dataType: 'json',
      });
      $(this).removeAttr('disabled');
    }
    else {
      $(this).parent('div').addClass('invalid');
    }
  });
  
  // Disable the hashtag links.
  $('#tadaa-module-state a, #tadaa-variable-state a').click(function() {
    return false;
  });
  
  // Open the module status table in a fancybox.
  $('#tadaa-module-state a').fancybox({
    onStart: function() {
      Drupal.tadaa.refresh_modules();
    }
  });
  
  // Open the variable status table in a fancybox.
  $('#tadaa-variable-state a').fancybox({
    onStart: function() {
      Drupal.tadaa.refresh_variables();
    }
  });
});

Drupal.tadaa.refresh_overview = function() {
  if (Drupal.settings.tadaa.environment) {
    // Set the default class.
    $('#tadaa-module-state a, #tadaa-variable-state a').attr('class', Drupal.settings.tadaa.classes.loading);
    
    // Show or hide the email field.
    if (Drupal.settings.tadaa.modules.reroute_email) {
      $('.tadaa-mail-wrapper').show();
    }
    else {
      $('.tadaa-mail-wrapper').hide();
    }
    
    // Update the state for the environment.
    $.getJSON(Drupal.settings.basePath + 'tadaa/environment/check', function(data) {
      var modulesClass = data.modules ? Drupal.settings.tadaa.classes.valid : Drupal.settings.tadaa.classes.invalid;
      $('#tadaa-module-state a').attr('class', modulesClass);
      var variablesClass = data.variables ? Drupal.settings.tadaa.classes.valid : Drupal.settings.tadaa.classes.invalid;
      $('#tadaa-variable-state a').attr('class', variablesClass);
    });
  }
  else {
    $('.tadaa-module-state-wrapper').hide();
    $('.tadaa-variable-state-wrapper').hide();
    $('.tadaa-mail-wraper').hide();
  }
}

Drupal.tadaa.refresh_modules = function() {
  if (Drupal.settings.tadaa.environment) {
    // Set the default texts.
    $('#tadaa-module-status td.config').text('Hämtar...');
    $('#tadaa-module-status td.state').text('Jämför...');

    // Update the state for the modules.
    for (var module in Drupal.settings.tadaa.modules) {
      $.getJSON(Drupal.settings.basePath + 'tadaa/module/' + module + '/check', function(data) {
        var config = data.config ? 'Aktiverad' : 'Inaktiverad';
        var state = data.state ? 'OK' : 'FEL';
        $('#tadaa-module-status tr.' + data.module + ' td.config').text(config);
        $('#tadaa-module-status tr.' + data.module + ' td.state').text(state);
      });
    }
  }
  else {
    $('#tadaa-module-status td.config, #tadaa-module-status td.state').text('');
  }
}

Drupal.tadaa.refresh_variables = function() {
  if (Drupal.settings.tadaa.environment) {
    // Set the default texts.
    $('#tadaa-variable-status td.config').text('Hämtar...');
    $('#tadaa-variable-status td.state').text('Jämför...');

    // Update the state for the modules.
    for (var variable in Drupal.settings.tadaa.variables) {
      $.getJSON(Drupal.settings.basePath + 'tadaa/variable/' + variable + '/check', function(data) {
        var state = data.state ? 'OK' : 'FEL';
        $('#tadaa-variable-status tr.' + data.variable + ' td.config').text(data.config);
        $('#tadaa-variable-status tr.' + data.variable + ' td.state').text(state);
      });
    }
  }
  else {
    $('#tadaa-variable-status td.config, #tadaa-variable-status td.state').text('');
  }
}