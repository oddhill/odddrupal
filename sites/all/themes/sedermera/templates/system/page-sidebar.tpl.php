<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * This file will print the entire contents within the <body> tag. The only
 * variables you should be printing, should be the available regions. The
 * contents within the regions should be added using Contexts and blocks, and
 * therefore, shouldn't be added here.
 *
 * Feel free to add any HTML that you'd like to use for creating the structure
 * of the page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>

<div id="site-wrapper">
  <?php if($page['header']): ?>
    <aside id="main-sidebar">
      <?php print render($page['header']); ?>
    </aside>
  <?php endif; ?>

  <main id="main-content">
    <div class="wrapper">
      <div class="content">
        <?php print render($page['content']); ?>
      </div>
      <?php if($page['sidebar-second']): ?>
        <div class="sidebar-second">
          <?php print render($page['sidebar-second']); ?>
        </div>
      <?php endif; ?>
      </div>
    </div>
  </main>
</div>
