<?php

function oddroots_css_alter(&$css) {
  $exclude = array(
    'modules/system/system.menus.css' => FALSE,
    'modules/system/system.theme.css' => FALSE,
  );
  $css = array_diff_key($css, $exclude);
}

// Hide toolbar from user 1
function oddroots_page_alter(&$page) {
	global $user;
	if ($user->uid == 1) {
		unset($page['page_top']['toolbar']);
	}
}