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
<div class="verifications-summary">

  <div class="summary-header">
    <?php print $header; ?>
  </div>

  <?php print $exposed; ?>

  <div class="summary-body">
    <?php print $attachment_before; ?>
    <?php print $rows; ?>
    <?php print $empty; ?>
    <?php print $pager; ?>
    <?php print $attachment_after; ?>
  </div>

  <?php print $more; ?>

  <div class="summary-footer">
    <?php print $footer; ?>
    <button title="Close (Esc)" type="button" class="modal-close">OK</button>
  </div>
</div>
