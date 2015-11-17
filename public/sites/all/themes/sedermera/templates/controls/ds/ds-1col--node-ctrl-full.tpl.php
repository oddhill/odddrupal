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
<div class="<?php print $classes; ?> <?php print $ds_content_classes; ?> <?php print $ver_status; ?>">

  <div class="verification-header">

    <div class="verification-status">
      Kontrollen är <span class="ctrl-verification <?php print $ver_status; ?>"><?php print $ver_text; ?></span>
    </div>

    <?php print render($content['ctrl_name']); ?>
  </div>

  <div class="verification-body">
    <?php print render($content['field_ctrl_files']); ?>
    <?php print render($content['field_ctrl_app']); ?>
    <?php print render($content['field_ctrl_date']); ?>
    <?php print render($content['field_ctrl_notes']); ?>
  </div>
</div>
