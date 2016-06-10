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

  <div class="<?php print $classes; ?> <?php print $ds_content_classes; ?> <?php if (empty($content['field_comp_logo'])) { print 'no-logo'; } ?>">

    <?php print render($content['field_comp_logo']); ?>

    <div class="company-details node-section">
      <?php print render($content['field_comp_id']); ?>
      <?php print render($content['field_comp_org_nbr']); ?>
      <?php print render($content['field_comp_cust_resp']); ?>
    </div>
    <div class="company-contacts node-section">
      <?php print render($content['field_comp_cont_person']); ?>

      <?php if ($content['field_comp_principal_persons']): ?>
        <div class="company-owners node-section">
          <?php print render($content['field_comp_principal_persons']); ?>
        </div>
      <?php endif; ?>

      <?php foreach ($company_cont_id as $id => $row): ?>
        <?php print render($row); ?>
      <?php endforeach; ?>
    </div>
    <div class="company-other node-section">
      <?php print render($content['field_comp_address']); ?>
      <?php print render($content['field_comp_notes']); ?>
    </div>

  </div>
</div>
