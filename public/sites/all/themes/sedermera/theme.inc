<?php
/**
 * @file
 * This file contains the theme function overrides and any custom theme
 * functions that are being used.
 *
 * These functions are the last function that are being executed and are
 * responsible for delivering the actual HTML. They work just like template
 * files, but they are functions rather than actual files.
 *
 * If you want to add an override, you should find the original theme function,
 * usually from the API site, but it can also be found in the corresponding
 * modules implementation of hook_theme().
 */

/**
 * Overrides theme_blockify_logo().
 */
function sedermera_blockify_logo($variables) {
  $site_name = filter_xss_admin(variable_get('site_name', 'Drupal'));
  $page_title = drupal_get_title();

  // Strip the base_path from the beginning of the logo path.
  $path = preg_replace('|^' . base_path() . '|', '', $variables['logo_path']);

  $image = array(
    '#theme' => 'image',
    '#path' => $path,
    '#alt' => t('!site_name logo', array(
      '!site_name' => $site_name,
    )),
    '#title' => $site_name,
  );

  // Don't create a link to the front page if this is the front page. Add the
  // site name as the H1 element if there is no title for the current page.
  if (drupal_is_front_page()) {
    return ($page_title == '' ? '<h1>' . $site_name . '</h1>' : '') . render($image);
  }
  else {
    return ($page_title == '' ? '<h1>' . $site_name . '</h1>' : '') . l(render($image), '<front>', array(
      'html' => TRUE,
      'attributes' => array(
        'id' => 'logo',
        'rel' => 'home',
        'title' => t('Return to the !site_name home page', array(
          '!site_name' => $site_name,
        )),
      ),
    ));
  }
}

/**
 * Overrides theme_fieldset().
 */
function sedermera_fieldset($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id'));
  _form_set_class($element, array('form-wrapper'));

  $output = '<fieldset' . drupal_attributes($element['#attributes']) . '>';
  if (!empty($element['#title'])) {
    // Always wrap fieldset legends in a SPAN for CSS positioning.
    $output .= '<legend><span class="fieldset-legend">' . $element['#title'] . '</span></legend>';
  }
  $output .= '<div class="fieldset-wrapper">';
  if (!empty($element['#description'])) {
    $output .= '<div class="fieldset-description">' . $element['#description'] . '</div>';
  }
  $output .= $element['#children'];
  if (isset($element['#value'])) {
    $output .= $element['#value'];
  }
  $output .= '</div>';
  $output .= "</fieldset>\n";
  return $output;
}

/**
 * Overrides theme_node_add_list().
 */
function sedermera_node_add_list($variables) {
  $content = $variables['content'];
  $output = '';

  if ($content) {
    $output = '<ul class="create-type-list">';
    foreach ($content as $item) {

      // Allow html in item link.
      $item['localized_options']['html'] = TRUE;

      // Add class to item link.
      $item['localized_options']['attributes']['class'] = 'item';

      // Create markup for item link.
      $markup = '<span class="title">' . $item['title'] . '</span>';
      $markup .= '<span class="description">' . filter_xss_admin($item['description']) . '</span>';

      // Output the items.
      $output .= '<li class="type"><div class="type-container">';
      $output .= l($markup, $item['href'], $item['localized_options']);
      $output .= '</div></li>';
    }
    $output .= '</ul>';
  }
  else {
    $output = '<p>' . t('You have not created any content types yet. Go to the <a href="@create-content">content type creation page</a> to add a new content type.', array('@create-content' => url('admin/structure/types/add'))) . '</p>';
  }
  return $output;
}

/**
 * Overrides theme_textarea().
 */
function sedermera_textarea($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'cols', 'rows'));
  _form_set_class($element, array('form-textarea'));

  $wrapper_attributes = array(
    'class' => array('form-textarea-wrapper'),
  );

  // Add resizable behavior.
  if (!empty($element['#resizable'])) {
    drupal_add_library('system', 'drupal.textarea');
    $wrapper_attributes['class'][] = 'resizable';
  }

  return '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
}

/**
 * Overrides theme_button().
 */
