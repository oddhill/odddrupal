var EPSACrop = {
 api: null,
 preset: null,
 delta: null,
 presets: {},
 init: false,
 dialog: function(type_name, field_name, delta, img, trueSize) {
    $('body').find('#EPSACropDialog').remove().end().append('<div title="Cropping Image" id="EPSACropDialog"><img src="'+Drupal.settings.epsacrop.base+Drupal.settings.epsacrop.path+'/img/loading.gif" /></div>');
    $('#EPSACropDialog').dialog({
       bgiframe: true,
       height: 600,
       width: 850,
       modal: true,
       draggable: false,
       resizable: false,
       overlay: {
          backgroundColor: '#000',
          opacity: 0.5
       },
       buttons: {
          Save: function() {
            $('#edit-epsacropcoords').val(JSON.stringify(EPSACrop.presets));
            $(this).dialog('close');
            $('#EPSACropDialog').remove();
          },
          Cancel: function() {
             $(this).dialog('close');
             $('#EPSACropDialog').remove();
          }
       },
       close: function() {
          $('#EPSACropDialog').remove();
       }
    }).load(Drupal.settings.epsacrop.base+'?q=crop/dialog/' + type_name + '/' + field_name, function(){
       try{
	       var preset = $('.epsacrop-presets-menu a[class=selected]').attr('id'); 
	       var coords = $('.epsacrop-presets-menu a[class=selected]').attr('rel').split('x');
	       EPSACrop.preset = preset;
	       EPSACrop.delta = delta;
	       if($('#edit-epsacropcoords').val().length > 0 && EPSACrop.init == false) {
           EPSACrop.presets = eval('(' + $('#edit-epsacropcoords').val() + ')');
           EPSACrop.init = true;
	       }
	       if((typeof EPSACrop.presets[EPSACrop.delta] == 'object') && (typeof EPSACrop.presets[EPSACrop.delta][EPSACrop.preset] == 'object') ) {
	    	   var c = EPSACrop.presets[EPSACrop.delta][EPSACrop.preset];
	       }
	       $('#epsacrop-target').attr({'src': img});
         setTimeout(function(){
           EPSACrop.api = $.Jcrop('#epsacrop-target', {
              aspectRatio: (coords[0] / coords[1]),
              //setSelect: (typeof c == 'object') ? [c.x, c.y, c.x2, c.y2] : [0, 0, coords[0], coords[1]],
              trueSize: trueSize,
              onSelect: EPSACrop.update
           }); // $.Jcrop
           // animateTo, to avoid one bug from Jcrop I guess,
           // He doesn't calculate the scale with setSelect at the begining, so
           // I add animateTo after initate the API.
           EPSACrop.api.animateTo(((typeof c == 'object') ? [c.x, c.y, c.x2, c.y2] : [0, 0, coords[0], coords[1]]));
          }, 1000); // Sleep < d'une second
       }catch(err) {
    	   alert(Drupal.t("Error on load : @error", {'@error': err.message}));
       }
    }); // fin load
 }, // dialog
 crop: function( preset ) {
    $('.epsacrop-presets-menu a').removeClass('selected');
    $('.epsacrop-presets-menu a#'+preset).addClass('selected');
	  var coords = $('.epsacrop-presets-menu a[class=selected]').attr('rel').split('x');
    EPSACrop.preset = preset;
    if(typeof EPSACrop.presets[EPSACrop.delta] == 'object' && typeof EPSACrop.presets[EPSACrop.delta][EPSACrop.preset] == 'object' ) {
       var c = EPSACrop.presets[EPSACrop.delta][preset];
       EPSACrop.api.animateTo([c.x, c.y, c.x2, c.y2]);
    }else{
       EPSACrop.api.animateTo([0, 0, coords[0], coords[1]]);
    }
    EPSACrop.api.setOptions({aspectRatio: coords[0]/coords[1]});
 },
 update: function( c ) {
    var preset 	= EPSACrop.preset;
    var delta 	= EPSACrop.delta;
    if(typeof EPSACrop.presets[delta] != 'object') {
    	EPSACrop.presets[delta] = {};
    }
    EPSACrop.presets[delta][preset] = c;
 }
};
