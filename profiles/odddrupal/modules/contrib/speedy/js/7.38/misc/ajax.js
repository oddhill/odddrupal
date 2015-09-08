(function($){Drupal.ajax=Drupal.ajax||{};Drupal.behaviors.AJAX={attach:function(context,settings){for(var base in settings.ajax){if(!$("#"+base+".ajax-processed").length){var element_settings=settings.ajax[base];if(typeof element_settings.selector=="undefined"){element_settings.selector="#"+base}$(element_settings.selector).each(function(){element_settings.element=this;Drupal.ajax[base]=new Drupal.ajax(base,this,element_settings)});$("#"+base).addClass("ajax-processed")}}$(".use-ajax:not(.ajax-processed)").addClass("ajax-processed").each(function(){var element_settings={};element_settings.progress={type:"throbber"};if($(this).attr("href")){element_settings.url=$(this).attr("href");element_settings.event="click"}var base=$(this).attr("id");Drupal.ajax[base]=new Drupal.ajax(base,this,element_settings)});$(".use-ajax-submit:not(.ajax-processed)").addClass("ajax-processed").each(function(){var element_settings={};element_settings.url=$(this.form).attr("action");element_settings.setClick=true;element_settings.event="click";element_settings.progress={type:"throbber"};var base=$(this).attr("id");Drupal.ajax[base]=new Drupal.ajax(base,this,element_settings)})}};Drupal.ajax=function(base,element,element_settings){var defaults={url:"system/ajax",event:"mousedown",keypress:true,selector:"#"+base,effect:"none",speed:"none",method:"replaceWith",progress:{type:"throbber",message:Drupal.t("Please wait...")},submit:{js:true}};$.extend(this,defaults,element_settings);this.element=element;this.element_settings=element_settings;this.url=element_settings.url.replace(/\/nojs(\/|$|\?|&|#)/g,"/ajax$1");this.wrapper="#"+element_settings.wrapper;if(this.element.form){this.form=$(this.element.form)}var ajax=this;ajax.options={url:ajax.url,data:ajax.submit,beforeSerialize:function(element_settings,options){return ajax.beforeSerialize(element_settings,options)},beforeSubmit:function(form_values,element_settings,options){ajax.ajaxing=true;return ajax.beforeSubmit(form_values,element_settings,options)},beforeSend:function(xmlhttprequest,options){ajax.ajaxing=true;return ajax.beforeSend(xmlhttprequest,options)},success:function(response,status){if(typeof response=="string"){response=$.parseJSON(response)}return ajax.success(response,status)},complete:function(response,status){ajax.ajaxing=false;if(status=="error"||status=="parsererror"){return ajax.error(response,ajax.url)}},dataType:"json",type:"POST"};$(ajax.element).bind(element_settings.event,function(event){return ajax.eventResponse(this,event)});if(element_settings.keypress){$(ajax.element).keypress(function(event){return ajax.keypressResponse(this,event)})}if(element_settings.prevent){$(ajax.element).bind(element_settings.prevent,false)}};Drupal.ajax.prototype.keypressResponse=function(element,event){var ajax=this;if(event.which==13||event.which==32&&element.type!="text"&&element.type!="textarea"){$(ajax.element_settings.element).trigger(ajax.element_settings.event);return false}};Drupal.ajax.prototype.eventResponse=function(element,event){var ajax=this;if(ajax.ajaxing){return false}try{if(ajax.form){if(ajax.setClick){element.form.clk=element}ajax.form.ajaxSubmit(ajax.options)}else{ajax.beforeSerialize(ajax.element,ajax.options);$.ajax(ajax.options)}}catch(e){ajax.ajaxing=false;alert("An error occurred while attempting to process "+ajax.options.url+": "+e.message)}if(typeof element.type!="undefined"&&(element.type=="checkbox"||element.type=="radio")){return true}else{return false}};Drupal.ajax.prototype.beforeSerialize=function(element,options){if(this.form){var settings=this.settings||Drupal.settings;Drupal.detachBehaviors(this.form,settings,"serialize")}options.data["ajax_html_ids[]"]=[];$("[id]").each(function(){options.data["ajax_html_ids[]"].push(this.id)});options.data["ajax_page_state[theme]"]=Drupal.settings.ajaxPageState.theme;options.data["ajax_page_state[theme_token]"]=Drupal.settings.ajaxPageState.theme_token;for(var key in Drupal.settings.ajaxPageState.css){options.data["ajax_page_state[css]["+key+"]"]=1}for(var key in Drupal.settings.ajaxPageState.js){options.data["ajax_page_state[js]["+key+"]"]=1}};Drupal.ajax.prototype.beforeSubmit=function(form_values,element,options){};Drupal.ajax.prototype.beforeSend=function(xmlhttprequest,options){if(this.form){options.extraData=options.extraData||{};options.extraData.ajax_iframe_upload="1";var v=$.fieldValue(this.element);if(v!==null){options.extraData[this.element.name]=Drupal.checkPlain(v)}}$(this.element).addClass("progress-disabled").attr("disabled",true);if(this.progress.type=="bar"){var progressBar=new Drupal.progressBar("ajax-progress-"+this.element.id,eval(this.progress.update_callback),this.progress.method,eval(this.progress.error_callback));if(this.progress.message){progressBar.setProgress(-1,this.progress.message)}if(this.progress.url){progressBar.startMonitoring(this.progress.url,this.progress.interval||1500)}this.progress.element=$(progressBar.element).addClass("ajax-progress ajax-progress-bar");this.progress.object=progressBar;$(this.element).after(this.progress.element)}else if(this.progress.type=="throbber"){this.progress.element=$('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');if(this.progress.message){$(".throbber",this.progress.element).after('<div class="message">'+this.progress.message+"</div>")}$(this.element).after(this.progress.element)}};Drupal.ajax.prototype.success=function(response,status){if(this.progress.element){$(this.progress.element).remove()}if(this.progress.object){this.progress.object.stopMonitoring()}$(this.element).removeClass("progress-disabled").removeAttr("disabled");Drupal.freezeHeight();for(var i in response){if(response.hasOwnProperty(i)&&response[i]["command"]&&this.commands[response[i]["command"]]){this.commands[response[i]["command"]](this,response[i],status)}}if(this.form){var settings=this.settings||Drupal.settings;Drupal.attachBehaviors(this.form,settings)}Drupal.unfreezeHeight();this.settings=null};Drupal.ajax.prototype.getEffect=function(response){var type=response.effect||this.effect;var speed=response.speed||this.speed;var effect={};if(type=="none"){effect.showEffect="show";effect.hideEffect="hide";effect.showSpeed=""}else if(type=="fade"){effect.showEffect="fadeIn";effect.hideEffect="fadeOut";effect.showSpeed=speed}else{effect.showEffect=type+"Toggle";effect.hideEffect=type+"Toggle";effect.showSpeed=speed}return effect};Drupal.ajax.prototype.error=function(response,uri){alert(Drupal.ajaxError(response,uri));if(this.progress.element){$(this.progress.element).remove()}if(this.progress.object){this.progress.object.stopMonitoring()}$(this.wrapper).show();$(this.element).removeClass("progress-disabled").removeAttr("disabled");if(this.form){var settings=response.settings||this.settings||Drupal.settings;Drupal.attachBehaviors(this.form,settings)}};Drupal.ajax.prototype.commands={insert:function(ajax,response,status){var wrapper=response.selector?$(response.selector):$(ajax.wrapper);var method=response.method||ajax.method;var effect=ajax.getEffect(response);var new_content_wrapped=$("<div></div>").html(response.data);var new_content=new_content_wrapped.contents();if(new_content.length!=1||new_content.get(0).nodeType!=1){new_content=new_content_wrapped}switch(method){case"html":case"replaceWith":case"replaceAll":case"empty":case"remove":var settings=response.settings||ajax.settings||Drupal.settings;Drupal.detachBehaviors(wrapper,settings)}wrapper[method](new_content);if(effect.showEffect!="show"){new_content.hide()}if($(".ajax-new-content",new_content).length>0){$(".ajax-new-content",new_content).hide();new_content.show();$(".ajax-new-content",new_content)[effect.showEffect](effect.showSpeed)}else if(effect.showEffect!="show"){new_content[effect.showEffect](effect.showSpeed)}if(new_content.parents("html").length>0){var settings=response.settings||ajax.settings||Drupal.settings;Drupal.attachBehaviors(new_content,settings)}},remove:function(ajax,response,status){var settings=response.settings||ajax.settings||Drupal.settings;Drupal.detachBehaviors($(response.selector),settings);$(response.selector).remove()},changed:function(ajax,response,status){if(!$(response.selector).hasClass("ajax-changed")){$(response.selector).addClass("ajax-changed");if(response.asterisk){$(response.selector).find(response.asterisk).append(' <span class="ajax-changed">*</span> ')}}},alert:function(ajax,response,status){alert(response.text,response.title)},css:function(ajax,response,status){$(response.selector).css(response.argument)},settings:function(ajax,response,status){if(response.merge){$.extend(true,Drupal.settings,response.settings)}else{ajax.settings=response.settings}},data:function(ajax,response,status){$(response.selector).data(response.name,response.value)},invoke:function(ajax,response,status){var $element=$(response.selector);$element[response.method].apply($element,response.arguments)},restripe:function(ajax,response,status){$("> tbody > tr:visible, > tr:visible",$(response.selector)).removeClass("odd even").filter(":even").addClass("odd").end().filter(":odd").addClass("even")},add_css:function(ajax,response,status){$("head").prepend(response.data);var match,importMatch=/^@import url\("(.*)"\);$/gim;if(document.styleSheets[0].addImport&&importMatch.test(response.data)){importMatch.lastIndex=0;while(match=importMatch.exec(response.data)){document.styleSheets[0].addImport(match[1])}}},updateBuildId:function(ajax,response,status){$('input[name="form_build_id"][value="'+response["old"]+'"]').val(response["new"])}}})(jQuery);