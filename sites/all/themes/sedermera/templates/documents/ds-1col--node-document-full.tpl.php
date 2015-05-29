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
<div class="<?php print $classes; ?> <?php print $ds_content_classes; ?>">
  <div class="document-content">
    <?php print render($content['title']); ?>
    <?php print render($content['body']); ?>

    <?php if ($sign_status) : ?>
      <span class="signed">
        <?php print $sign; ?>
      </span>
    <?php else : ?>
      <span class="sign">
        <?php print $sign; ?>
      </span>
    <?php endif; ?>
  </div>
</div>
<div class="sidebar">
  <?php if (!empty($related)) : ?>
    <div class="document-related">
      <?php print $related; ?>
    </div>
  <?php endif;?>
  <?php if (!empty($appendix)) : ?>
    <div class="document-appendix">
      <?php print $appendix; ?>
    </div>
  <?php endif;?>
</div>
