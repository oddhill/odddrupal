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

   <?php if($page['page-head']): ?>
      <div class="page-head">
        <?php print render($page['page-head']); ?>
      </div>
    <?php endif; ?>

    <div class="content-wrapper">

      <?php if($page['sidebar-second']): ?>
        <aside class="content-sidebar">
          <h2 class="sidebar-second-icon"><span class="icon">Information</span></h2>
            <div class="sidebar-second-content">
              <?php print render($page['sidebar-second']); ?>
            </div>
        </aside>

        <div class="content-column">
          <?php print render($page['content']); ?>
        </div>
      <?php else: ?>
        <?php print render($page['content']); ?>
      <?php endif; ?>
    </div>
  </main>
</div>
