<?php
/**
 * @file
 * Template to display a view as a table.
 *
 * If you'd like to override this template, you should create a folder within
 * this folder and name it to the machine-readable name of the view that you're
 * overriding. Then have a look at the theme information for that view, and
 * you'll be able to see which naming convention you should use for the new
 * file.
 *
 * You might end up with something like
 * view_name/views-view-table--view-name.tpl.php.
 */
?>
<div class="table-wrapper">
  <table <?php print $attributes; ?>>
    <?php if (!empty($title)) : ?>
      <caption><?php print $title; ?></caption>
    <?php endif; ?>
    <?php if (!empty($header)) : ?>
      <thead>
        <tr>
          <?php foreach ($header as $field => $label): ?>
            <?php if ($disable[$field]) { continue; } ?>
            <th <?php if ($header_classes[$field]) { print 'class="'. $header_classes[$field] . '" '; } ?>>
              <?php print $label; ?>
            </th>
          <?php endforeach; ?>
        </tr>
      </thead>
    <?php endif; ?>
    <tbody>
      <?php foreach ($rows as $row_count => $row): ?>
        <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
          <?php foreach ($row as $field => $content): ?>
            <?php if ($disable[$field]) { continue; } ?>
            <td <?php if ($field_classes[$field][$row_count]) { print 'class="'. $field_classes[$field][$row_count] . '" '; } ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
              <?php print $content; ?>
            </td>

          <?php endforeach; ?>
        </tr>
      <?php endforeach; ?>
    </tbody>
    <?php if (!empty($sum_row)) : ?>
      <tfoot>
        <tr class="last-row">
          <?php foreach ($sum_row as $field => $content): ?>
            <?php if ($disable[$field]) { continue; } ?>
            <td>
              <?php print $content; ?>
            </td>
          <?php endforeach; ?>
        </tr>
      </tfoot>
    <?php endif; ?>
  </table>
</div>
