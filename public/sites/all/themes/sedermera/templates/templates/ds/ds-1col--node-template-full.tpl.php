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
<div class="node-barrier">
  <div class="<?php print $classes; ?> <?php print $ds_content_classes; ?>">
    <?php print render($content['title']); ?>

    <article class="template-description">
      <?php print render($content['body']); ?>
    </article>

    <aside class="template-sidebar">
      <?php if (!empty($files)) : ?>
        <?php print $files; ?>
      <?php endif; ?>
      <?php if (!empty($related)) : ?>
        <?php print $related; ?>
      <?php endif;?>
    </aside>

  </div>
</div>
