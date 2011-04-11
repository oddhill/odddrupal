<?php

function oddroots_css_alter(&$css) {
  $exclude = array(
    'modules/system/system.menus.css' => FALSE,
    'modules/system/system.theme.css' => FALSE,
  );
  $css = array_diff_key($css, $exclude);
}