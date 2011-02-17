// SevenUp Plugin: "Black"
// Learn more at http://code.google.com/p/sevenup
//This first plugin was a true community effort:
//   Design by Twitter user @MikeNGarrett
//   HTML by Twitter user @staceyfenton
//   Pluginification: @staringispolite

if (sevenUp) {
  sevenUp.plugin.black = {
    test: function(newOptions, callback) {
      newOptions.overrideLightbox = true;
      newOptions.lightboxHTML = " \
      <div id='sevenUpLightbox' style='display:block;position:absolute;top:25%;left: 50%;text-align:center;z-index:1002;overflow:hidden;width:550px;margin-left: -250px'> \
        <div style='width:550px;margin:0px auto;text-align:left;'> \
          <div style='background:url(sites/all/modules/sevenup/black/images/curve-top.gif);font-size:1px;height:18px;width:550px;'></div> \
          <div style='background:#1a1a1a;color:#999;font: 12px Arial, Helvetica, sans-serif;position:relative;text-align:center;width:550px;'> \
            <div style='background:transparent url(sites/all/modules/sevenup/black/images/close.gif);height:26px;position:absolute;right:6px;top:-10px;width:26px;'> \
              <a href='#' onclick='sevenUp.close()' style='display:block;height:26px;text-indent:-9999px;width:26px;'>Close</a> \
            </div> \
<h1 style='margin:0 auto;width:479px;padding-top:20px'>Din webbläsare är omodern.</h1> \
            <p style='font-size:14px;margin:8px 0 11px;'>Du kan enkelt uppgradera till den nyaste versionen.</p> \
            <a href='http://www.microsoft.com/windows/internet-explorer'><img src='sites/all/modules/sevenup/black/images/IE.jpg' alt='Internet Explorer 8' style='border:0;'/></a> \
            <p style='margin:2px 0 22px;'><a href='http://www.microsoft.com/windows/internet-explorer' style='color:#999;text-decoration:none;'>Internet Explorer 8</a></p> \
            <div class='whyUpgrade' style='float:left;text-align:left;padding-left:35px;width:270px;'> \
<h3 style='margin:0;width:200px;'>Varför uppgradera?</h3> \
              <dl style='line-height: 1.4;margin:7px 0 0 2px'> \
                <dt style='color:#e6e6e6'>Webbsidor läses in snabbare</dt> \
                <dd style='font-size:11px;margin-left:20px;'>ofta dubbelt så snabbt som tidigare.</dd> \
                <dt style='color:#e6e6e6'>Webbsidor renderas korrekt</dt> \
                <dd style='font-size:11px;margin-left:20px;'>och följer webbstandarder bättre.</dd> \
                <dt style='color:#e6e6e6'>Tabbar</dt> \
                <dd style='font-size:11px;margin-left:20px;'>låter dig se flera webbsidor i samma fönster.</dd> \
                <dt style='color:#e6e6e6'>Surfa säkert</dt> \
                <dd style='font-size:11px;margin-left:20px;'>med bättre 'phishing'-skydd.</dd> \
                <dt style='color:#e6e6e6'>Smartare utskrifter</dt> \
                <dd style='font-size:11px;margin-left:20px;'>och anpassa till sidbredd.</dd> \
              </dl> \
            </div> \
            <div class='otherBrowsers' style='float:left;font-size:14px;text-align:left;width:220px;margin-left:20px'> \
  <h3 style='margin:0;width:200px;'>Andra webbläsare</h3> \
              <ul style='list-style:none;margin:0;padding:9px 0 0 0'> \
        				<li style='height:39px;background:url(sites/all/modules/sevenup/black/images/Chrome.jpg) no-repeat;'><a href='http://www.google.com/chrome' style='color:#e6e6e6;display:block;padding:4px 0 8px 44px;text-decoration:none;width:150px;'>Google Chrome</a></li> \
         				<li style='height:39px;background:url(sites/all/modules/sevenup/black/images/Firefox.jpg) no-repeat;'><a href='http://getfirefox.com' style='color:#e6e6e6;display:block;padding:4px 0 8px 44px;text-decoration:none;width:140px;'>Mozilla Firefox</a></li> \
         				<li style='height:39px;background:url(sites/all/modules/sevenup/black/images/Opera.jpg) no-repeat;'><a href='http://www.opera.com/download/' style='color:#e6e6e6;display:block;padding:4px 0 8px 44px;text-decoration:none;width:140px;'>Opera</a></li> \
         				<li style='height:39px;background:url(sites/all/modules/sevenup/black/images/Safari.jpg) no-repeat;'><a href='http://www.apple.com/safari/download/' style='color:#e6e6e6;display:block;padding:4px 0 8px 44px;text-decoration:none;width:140px;'>Apple Safari</a></li> \
              </ul> \
            </div> \
            <div style='clear:both;'><a href='#' style='bottom:-10px;color:#e6e6e6;font-size:14px;position:absolute;right:14px;text-decoration:none;' ";
      if (newOptions.enableQuitBuggingMe === false) {
        newOptions.lightboxHTML += "onclick='sevenUp.close()'>close";
      } else {
        newOptions.lightboxHTML += "onclick='sevenUp.quitBuggingMe()'>Sluta störa mig";
      }
      newOptions.lightboxHTML += "</a></div> \
          </div> \
          <div style='background:url(sites/all/modules/sevenup/black/images/curve-bottom.gif);font-size:1px;height:18px;width:550px;'></div> \
        </div> \
      </div>";
      sevenUp.test(newOptions, callback);
    }
  };
}