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
<div class="<?php print $classes; ?> <?php print $ds_content_classes; ?> padding bg">

  <?php print render($content['title']); ?>

  <div class="columns">
    <div class="col">
      <?php print render($content['field_transaction_company']); ?>
      <?php print render($content['field_transaction_id']); ?>
      <?php print render($content['field_transaction_title']); ?>
      <?php print render($content['field_transaction_invest_name']); ?>
      <?php print render($content['field_transaction_investor_id']); ?>
      <?php print render($content['field_transaction_max_invest']); ?>
    </div>
    <div class="col">
      <?php print render($content['field_transaction_amount_guar']); ?>
      <?php print render($content['field_transaction_amount']); ?>
      <?php print render($content['field_transaction_newem']); ?>
      <?php print render($content['field_transaction_pp']); ?>
      <?php print render($content['field_transaction_loan']); ?>
    </div>
  </div>
</div>
