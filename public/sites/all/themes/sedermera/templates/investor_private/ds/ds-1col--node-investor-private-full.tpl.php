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

    <?php print render($content['verification_status']); ?>
    <?php print render($content['title']); ?>

    <div class="investor-details node-section">
      <?php print render($content['field_shared_cust_id']); ?>
      <?php print render($content['field_shared_cont_pers']); ?>
      <?php print render($content['field_investor_shared_ctrl_ua']); ?>
      <?php print render($content['field_investor_shared_ctrl_ptv']); ?>
      <?php print render($content['field_investor_shared_ctrl_cred']); ?>
      <?php print render($content['field_investor_shared_ctrl_ext']); ?>
      <?php print render($content['field_investor_shared_ctrl_oth']); ?>
    </div>
  </div>
</div>
