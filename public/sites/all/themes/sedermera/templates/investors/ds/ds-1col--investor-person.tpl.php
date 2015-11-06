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
  <?php if ($view_page): ?>
    <?php print render($content['title']); ?>
    <div class="columns <?php if ($content['field_invest_cont_person_prvt']): ?>three-col<?php endif; ?>">
      <div class="col">
        <?php print render($content['field_shared_custresp']); ?>
        <?php print render($content['field_shared_industries']); ?>
        <?php print render($content['field_shared_interests']); ?>
      </div>
      <div class="col">
        <?php print render($content['field_shared_address']); ?>
        <?php print render($content['field_shared_notes']); ?>
      </div>
      <?php if ($content['field_invest_cont_person_prvt']): ?>
        <div class="col">
          <?php print render($content['field_invest_cont_person_prvt']); ?>
        </div>
      <?php endif; ?>
    </div>
  <?php elseif ($control_page): ?>
    <?php print render($control_node); ?>
  <?php elseif ($history_page): ?>
    <?php print render($content['transaction_history']); ?>
  <?php endif; ?>
</div>
