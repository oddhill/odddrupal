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
  <?php print render($content['title']); ?>

  <div class="transaction-wrapper">

    <div class="transaction-text">
      <?php print render($content['body']); ?>
    </div>

    <div class="transaction-information">
      <?php print render($content['field_cap_rais_comp']); ?>
      <?php print render($content['field_cap_rais_date']); ?>
      <?php print render($content['field_cap_rais_post']); ?>
      <?php print render($content['field_cap_rais_rate']); ?>
      <?php print render($content['field_cap_rais_vol']); ?>
      <?php print render($content['field_cap_rais_stock_no']); ?>
      <?php print render($content['field_cap_rais_estim']); ?>
      <?php print render($content['field_cap_rais_file']); ?>
    </div>
  </div>
</div>
