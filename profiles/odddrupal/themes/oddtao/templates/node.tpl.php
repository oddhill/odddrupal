<?php if (empty($hide)): ?>

<?php if (!empty($pre_object)) print $pre_object; ?>

<div <?php if (!empty($attr)) print drupal_attributes($attr); ?>>
  <?php if (!empty($title) && !$page): ?>
    <h2 class='<?php print $hook ?>-title'>
      <?php if (!empty($new)): ?><a id='new' class='new'><?php print t('New'); ?></a><?php endif; ?>
      <?php print l($title, $node_url, array('attributes' => array('title' => $title))); ?>
    </h2>
  <?php endif; ?>

  <?php if (!empty($content)): ?>
    <div class='<?php print $hook ?>-content clear-block <?php if (!empty($is_prose)) print 'prose'; ?>'>
      <?php if($unpublished): ?>
        <div class="unpublished"><div class="unpublished-inner"><?php print t('This content is not published yet, you can publish content by choosing "Publishing options" when you edit a node.'); ?></div></div>
      <?php endif; ?>
      <?php print $content ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($links)): ?>
    <div class='<?php print $hook ?>-links clear-block'><?php print $links; ?></div>
  <?php endif; ?>
</div>

<?php if (!empty($post_object)) print $post_object; ?>

<?php endif; ?>