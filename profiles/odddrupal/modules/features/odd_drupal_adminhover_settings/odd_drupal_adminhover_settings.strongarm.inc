<?php

/**
 * Implementation of hook_strongarm().
 */
function odd_drupal_adminhover_settings_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_hover_active_links_block';
  $strongarm->value = array(
    'admin%2Fbuild%2Fblock%2Fconfigure%2F%25module%2F%25id' => 'admin%2Fbuild%2Fblock%2Fconfigure%2F%25module%2F%25id',
    'admin%2Fbuild%2Fblock%2Fadd' => 0,
  );

  $export['admin_hover_active_links_block'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_hover_active_links_node';
  $strongarm->value = array(
    'node%2F%5Bnid%5D%2Fedit' => 'node%2F%5Bnid%5D%2Fedit',
    'node%2F%5Bnid%5D%2Fdelete' => 'node%2F%5Bnid%5D%2Fdelete',
    'node%2F%5Bnid%5D%2Fadmin_hover%2Fpublish' => 0,
    'node%2F%5Bnid%5D%2Fadmin_hover%2Funpublish' => 0,
    'node%2F%5Bnid%5D%2Fadmin_hover%2Fpromote' => 0,
    'node%2F%5Bnid%5D%2Fadmin_hover%2Funpromote' => 0,
    'node%2F%5Bnid%5D%2Fadmin_hover%2Fmake_sticky' => 0,
    'node%2F%5Bnid%5D%2Fadmin_hover%2Fmake_unsticky' => 0,
    'node%2F%5Bnid%5D%2Fclone' => 0,
    'node%2F%5Bnid%5D%2Fdevel%2Fload' => 0,
    'user%2F%5Bauthor-uid%5D' => 0,
    'user%2F%5Bauthor-uid%5D%2Fedit' => 0,
    'node%2Fadd%2F%5Btype-path%5D' => 0,
  );

  $export['admin_hover_active_links_node'] = $strongarm;
  return $export;
}
