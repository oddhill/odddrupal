<?php
/**
 * @file
 * Default theme implementation that displays a node using the DS 1 column
 * layout.
 *
 * If you'd like to create a different template file for nodes, you should
 * create a new DS layout, and place it in the templates/ds folder, just like
 * this implementation.
 *
 * Have a look at the example_layout folder in the DS folder for guidance.
 */
?>
<div class="<?php print $classes; ?> <?php print $ds_content_classes; ?> padding bg">
  <?php print render($content['title']); ?>
  <div class="columns">
    <div class="col">
      <?php print render($content['field_shared_email']); ?>
      <?php print render($content['field_shared_cell']); ?>
      <?php print render($content['field_shared_phone']); ?>
    </div>
    <div class="col">
      <?php print render($content['field_shared_notes']); ?>
      <?php print render($content['upgrade_lead']); ?>
    </div>
  </div>
</div>