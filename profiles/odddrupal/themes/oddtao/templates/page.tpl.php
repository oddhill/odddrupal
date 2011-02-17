<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>" xmlns:og="http://opengraphprotocol.org/schema/" xmlns:fb="http://www.facebook.com/2008/fbml">
  <head>
    <?php print $head; ?>
    <?php print $styles; ?>
    <title><?php print $head_title; ?></title>
  </head>
  <body <?php print drupal_attributes($attr); ?>>
    
    <div id="wrapper">
      
      <?php if ($site_name || $logo || $header): ?>
        <div id="header" class="clear-block">
          <?php if ($site_name || $logo): ?>
            <div id="logo"><?php print $header_logo; ?></div>
          <?php endif; ?>
          <?php if ($header) print $header; ?>
        </div>
      <?php endif; ?>
      

      <?php if ($help || ($show_messages && $messages)): ?>
        <div id="console"><div class="limiter clear-block">
          <?php print $help; ?>
          <?php if ($show_messages && $messages): print $messages; endif; ?>
        </div></div>
      <?php endif; ?>

      <div id="page"><div class="limiter clear-block">

        <div id="main" class="clear-block">
          <?php if ($breadcrumb) print $breadcrumb; ?>
          <?php if ($title): ?><h1 class="page-title"><?php print $title; ?></h1><?php endif; ?>
          
          <div id="content" class="clear-block">
            <?php print $content; ?>
          </div>
        </div>

      </div></div>

      <div id="footer"><div class="limiter clear-block">
        <?php print $feed_icons; ?>
        <?php print $footer; ?>
        <?php print $footer_message; ?>
      </div></div>
  
    </div>

    <?php print $scripts; ?>
    <?php print $closure; ?>

  </body>
</html>
