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
<div class="<?php print $classes; ?>">
  <div id="investor-table" class="filtered-table">
    <?php print $header; ?>

    <div class="table-filter">
      <h2 class="filter-icon"><span class="icon">Filtrera</span></h2>
      <?php print $exposed; ?>
    </div>

    <?php print $attachment_before; ?>

      <?php print $rows; ?>

      <?php if ($empty): ?>
       <div class="empty-wrapper">
          <div class="empty-icon"></div>
            <p><?php print $empty; ?><p>
        </div>
      <?php endif; ?>

    <?php print $attachment_after; ?>
    <?php print $more; ?>
    <?php print $footer; ?>
  </div>

  <?php print $pager; ?>
</div>
