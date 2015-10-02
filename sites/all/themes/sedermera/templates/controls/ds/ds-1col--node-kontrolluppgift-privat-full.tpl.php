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
  <?php print render($content['field_ctrl_ok']); ?>

  <div id="toc"></div>

  <div class="control_list">
    <?php print render($content['group_ctrl_upp']); ?>
    <?php print render($content['group_ctrl_ptv']); ?>
    <?php print render($content['group_ctrl_id']); ?>
    <?php print render($content['group_ctrl_ext']); ?>
    <?php print render($content['group_ctrl_eu']); ?>
    <?php print render($content['group_ctrl_credit']); ?>
    <?php print render($content['group_ctrl_comp']); ?>
    <?php print render($content['group_ctrl_oth']); ?>
  </div>

  <?php print render($content['handle_control']); ?>
</div>
