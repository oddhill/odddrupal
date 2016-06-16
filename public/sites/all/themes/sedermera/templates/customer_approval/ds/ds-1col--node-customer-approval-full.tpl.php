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
<div class="client-approval-controls node-section">
  <?php print render($content['field_cust_app_credit_risk']); ?>
  <?php print render($content['field_cust_app_cust_history']); ?>
  <?php print render($content['field_cust_app_conflict']); ?>
  <?php print render($content['field_cust_app_money_launder']); ?>
  <?php print render($content['field_cust_app_suitability']); ?>
  <?php print render($content['field_cust_app_final_app']); ?>

  <?php if ($content['field_cust_app_signed_by']): ?>
    <div class="signed-and-ready">
      <?php print render($content['field_cust_app_signed_by']); ?>
      <?php print render($content['field_cust_app_signed_time']); ?>
    </div>
  <?php endif; ?>
  <?php if ($content['field_cust_app_signed_by_admin']): ?>
    <div class="signed-and-ready-final">
      <?php print render($content['field_cust_app_signed_by_admin']); ?>
      <?php print render($content['field_cust_app_signed_time_admin']); ?>
    </div>
  <?php endif; ?>
  <?php print render($content['field_cust_app_signed']); ?>
  <?php print render($content['field_cust_app_signed_admin']); ?>
</div>
