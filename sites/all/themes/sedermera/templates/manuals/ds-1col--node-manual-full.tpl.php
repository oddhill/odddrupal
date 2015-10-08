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
<div class="full-manual-wrapper">

  <div class="manual-left-column">

    <div class="manual-head-wrapper">

      <div class="manual-title-wrapper">
          <?php print render($content['title']); ?>
      </div>

    </div>

    <div class="manual-content-wrapper <?php print $classes; ?> <?php print $ds_content_classes; ?>">

      <div class="manual-head-content">
        <?php if (!empty($content['field_man_head_img'])): ?>
          <?php print render($content['field_man_head_img']); ?>
        <?php else: ?>
          <?php print render($content['field_man_head_text']); ?>
        <?php endif; ?>
        <?php print render($content['field_man_head_free']); ?>
      </div>

      <div class="manual-content">
        <?php print render($content['body']); ?>
      </div>

      <div class="manual-footer">

        <div class="manual-footer-content">
          <?php print render($content['field_man_foot_address']); ?>
          <?php print render($content['field_man_foot_tel']); ?>
          <?php print render($content['field_man_foot_fax']); ?>
        </div>

        <div class="manual-footer-content">
          <?php print render($content['field_man_foot_bg']); ?>
          <?php print render($content['field_man_foot_moms']); ?>
          <?php print render($content['field_man_foot_vat']); ?>
        </div>

        <div class="manual-footer-content">
          <?php print render($content['field_man_foot_webb']); ?>
          <?php print render($content['field_man_foot_mail']); ?>
          <?php print render($content['field_man_foot_free']); ?>
        </div>
      </div>
    </div>
  </div>

  <aside class="manual-sidebar">

    <?php if (!empty($related)) : ?>
      <div class="manual-related">
        <?php print $related; ?>
      </div>
    <?php endif;?>
    <?php if (!empty($appendix)) : ?>
      <div class="manual-appendix">
        <?php print $appendix; ?>
      </div>
    <?php endif;?>
    <?php if (!empty($files)) : ?>
      <div class="manual-files">
        <?php print $files; ?>
      </div>
    <?php endif; ?>
  </aside>
</div>
