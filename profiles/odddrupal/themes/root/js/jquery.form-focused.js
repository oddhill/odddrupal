(function($){  
  $.fn.focusedForm = function() {  
    return $(':input', this).each(function() {
      $(this).focus(function() {
        $(this).addClass('focused');
      });
      $(this).blur(function() {
		    $(this).removeClass('focused');
      });
    });
  };  
})(jQuery); 