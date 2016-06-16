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

    <article class="manual-description">

      <div class="manual-head">
        <?php if (!empty($content['field_man_head_img'])): ?>
          <?php print render($content['field_man_head_img']); ?>
        <?php else: ?>
          <?php print render($content['field_man_head_text']); ?>
        <?php endif; ?>
        <?php print render($content['field_man_head_free']); ?>
      </div>

      <?php print render($content['body']); ?>
    </article>

    <aside class="manual-sidebar">
      <?php if (!empty($files)) : ?>
        <?php print $files; ?>
      <?php endif; ?>
      <?php if (!empty($related)) : ?>
        <?php print $related; ?>
      <?php endif;?>
    </aside>

    <footer class="manual-footer">

      <div class="manual-footer-content">
        <?php print render($content['field_man_foot_address']); ?>
        <?php print render($content['field_man_foot_bg']); ?>
        <?php print render($content['field_man_foot_webb']); ?>
        <?php print render($content['field_man_foot_tel']); ?>
        <?php print render($content['field_man_foot_moms']); ?>
        <?php print render($content['field_man_foot_mail']); ?>
        <?php print render($content['field_man_foot_fax']); ?>
        <?php print render($content['field_man_foot_vat']); ?>
        <?php print render($content['field_man_foot_free']); ?>
      </div>
    </footer>
  </div>
</div>
