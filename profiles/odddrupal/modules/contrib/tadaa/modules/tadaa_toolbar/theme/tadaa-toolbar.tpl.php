<?php
/**
 * @file
 * Template for the Tadaa! toolbar.
 *
 * @param $environments_form
 *  Render array for the environments form.
 *
 * @param $email_form
 *  Render array for the reroute email form.
 *
 * @see template_preprocess_tadaa_toolbar().
 */
?>

<div id="tadaa-wrapper">
  
  <?php if (TADAA_ENVIRONMENT): ?>
  <div id="status-wrapper">
  
    <span id="tadaa-modules-status">
      <a href="<?php print url('admin/config/development/tadaa/modules'); ?>" class="status-link"><?php print t('Modules'); ?></a>:
      <span class="status"></span>
      
    </span>
    <span id="tadaa-variables-status">
      <a href="<?php print url('admin/config/development/tadaa/variables'); ?>" class="status-link"><?php print t('Variables'); ?></a>:
      <span class="status"></span>
    </span>
   
  </div>
  <?php endif; ?>
  
  <div class="tadaa-environments-wrapper">
    <?php print render($environments_form); ?>
  </div>
  
  <?php if ($email_form): ?>
  <div class="tadaa-mail-wrapper">
    <?php print render($email_form); ?>
  </div>
  <?php endif; ?>
  
</div>