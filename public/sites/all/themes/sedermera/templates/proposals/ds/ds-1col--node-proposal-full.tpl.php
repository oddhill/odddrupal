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

    <div class="proposal-details node-section">
      <?php print render($content['field_proposal_case_number']); ?>
      <?php print render($content['field_proposal_company']); ?>
      <?php print render($content['field_proposal_approval']); ?>
      <?php print render($content['field_proposal_customer']); ?>
      <?php print render($content['field_proposal_final']); ?>
    </div>

    <?php if ($content['field_proposal_cust_approval']): ?>
      <div class="client-approval">
        <h2>Kundgodkännande</h2>
        <?php print render($content['field_proposal_cust_approval']); ?>
      </div>
    <?php endif; ?>
    <?php print $content['link_add_approval']; ?>
  </div>
</div>
