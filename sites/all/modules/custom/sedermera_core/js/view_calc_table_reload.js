(function ($) {
  Drupal.behaviors.sedermeraViewsCalcTableReload = {
    attach: function (context, settings) {
      var views = {
        erbjudande:['page', 'interest'],
      };
      jQuery.each(Drupal.views.instances, function(i, view) {
        if (view.settings.view_name == "erbjudande") {
          if (typeof views[view.settings.view_name] !== 'undefined') {
            if (views[view.settings.view_name].indexOf(view.settings.view_display_id) > -1) {
              var selector = '.view-dom-id-' + view.settings.view_dom_id;
              $(selector).triggerHandler('RefreshView');
            }
          }
          return false;
        }
      });
    }
  };
})(jQuery);
