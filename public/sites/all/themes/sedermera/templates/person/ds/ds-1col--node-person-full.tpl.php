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

    <?php if ($content['investors']): ?>
      <div class="person-stakeholder node-section">
        <?php print render($content['investors']); ?>
      </div>
    <?php endif; ?>

    <div class="person-details node-section">
      <?php print render($content['field_user_owner']); ?>
      <?php print render($content['field_user_ssn']); ?>
      <?php print render($content['field_user_mail']); ?>
      <?php print render($content['field_user_phone']); ?>
      <?php print render($content['field_user_cell']); ?>
      <?php print render($content['field_user_fax']); ?>
      <?php print render($content['field_user_branches']); ?>
      <?php print render($content['field_user_interests']); ?>
      <?php print render($content['field_user_id_ctrl']) ?>
    </div>

    <div class="person-other node-section">
      <?php print render($content['field_user_id_address']); ?>
      <?php print render($content['field_user_notes']); ?>
    </div>
  </div>
</div>
