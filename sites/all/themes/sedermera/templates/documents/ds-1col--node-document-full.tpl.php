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
<div class="<?php print $classes; ?> <?php print $ds_content_classes; ?> padding">
  <?php print $ds_content; ?>
  <?php if ($sign_status) : ?>
    <p class="signed">
      <?php print $sign; ?>
    </p>
  <?php else : ?>
    <button class="sign">
      <?php print $sign; ?>
    </button>
  <?php endif; ?>
</div>
