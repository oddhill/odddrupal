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

  // TODO Move logic to module
  if ($variables['type'] == 'ctrl' && $variables['view_mode'] == 'full') {

    $node = entity_metadata_wrapper('node', $variables['nid']);

    $variables['incomplete'] = FALSE;
    $variables['empty_date'] = FALSE;

    if ($node->field_ctrl_date->value() == '' || empty($node->field_ctrl_files->value()) || empty($node->field_ctrl_notes->value())) {
      $variables['incomplete'] = TRUE;
    }

    if ($node->field_ctrl_date->value() == '') {
      $variables['empty_date'] = TRUE;
    }

    // Check status of current control
    $status = sedermera_verification_get_status_single($variables['nid']);

    // Set a variable to use with template depending on status
    switch ($status) {
      case SEDERMERA_VERIFICATION_NOT_APPROVED:
        $variables['ver_text'] = 'ej godkänd';
        $variables['ver_status'] = 'not-approved';
        break;

      case SEDERMERA_VERIFICATION_EXPIRING:
        $variables['ver_text'] = 'utgående';
        $variables['ver_status'] = 'expiring';
        break;

      case SEDERMERA_VERIFICATION_APPROVED:
        $variables['ver_text'] = 'godkänd';
        $variables['ver_status'] = 'approved';
        break;
    }
  }

  if ($variables['type'] == 'document' && $variables['view_mode'] == 'full') {
    if (sizeof(arg()) <= 2) {
      $user_id = $variables['user']->uid;
      // Only registered users should sign the document
      // Exclude anonymous and root users
      if ($user_id >= 2) {
        $variables['show_sidebar'] = TRUE;
        // Get list of users who have signed the document.
        $user_sign = $variables['node']->field_document_user_read[LANGUAGE_NONE];

        // User have not signed the document.
        // Creates link for the user to sign the document.
        $variables['sign'] = l('Bekräfta', url('node/' . $variables['nid'] . '/sign'));
        $variables['sign_status'] = FALSE;
        $variables['signtext'] = 'Ja, jag har läst och förstått detta dokument';

        // If any user have signed the document proceed.
        if (isset($user_sign)) {
          foreach ($user_sign as $key => $value) {
            // Check if the current user have signed the document.
            if ($value['target_id'] == $user_id) {
              // User have signed the document.
              // Creates text to display that the user have already signed the document.
              $variables['sign'] = '<div class="signed-icon"></div>';
              $variables['sign_status'] = TRUE;
              $variables['signtext'] = 'Du har läst och förstått detta dokument';
            }
          }
        }
      }
    }

    $doc_rel_link = "<ul>";
    $doc_app_link = "<ul>";

    foreach (getDocuments() as $doc) {
      if (!empty($doc->field_dokument_relation)) {
        // List documents related to this document
        foreach ($doc->field_dokument_relation[LANGUAGE_NONE] as $relation) {
          if ($relation['target_id'] == $variables['nid']) {
            $doc_rel_link .= "<li>" . l($doc->title, url('node/' . $doc->nid)) . "</li>";
          }
        }
      }
      if (!empty($doc->field_document_appendix)) {
        // List documents appendix to this document
        foreach ($doc->field_document_appendix[LANGUAGE_NONE] as $relation) {
          if ($relation['target_id'] == $variables['nid']) {
            $doc_app_link .= "<li>" . l($doc->title, url('node/' . $doc->nid)) . "</li>";
          }
        }
      }
    }

    // List documents related from this document
    if (!empty($variables['field_dokument_relation'])) {
      foreach ($variables['field_dokument_relation'] as $relation) {
        $doc_rel_link .= "<li>" . l($relation['entity']->title, url('node/' . $relation['entity']->nid)) . "</li>";
      }
    }

    $doc_rel_link .= "</ul>";
    $doc_app_link .= "</ul>";

    // Create variable for related documents
    if ($doc_rel_link != "<ul></ul>") {
      $variables['related'] = "<div class='field field-dokument-relation'><span class='label'>Relaterade dokument&nbsp;</span>" . $doc_rel_link . "</div>";
    }

    // Create variable for appendix documents
    if ($doc_app_link != "<ul></ul>") {
      $variables['appendix'] = "<div class='field field-dokument-appendix'><span class='label'>Bilaga&nbsp;</span>" . $doc_app_link . "</div>";
    }

    if (!empty($variables['field_document_files'])) {
      $doc_file = "<ul>";

      foreach ($variables['field_document_files'] as $file) {
        $doc_file .= "<li>" . getIcon($file) . " " . l($file['filename'], file_create_url($file['uri'])) . "</li>";
      }

      $doc_file .= "</ul>";

      // Create variable for document files
      if ($doc_file != "<ul></ul>") {
        $variables['files'] = "<div class='field field-document-files'><span class='label'>Filer&nbsp;</span>" . $doc_file . "</div>";
      }
    }
  }
}

