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

  Identitetskontroll:
  <?php if ($content['field_shared_veri_id']): ?>
    <?php print render($content['field_shared_veri_id']); ?>
  <?php else: ?>
    Ej genomförd
  <?php endif; ?>

  Adressregister från Skatteverket:
  <?php if ($content['field_shared_veri_address']): ?>
    <?php print render($content['field_shared_veri_address']); ?>
  <?php else: ?>
    Ej genomförd
  <?php endif; ?>

  EU:s sanktionsförordningar:
  <?php if ($content['field_shared_veri_eu']): ?>
    <?php print render($content['field_shared_veri_eu']); ?>
  <?php else: ?>
    Ej genomförd
  <?php endif; ?>

  Kreditkontroll:
  <?php if ($content['field_shared_veri_credit']): ?>
    <?php print render($content['field_shared_veri_credit']); ?>
  <?php else: ?>
    Ej genomförd
  <?php endif; ?>

</div>
