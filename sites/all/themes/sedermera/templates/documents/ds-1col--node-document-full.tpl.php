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
  <div class="document-head">
    <?php if (!empty($content['field_doc_head_img'])): ?>
      <?php print render($content['field_doc_head_img']); ?>
    <?php else: ?>
      <?php print render($content['field_doc_head_text']); ?>
    <?php endif; ?>
    <?php print render($content['field_doc_head_free']); ?>
  </div>
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
  <div class="document-footer">
    <?php print render($content['field_doc_foot_address']); ?>
    <?php print render($content['field_doc_foot_tel']); ?>
    <?php print render($content['field_doc_foot_fax']); ?>
    <?php print render($content['field_doc_foot_bg']); ?>
    <?php print render($content['field_doc_foot_moms']); ?>
    <?php print render($content['field_doc_foot_vat']); ?>
    <?php print render($content['field_doc_foot_webb']); ?>
    <?php print render($content['field_doc_foot_mail']); ?>
    <?php print render($content['field_doc_foot_free']); ?>
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
  <?php if (!empty($content['field_document_files'])) : ?>
    <div class="document-files">
      <?php print render($content['field_document_files']); ?>
    </div>
  <?php endif; ?>
</div>
