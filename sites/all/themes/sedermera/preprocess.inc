<?php
/**
 * @file
 * This file should contain any preprocess functions that are being used.
 *
 * Preprocess functions are functions that runs before the theme function or
 * template file. For example, the template_preprocess_node will process the
 * variables that will be available to the node.tpl.php.
 *
 * You are also able to manage the template suggestions using these functions.
 * Using the node example again, the node.tpl.php will cover any node, but
 * node-123.tpl.php will only cover the node with the id 123. This is a simple
 * template suggestion, and you could add whatever suggestions you like.
 *
 * @see http://drupal.org/node/223430
 */

/**
 * Implements template_preprocess_block().
 */
function sedermera_preprocess_block(&$variables) {
  // Alter the title for some blocks. This is manually configured here, because
  // Features doesn't export block configuration.
  switch ($variables['block']->bid) {
    case 'system-main-menu':
    case 'msnf-msnf_step_data':
      $variables['block']->subject = '';
      break;

    // Change the block header for the user menu to the current users name.
    case 'system-user-menu':
      $variables['block']->subject = format_username($GLOBALS['user']);
      break;
  }
}

/**
 * Implements template_preprocess_blockify_logo().
 */
function sedermera_preprocess_blockify_logo(&$variables) {
  // Change the url of the logo to the graphics folder.
  $variables['logo_path'] = file_create_url(drupal_get_path('theme', 'sedermera') . '/graphics/logo.svg');
}

/**
 * Implements template_preprocess_date_combo().
 */
function sedermera_preprocess_date_combo(&$variables) {
  // Remove the fieldset description that gets added automatically.
  unset($variables['element']['#fieldset_description']);
}

/**
 * Implements template_preprocess_html().
 */
function sedermera_preprocess_html(&$variables) {
  // Iterate through every region in order to find the block for the main menu.
  // This will check if any links are expanded in order to add a body class.
  foreach (element_children($variables['page']) as $region) {
    foreach (element_children($variables['page'][$region]) as $block) {
      if ($block == 'system_main-menu') {
        // Found the appropriate block. Iterate through every link in this menu.
        foreach (element_children($variables['page'][$region][$block]) as $mlid) {
          if (!empty($variables['page'][$region][$block][$mlid]['#below'])) {
            // The below property contains links, which means that the link is
            // expanded. Add the class, and stop searching.
            $variables['classes_array'][] = 'sub-menu-active';
            break 3;
          }
        }

        // We have found and searched through the appropriate menu already.
        // Don't search through any more blocks or regions.
        break 2;
      }
    }
  }
}

/**
 * Implements template_preprocess_field().
 */
function sedermera_preprocess_field(&$variables) {
  // Append the view mode to every template suggestion. This loop will create a
  // new array where the view mode will be appended and inserted right after
  // every existing suggestion.
  $suggestions = array();
  foreach ($variables['theme_hook_suggestions'] as $suggestion) {
    $suggestions[] = $suggestion;
    $suggestions[] = "{$suggestion}__{$variables['element']['#view_mode']}";
  }
  $variables['theme_hook_suggestions'] = $suggestions;
}

/**
 * Implements template_preprocess_node().
 */
function sedermera_preprocess_node(&$variables) {
  if ($variables['type'] == 'document' && $variables['view_mode'] == 'full') {
    $user_id = $variables['user']->uid;
    // Only registered users should sign the document.
    // Exclude anonymous and root users.
    if ($user_id >= 2) {
      // Get list of users who have signed the document.
      $user_sign = $variables['node']->field_document_user_read[LANGUAGE_NONE];

      // If any user have signed the document proceed.
      if (isset($user_sign)) {
        foreach ($user_sign as $key => $value) {
          // Check if the current user have signed the document.
          if ($value['target_id'] == $user_id) {
            // User have signed the document.
            // Creates text to display that the user have already signed the document.
            $variables['sign'] = 'Du har läst och godkänt detta dokument';
            $variables['sign_status'] = TRUE;
            return;
          }
        }
      }
      // User have not signed the document.
      // Creates link for the user to sign the document.
      $variables['sign'] = l('Ja, jag har läst och godkänner detta dokument', url('node/' . $variables['nid'] . '/sign'));
      $variables['sign_status'] = FALSE;
    }
  }
}
