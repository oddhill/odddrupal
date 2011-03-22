<?php
// $Id: maintenance-page.tpl.php,v 1.1.2.2 2009/05/03 11:12:28 johnalbin Exp $

/**
 * @file maintenance-page.tpl.php
 *
 * Theme implementation to display a single Drupal page while off-line.
 *
 * All the available variables are mirrored in page.tpl.php. Some may be left
 * blank but they are provided for consistency.
 *
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">

<head>
  <title><?php print $head_title; ?></title>
  <link href='http://fonts.googleapis.com/css?family=Covered+By+Your+Grace' rel='stylesheet' type='text/css'>
  <script src='https://ajax.googleapis.com/ajax/libs/jquery/1.4.4/jquery.min.js' type='text/javascript'></script>
  <script type="text/javascript">
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
  </script>
  <script type="text/javascript">
  $(document).ready(function() {
    $('#page').center();
  });
  </script>
  
  <style type="text/css">
  /** MAINTENANCE **/

  body.in-maintenance {
    margin: 0;
    padding: 0;
    background: #8fc4d1;
    font-family: 'Covered By Your Grace', 'Marker Felt', 'Comic Sans MS', sans-serif;
    font-size: 20px;
    text-align: center;
  }

  .in-maintenance #page {
    width: 350px;
  }


  .in-maintenance #left {
    color: #fff;
    margin-top: 25px;
    width: 350px;
  }

  .in-maintenance #left #site-name {
    padding-right: 20px;
    font-size: 32px;
    text-align: right;
  }

  .in-maintenance #left #site-name a {
    color: #fff;
    text-decoration: none;
  }

  .in-maintenance #content {
    width: 350px;
  	background: rgb(255,255,158);
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

  .in-maintenance #content h1.title {
    font-weight: normal;
    margin: 15px 0 20px 0;
  }
  .in-maintenance #content #content-inner {
    padding: 20px;
  }
  </style>
  
  <!--[if IE 7]>
  <style type="text/css">
    .in-maintenance #page {
      width: 100%;
    }
  </style>
  <![endif]-->
</head>
<body class="in-maintenance">

  <div id="page">
    <div id="content"><div id="content-inner">
      <div id="content-header">
        <h1 class="title"><?php print t('Oj! Vad hände här?'); ?></h1>
      </div> <!-- /#content-header -->
      <div id="content-area">
       Det finns ett problem med webbsajten. Ibland uppstår oväntade saker med hemsidor och då kan det bli på detta viset. Vi arbetar dock aktivt på att ordna det!
      </div>
    </div></div> <!-- /#content-inner, /#content -->
    <div id="left"><div id="left-inner" class="clear-block">
      <div id="site-name">/ Teknisk Support</div>
    </div></div>
  </div> <!-- /#page -->

</body>
</html>
