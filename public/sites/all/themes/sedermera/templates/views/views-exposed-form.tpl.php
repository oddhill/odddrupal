<?php
/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * If you'd like to override this template, you should create a folder within
 * this folder and name it to the machine-readable name of the view that you're
 * overriding. Then have a look at the theme information for that view, and
 * you'll be able to see which naming convention you should use for the new
 * file.
 *
 * You might end up with something like
 * view_name/views-exposed-form--view-name.tpl.php.
 */
?>
<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
  ?>
<?php endif; ?>

<?php foreach ($widgets as $id => $widget): ?>
  <?php if (!empty($widget->label)): ?>
    <label for="<?php print $widget->id; ?>">
      <?php print $widget->label; ?>
    </label>
  <?php endif; ?>
  <?php print $widget->operator; ?>
  <?php print $widget->widget; ?>
  <?php print $widget->description; ?>
<?php endforeach; ?>

<?php print $sort_by; ?>
<?php print $sort_order; ?>
<?php print $items_per_page; ?>
<?php print $offset; ?>
<?php print $button; ?>
<?php print $reset_button; ?>
