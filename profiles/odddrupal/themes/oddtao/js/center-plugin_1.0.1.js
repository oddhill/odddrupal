/*
 * 
 * Center Plugin 1.0 - Easy cross-browser centering a div!
 * Version 1.0.1
 * @requires jQuery v1.3.0
 * 
 * Copyright (c) 2010 Matthias Isler
 * Licensed under the GPL licenses:
 * http://www.gnu.org/licenses/gpl.html
 * 
 */
jQuery.fn.center = function(init) {
		
	var object = this;
		
	if(!init) {
			
		object.css('margin-top', $(window).height() / 2 - this.height() / 2);
		object.css('margin-left', $(window).width() / 2 - this.width() / 2);
			
		$(window).resize(function() {
			object.center(!init);
		});
		
	} else {
			
		var marginTop = $(window).height() / 2 - this.height() / 2;
		var marginLeft = $(window).width() / 2 - this.width() / 2;
			
		marginTop = (marginTop < 0) ? 0 : marginTop;
		marginLeft = (marginLeft < 0) ? 0 : marginLeft;

		object.stop();
		object.animate(
			{
				marginTop: marginTop, 
				marginLeft: marginLeft
			}, 
			150, 
			'linear'
		);
		
	}
}