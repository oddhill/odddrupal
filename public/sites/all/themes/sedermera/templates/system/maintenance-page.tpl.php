<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page while offline.
 *
 * This file will be used when the site is in maintance mode, or when an error
 * occurs. It will then override any other template files, including the
 * html.tpl.php.
 *
 * All the available variables are mirrored in html.tpl.php and page.tpl.php.
 * Some may be blank but they are provided for consistency.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<head>
  <title><?php print $head_title; ?></title>
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
  <script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js"></script>
  <script type="text/javascript">
  jQuery.fn.center = function(init) {

  	var object = this;

  	if(!init) {

  		object.css('margin-top', jQuery(window).height() / 2 - this.height() / 2);
  		object.css('margin-left', jQuery(window).width() / 2 - this.width() / 2);

  		jQuery(window).resize(function() {
  			object.center(!init);
  		});

  	} else {

  		var marginTop = jQuery(window).height() / 2 - this.height() / 2;
  		var marginLeft = jQuery(window).width() / 2 - this.width() / 2;

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
  </script>
  <script type="text/javascript">
    (function($) {
      $(document).ready(function() {
        $('#page').center();
      });
    })(jQuery);
  </script>
  <style>
  body{
    margin: 0;
    padding: 0;
    background: #565656;
    font-family: arial, helvetica, sans-serif;
    font-size: 20px;
    text-align: center;
  }

  #page {
    width: 100%;
  }

  #page {
    max-width: 350px;
  }


  #sidebar-second {
    color: #fff;
    margin-top: 25px;
    max-width: 350px;
  }

  #sidebar-second #site-name {
    padding-right: 20px;
    font-size: 16px;
    text-align: right;
    text-transform: uppercase;
  }

  #sidebar-second #site-name a {
    color: #fff;
    text-decoration: none;
  }

  #content {
    max-width: 350px;
  	background: rgb(227,227,227);
  	color: rgb(60,60,37);
    background: -webkit-gradient(linear, left top, left bottom,
      color-stop(0.0, rgb(255,255,132)),
      color-stop(0.5, rgb(255,255,132)),
      color-stop(1.0, rgb(255,255,158))
    );
    background: -moz-linear-gradient(center top,
      rgb(255,255,132) 0%,
      rgb(255,255,132) 50%,
      rgb(255,255,158) 100%
    );
    -webkit-box-shadow: 0 3px 6px rgba(0,0,0,0.235);
    -moz-box-shadow: 0 3px 6px rgba(0,0,0,0.235);
    box-shadow: 0 3px 6px rgba(0,0,0,0.235);
    line-height: 30px;
    -webkit-transform: rotate(-2deg);
    -moz-transform: rotate(-2deg);
    transform: rotate(-2deg);
  }

  #content h1.title {
    font-weight: bold;
    margin: 15px 0 20px 0;
    font-size: 35px;
  }

  #content #content-inner {
    padding: 20px;
  }
  </style>
</head>
<body class="<?php print $classes; ?>">

  <div id="page">
    <div id="content"><div id="content-inner">
      <div id="content-content" class="clearfix">
        <?php print $content; ?>
      </div> <!-- /content-content -->
    </div></div> <!-- /#content-inner, /#content -->
    <div id="sidebar-second" class="column sidebar">
      <?php print $sidebar_second; ?>
      <div id="site-name">/ <?php print $site_name; ?></div>
    </div> <!-- /sidebar-second -->
  </div> <!-- /page -->

</body>
</html>
