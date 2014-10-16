<?php
/**
 * @file
 * Main view template.
 *
 * If you'd like to override this template, you should create a folder within
 * this folder and name it to the machine-readable name of the view that you're
 * overriding. Then have a look at the theme information for that view, and
 * you'll be able to see which naming convention you should use for the new
 * file.
 *
 * You might end up with something like view_name/views-view--view-name.tpl.php.
 */
?>
<div id="investor-table">
  <?php print $header; ?>

  <div class="table-filter">
    <?php print $exposed; ?>
  </div>

  <?php print $attachment_before; ?>

  <div class="table-wrapper">
    <?php print $rows; ?>
  </div>

  <?php print $empty; ?>
  <?php print $pager; ?>
  <?php print $attachment_after; ?>
  <?php print $more; ?>
  <?php print $footer; ?>
</div>
