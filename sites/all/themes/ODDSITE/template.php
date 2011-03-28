<?php
/**  
 * Uncomment if you want to enable apple touch icons.
 * Create icons in sizes 57x57, 72x72 and 114x114
 */
/* <-- REMOVE THIS LINE -->
// iPhone.
$icons['iphone_icon'] = array(
  'href' => drupal_get_path('theme','ODDSITE') . '/apple-touch-icon-iphone.png',
  'rel' => 'apple-touch-icon',
);
// iPad.
$icons['ipad_icon'] = array(
  'href' => drupal_get_path('theme','ODDSITE') . '/apple-touch-icon-ipad.png',
  'rel' => 'apple-touch-icon',
  'sizes' => '72x72',
);
// iPhone 4.
$icons['iphone4_icon'] = array(
  'href' => drupal_get_path('theme','ODDSITE') . '/apple-touch-icon-iphone4.png',
  'rel' => 'apple-touch-icon',
  'sizes' => '114x114',
);
// Add the icons to <head>.
foreach ($icons as $key => $icon) {
  $element = array(
    '#tag' => 'link',
    '#attributes' => array(
      'href' => $icon['href'], 
      'rel' => $icon['rel'],
      'sizes' => $icon['sizes'],
    ),
  );
  drupal_add_html_head($element, $key);
}
*/ //<-- REMOVE THIS LINE -->
