<?php
/**
 * @file
 * TODO: Comment and stuff.
 */
?>
<?php if ($guaranteed && $committed): ?>
  <div class="vertical-bars">
    <div class="guaranteed-wrapper bar">
      <div class="progress vertical bottom guaranteed">
        <div class="progress-bar" data-transitiongoal="<?php print $guaranteed['percentage']; ?>"></div>
      </div>
      <div class="text">Garanterat</div>
    </div>
    <div class="committed-wrapper bar">
      <div class="progress vertical bottom committed">
        <div class="progress-bar" data-transitiongoal="<?php print $committed['percentage']; ?>"></div>
      </div>
      <div class="text">Teckningsförbindelse</div>
    </div>
  </div>
<?php endif; ?>

<?php if ($guaranteed && $committed): ?>
   <div class="vertical-bars-text-wrapper">
    <h4>Garanterat</h4>
    <div class="total"><?php print $guaranteed['current']; ?> av <?php print $guaranteed['max']; ?> SEK</div>
    <h4>Teckningsförbindelse</h4>
    <div class="total"><?php print $committed['current']; ?> av <?php print $committed['max']; ?> SEK</div>
  </div>
<?php endif; ?>

<div class="total-wrapper">
  <div class="progress">
    <div class="progress-bar" data-transitiongoal="<?php print $total['percentage']; ?>"></div>
  </div>
  <h4>Totalt</h4>
  <div class="total"><?php print $total['current']; ?> av <?php print $total['max']; ?> SEK</div>
</div>
