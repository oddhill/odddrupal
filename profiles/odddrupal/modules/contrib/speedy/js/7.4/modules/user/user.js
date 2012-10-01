(function(a){Drupal.behaviors.password={attach:function(b,c){var d=c.password;a("input.password-field",b).once("password",function(){var b=a(this),e=a(this).parent(),f=a(this).parent().parent();e.addClass("password-parent"),a("input.password-confirm",f).parent().prepend('<div class="password-confirm">'+d.confirmTitle+" <span></span></div>").addClass("confirm-parent");var g=a("input.password-confirm",f),h=a("div.password-confirm",f),i=a("span",h),j='<div class="password-strength"><div class="password-strength-text" aria-live="assertive"></div><div class="password-strength-title">'+d.strengthTitle+'</div><div class="password-indicator"><div class="indicator"></div></div></div>';a(g).parent().after('<div class="password-suggestions description"></div>'),a(e).prepend(j);var k=a("div.password-suggestions",f).hide(),l=function(){var d=Drupal.evaluatePasswordStrength(b.val(),c.password);k.html()!=d.message&&k.html(d.message),d.strength==100?k.hide():k.show(),a(e).find(".indicator").css("width",d.strength+"%"),a(e).find(".password-strength-text").html(d.indicatorText),m()},m=function(){if(g.val()){var a=b.val()===g.val();h.css({visibility:"visible"}),this.confirmClass&&i.removeClass(this.confirmClass);var c=a?"ok":"error";i.html(d["confirm"+(a?"Success":"Failure")]).addClass(c),this.confirmClass=c}else h.css({visibility:"hidden"})};b.keyup(l).focus(l).blur(l),g.keyup(m).blur(m)})}},Drupal.evaluatePasswordStrength=function(b,c){var d=0,e=100,f=[],g=b.match(/[a-z]+/),h=b.match(/[A-Z]+/),i=b.match(/[0-9]+/),j=b.match(/[^a-zA-Z0-9]+/),k=a("input.username"),l=k.length>0?k.val():c.username;b.length<6&&(f.push(c.tooShort),e-=(6-b.length)*5+30),g||(f.push(c.addLowerCase),d++),h||(f.push(c.addUpperCase),d++),i||(f.push(c.addNumbers),d++),j||(f.push(c.addPunctuation),d++);switch(d){case 1:e-=12.5;break;case 2:e-=25;break;case 3:e-=40;break;case 4:e-=40}return b!==""&&b.toLowerCase()===l.toLowerCase()&&(f.push(c.sameAsUsername),e=5),e<60?indicatorText=c.weak:e<70?indicatorText=c.fair:e<80?indicatorText=c.good:e<=100&&(indicatorText=c.strong),f=c.hasWeaknesses+"<ul><li>"+f.join("</li><li>")+"</li></ul>",{strength:e,message:f,indicatorText:indicatorText}},Drupal.behaviors.fieldUserRegistration={attach:function(b,c){var d=a("form#field-ui-field-edit-form input#edit-instance-settings-user-register-form");d.size()&&a("input#edit-instance-required",b).once("user-register-form-checkbox",function(){a(this).bind("change",function(b){a(this).attr("checked")&&d.attr("checked",!0)})})}}})(jQuery);