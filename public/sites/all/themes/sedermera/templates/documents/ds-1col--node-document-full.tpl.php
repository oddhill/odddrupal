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
<div class="full-document-wrapper">

  <div class="document-left-column">

    <div class="document-head-wrapper">

      <div class="document-title-wrapper">
          <?php print render($content['title']); ?>
      </div>

    </div>

    <div class="document-content-wrapper <?php print $classes; ?> <?php print $ds_content_classes; ?>">

      <div class="document-head-content">
        <?php if (!empty($content['field_doc_head_img'])): ?>
          <?php print render($content['field_doc_head_img']); ?>
        <?php else: ?>
          <?php print render($content['field_doc_head_text']); ?>
        <?php endif; ?>
        <?php print render($content['field_doc_head_free']); ?>
      </div>

      <div class="document-content">
        <?php print render($content['body']); ?>
      </div>

      <div class="document-footer">

        <div class="document-footer-content">
          <?php print render($content['field_doc_foot_address']); ?>
          <?php print render($content['field_doc_foot_tel']); ?>
          <?php print render($content['field_doc_foot_fax']); ?>
        </div>

        <div class="document-footer-content">
          <?php print render($content['field_doc_foot_bg']); ?>
          <?php print render($content['field_doc_foot_moms']); ?>
          <?php print render($content['field_doc_foot_vat']); ?>
        </div>

        <div class="document-footer-content">
          <?php print render($content['field_doc_foot_webb']); ?>
          <?php print render($content['field_doc_foot_mail']); ?>
          <?php print render($content['field_doc_foot_free']); ?>
        </div>
      </div>
    </div>
  </div>

  <aside class="document-sidebar">

    <?php if ($show_sidebar) : ?>
    <div class="document-related">
      <div class="field-dokument-relation">
        <span class="label">Bekräfta dokument</span>

        <?php if ($sign_status) : ?>
          <span class="signed-text"><?php print $signtext; ?></span>
          <span class="signed"><?php print $sign; ?></span>
        <?php else : ?>
          <span class="sign-text"><?php print $signtext; ?></span>
          <span class="sign"><?php print $sign; ?></span>
        <?php endif; ?>

      </div>
    </div>
    <?php endif; ?>

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
    <?php if (!empty($files)) : ?>
      <div class="document-files">
        <?php print $files; ?>
      </div>
    <?php endif; ?>
  </aside>
</div>