function sedermera_button($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  return '<div class="submit-wrapper"><input' . drupal_attributes($element['#attributes']) . ' /></div>';
}

/**
 * Overrides theme_boxes_box().
 */
function sedermera_boxes_box($variables) {
  $block = $variables['block'];
  return $block['content'];
}

/**
 * Overrides theme_menu_local_task.
 */
function sedermera_menu_local_task($variables) {
  $link = $variables['element']['#link'];
  $link_text = $link['title'];

  if (!empty($variables['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }
    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
  }

  $link_class = strtolower(preg_replace(array('/[^a-zA-Z0-9]+/','/-+/','/^-+/','/-+$/'), array('-', '-', '', ''), $link['title']));

  $link['localized_options']['attributes']['class'] = array($link_class);

  return '<li' . (!empty($variables['element']['#active']) ? ' class="active ' . $link_class . '"' : ' class="' . $link_class . '"') . '>' . l($link_text, $link['href'], $link['localized_options']) . "</li>\n";
}

/**
 * Overrides theme_textfield.
 */
function sedermera_textfield($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'text';
  element_set_attributes($element, array('id', 'name', 'value', 'size', 'maxlength'));
  _form_set_class($element, array('form-text'));

  $extra = '';
  if ($element['#autocomplete_path'] && drupal_valid_path($element['#autocomplete_path'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';

    $attributes = array();
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#attributes']['id'] . '-autocomplete';
    $attributes['value'] = url($element['#autocomplete_path'], array('absolute' => TRUE));
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    $extra = '<div class="throbber"></div><input' . drupal_attributes($attributes) . ' />';
  }

  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';

  return $output . $extra;
}

/**
 * Overrides theme_file_widget.
 */
function sedermera_file_widget($variables) {
  $element = $variables['element'];
  $output = '';

  // The "form-managed-file" class is required for proper Ajax functionality.
  $output .= '<div class="file-widget form-managed-file clearfix">';

  if ($element['fid']['#value'] == 0) {
    $output .= '<div class="file-widget-data"><div class="icon"></div><input type="text" class="text" placeholder="Välj en fil.."/>';
  } else {
    $output .= '<div class="file-widget-data">';
  }

  if ($element['fid']['#value'] != 0) {
    // Add the file size after the file name.
    $element['filename']['#markup'] .= ' <span class="file-size">(' . format_size($element['#file']->filesize) . ')</span> ';
  }
  $output .= drupal_render_children($element);
  $output .= '</div></div>';

  return $output;
}

/**
 * Overrides theme_image_widget.
 */
function sedermera_image_widget($variables) {
  $element = $variables['element'];
  $output = '';
  if ($element['fid']['#value'] == 0) {
    $output .= '<div class="image-widget form-managed-file clearfix">';
  }
  else {
    $output .= '<div class="image-widget form-managed-file populated clearfix">';
  }

  if (isset($element['preview'])) {
    $output .= '<div class="image-preview">';
    $output .= drupal_render($element['preview']);
    $output .= '</div>';
  }

  if ($element['fid']['#value'] == 0) {
    $output .= '<div class="image-widget-data"><div class="icon"></div><input type="text" class="text" placeholder="Välj en bild.."/>';
  } else {
    $output .= '<div class="image-widget-data">';
  }

  if ($element['fid']['#value'] != 0) {
    $element['filename']['#markup'] .= ' <span class="file-size">(' . format_size($element['#file']->filesize) . ')</span> ';
  }
  $output .= drupal_render_children($element);
  $output .= '</div>';
  $output .= '</div>';

  return $output;
}

/**
 * Overrides theme_file_icon.
 */
function sedermera_file_icon($variables) {
  $file = $variables['file'];
  $alt = $variables['alt'];
  $icon_directory = $variables['icon_directory'];

  $mime = check_plain($file->filemime);
  $icon_url = file_icon_url($file, $icon_directory);

  // Prepend the base root to the URL in order to make it accessible from the
  // outside.
  $icon_url = $GLOBALS['base_root'] . $icon_url;

  return '<img class="file-icon" alt="' . check_plain($alt) . '" title="' . $mime . '" src="' . $icon_url . '" />';
}