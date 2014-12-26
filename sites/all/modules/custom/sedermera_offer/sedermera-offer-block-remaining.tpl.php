<?php
/**
 * @file
 * TODO: Comment and stuff.
 */
?>
<?php if ($guaranteed || $committed): ?>
<div class="vertical-bars">

  <?php if ($guaranteed): ?>
    <div class="guaranteed-wrapper bar">
      <div class="progress vertical bottom guaranteed">
        <div class="progress-bar" data-transitiongoal="<?php print $guaranteed['percentage']; ?>"></div>
      </div>
      <div class="text">Garanterat</div>
    </div>
  <?php endif; ?>

  <?php if ($committed): ?>
  <div class="committed-wrapper bar">
    <div class="progress vertical bottom committed">
      <div class="progress-bar" data-transitiongoal="<?php print $committed['percentage']; ?>"></div>
    </div>
    <div class="text">Åtaget</div>
  </div>
  <?php endif; ?>

</div>
<?php endif; ?>

<div class="total-wrapper">
  <div class="progress">
    <div class="progress-bar" data-transitiongoal="<?php print $total['percentage']; ?>"></div>
  </div>
  <div class="total"><?php print $total['current']; ?> av <?php print $total['max']; ?> SEK</div>
</div>