function sedermera_preprocess_entity(&$variables) {
  if ($variables['elements']['#entity_type'] == 'contact_person' && $variables['elements']['#view_mode'] == 'full') {

    $res = db_query("SELECT title FROM eck_investor LEFT JOIN field_data_field_invest_cont_person ON eck_investor.id = field_data_field_invest_cont_person.entity_id WHERE field_data_field_invest_cont_person.field_invest_cont_person_target_id = :id", array(':id' => arg(2)))->fetchAll();

    if (!empty($res)) {
      $variables['contact_persons'] = array(
        '#type' => 'container',
        '#prefix' => '<div class="contact_company"><span class="label">Företag:&nbsp;</span><ul>',
        '#suffix' => '</ul></div>',
      );

      foreach ($res as $value) {
        $link = str_replace(" ", "-", strtolower($value->title));

        $variables['contact_persons'][] = array(
          '#type' => 'markup',
          '#prefix' => '<li>',
          '#suffix' => '</li>',
          '#markup' => l(t($value->title), 'investerare/lista/' . $link),
        );
      }
    }
  }

  if ($variables['elements']['#entity_type'] == 'investor' && $variables['elements']['#view_mode'] == 'full') {
    $variables['view_page'] = (arg(3) == '') ? TRUE : FALSE;
    $variables['control_page'] = (arg(3) == 'kontroll') ? TRUE : FALSE;
    $variables['history_page'] = (arg(3) == 'transaktionshistoria') ? TRUE : FALSE;

    if (isset($variables['elements']['#entity']->field_shared_ctrl)) {
      $node = node_load($variables['elements']['#entity']->field_shared_ctrl[LANGUAGE_NONE][0]['target_id']);
    }
    else if (isset($variables['elements']['#entity']->field_shared_ctrl_pvt)) {
      $node = node_load($variables['elements']['#entity']->field_shared_ctrl_pvt[LANGUAGE_NONE][0]['target_id']);
    }
    else {
      return;
    }
    $variables['control_node'] = node_view($node, 'full');
  }
}

function getIcon($file) {
  $title = $file['filemime'];
  $src = 'text-plain.png';

  switch ($title) {
    case 'application/pdf':
      $src = 'application-pdf.png';
      break;
    case 'application/msword':
      $src = 'x-office-document.png';
      break;
    case 'application/vnd.openxmlformats-officedocument.wordprocessingml.document':
      $src = 'x-office-document.png';
      break;
  }

  return "<img class='file-icon' alt='' title='" . $title . "' src='/modules/file/icons/" . $src . "'>";
}

function sedermera_preprocess_views_view_table(&$vars) {
  $view = &$vars['view'];

  if ($view->name == 'transactions' && $view->current_display == 'page') {
    drupal_add_js(drupal_get_path('module', 'sedermera_core') . '/js/view_calc_table_reload.js');
    $vars['sum_row'] = $view->res;
    $vars['disable'] = $view->disable;
  }
  else if ($view->name == 'offers' && $view->current_display == 'page_1') {
    $vars['disable'] = $view->disable;
  }
}
