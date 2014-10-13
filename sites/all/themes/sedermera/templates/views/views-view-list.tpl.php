<?php
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * If you'd like to override this template, you should create a folder within
 * this folder and name it to the machine-readable name of the view that you're
 * overriding. Then have a look at the theme information for that view, and
 * you'll be able to see which naming convention you should use for the new
 * file.
 *
 * You might end up with something like
 * view_name/views-view-list--view-name.tpl.php.
 */
?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>
