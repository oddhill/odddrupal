<?php
/**
 * @file
 * Default simple view template to display a group of summary lines.
 *
 * If you'd like to override this template, you should create a folder within
 * this folder and name it to the machine-readable name of the view that you're
 * overriding. Then have a look at the theme information for that view, and
 * you'll be able to see which naming convention you should use for the new
 * file.
 *
 * You might end up with something like
 * view_name/views-view-summary-unformatted--view-name.tpl.php.
 */
?>
<?php foreach ($rows as $id => $row): ?>
  <?php print (!empty($options['inline']) ? '<span' : '<div') . '>'; ?>
    <?php if (!empty($row->separator)) { print $row->separator; } ?>
    <a href="<?php print $row->url; ?>"><?php print $row->link; ?></a>
    <?php if (!empty($options['count'])): ?>
      (<?php print $row->count; ?>)
    <?php endif; ?>
  <?php print !empty($options['inline']) ? '</span>' : '</div>'; ?>
<?php endforeach; ?>
