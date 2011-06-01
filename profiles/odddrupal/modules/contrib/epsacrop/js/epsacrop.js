Drupal.EPSACrop = {
 api: null,
 preset: null,
 delta: null,
 presets: {},
 init: false,
 dialog: function(type_name, field_name, delta, img, trueSize) {
    $('body').find('#EPSACropDialog').remove().end().append('<div title="'+ Drupal.t("Cropping Image") +'" id="EPSACropDialog"><img src="'+ Drupal.settings.epsacrop.base + Drupal.settings.epsacrop.path +'/img/loading.gif" /></div>');

    // Translatables buttons
    var buttons = {}
    var saveLabel = Drupal.t("Save");
    var cancelLabel = Drupal.t("Cancel");
    buttons[saveLabel] = function(){
      $('#edit-epsacropcoords').val(JSON.stringify(Drupal.EPSACrop.presets));
      $(this).dialog('close');
      $('#EPSACropDialog').remove();
    };
    buttons[cancelLabel] = function () {
      $(this).dialog('close');
      $('#EPSACropDialog').remove();
    }
    
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
       buttons: buttons,
       close: function() {
          $('#EPSACropDialog').remove();
       }
    }).load(Drupal.settings.epsacrop.base +'?q=crop/dialog/' + type_name + '/' + field_name, function(){
       try{
	       var preset = $('.epsacrop-presets-menu a[class=selected]').attr('id'); 
	       var coords = $('.epsacrop-presets-menu a[class=selected]').attr('rel').split('x');
	       Drupal.EPSACrop.preset = preset;
	       Drupal.EPSACrop.delta = delta;
	       if($('#edit-epsacropcoords').val().length > 0 && Drupal.EPSACrop.init == false) {
           Drupal.EPSACrop.presets = eval('(' + $('#edit-epsacropcoords').val() + ')');
           Drupal.EPSACrop.init = true;
	       }
	       if((typeof Drupal.EPSACrop.presets[Drupal.EPSACrop.delta] == 'object') && (typeof Drupal.EPSACrop.presets[Drupal.EPSACrop.delta][Drupal.EPSACrop.preset] == 'object') ) {
	    	   var c = Drupal.EPSACrop.presets[Drupal.EPSACrop.delta][Drupal.EPSACrop.preset];
	       }
	       $('#epsacrop-target').attr({'src': img});
         setTimeout(function(){
           Drupal.EPSACrop.api = $.Jcrop('#epsacrop-target', {
              aspectRatio: (coords[0] / coords[1]),
              //setSelect: (typeof c == 'object') ? [c.x, c.y, c.x2, c.y2] : [0, 0, coords[0], coords[1]],
              trueSize: trueSize,
              onSelect: Drupal.EPSACrop.update
           }); // $.Jcrop
           // animateTo, to avoid one bug from Jcrop I guess,
           // He doesn't calculate the scale with setSelect at the begining, so
           // I add animateTo after initate the API.
           Drupal.EPSACrop.api.animateTo(((typeof c == 'object') ? [c.x, c.y, c.x2, c.y2] : [0, 0, coords[0], coords[1]]));
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
    Drupal.EPSACrop.preset = preset;
    if(typeof Drupal.EPSACrop.presets[Drupal.EPSACrop.delta] == 'object' && typeof Drupal.EPSACrop.presets[Drupal.EPSACrop.delta][Drupal.EPSACrop.preset] == 'object' ) {
       var c = Drupal.EPSACrop.presets[Drupal.EPSACrop.delta][preset];
       Drupal.EPSACrop.api.animateTo([c.x, c.y, c.x2, c.y2]);
    }else{
       Drupal.EPSACrop.api.animateTo([0, 0, coords[0], coords[1]]);
    }
    Drupal.EPSACrop.api.setOptions({aspectRatio: coords[0]/coords[1]});
 },
 update: function( c ) {
    var preset 	= Drupal.EPSACrop.preset;
    var delta 	= Drupal.EPSACrop.delta;
    if(typeof Drupal.EPSACrop.presets[delta] != 'object') {
    	Drupal.EPSACrop.presets[delta] = {};
    }
    Drupal.EPSACrop.presets[delta][preset] = c;
 }
};
