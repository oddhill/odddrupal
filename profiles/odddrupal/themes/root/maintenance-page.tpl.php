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
  <link href='<?php print _oddtao_path(); ?>/css/maintenance.css' rel='stylesheet' type='text/css'>
  <script src='https://ajax.googleapis.com/ajax/libs/jquery/1.4.4/jquery.min.js' type='text/javascript'></script>
  <script type="text/javascript" src="<?php print _oddtao_path(); ?>/js/center-plugin_1.0.1.js"></script>

  <script type="text/javascript">
  jQuery(document).ready(function() {
      
      $('#page').center();
  });
  </script>
  <!--[if IE 7]>
  <style>
  .in-maintenance #page {
    width: 100%;
  }
  </style>
  <![endif]-->
</head>
<body class="<?php print $body_classes; ?>">

  <div id="page">
      <div id="content"><div id="content-inner">
          <div id="content-header">
              <h1 class="title"><?php print t('Nere för underhåll');?></h1>
          </div> <!-- /#content-header -->
        <div id="content-area">
          <?php print $content; ?>
        </div>
      </div></div> <!-- /#content-inner, /#content -->
      <div id="left"><div id="left-inner" class="clear-block">
              <div id="site-name">
                <a href="<?php print $base_path; ?>" title="<?php print t('Home'); ?>" rel="home">
               / <?php print $site_name; ?>
                </a>
              </div>
      </div></div>
  </div> <!-- /#page -->

</body>
</html>
