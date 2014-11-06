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
 * Overrides theme_form_element().
 */
function sedermera_form_element($variables) {
  $element = &$variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = array('form-item');
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);

      // Don't add the element if this is a checkbox or radiobutton. In those
      // cases, the element will be added inside the label.
      if (!in_array($element['#type'], array('checkbox', 'radio'))) {
        $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      }
      break;

    case 'after':
      // Don't add the element if this is a checkbox or radiobutton. In those
      // cases, the element will be added inside the label.
      if (!in_array($element['#type'], array('checkbox', 'radio'))) {
        $output .= ' ' . $prefix . $element['#children'] . $suffix;
      }

      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= "</div>\n";

  return $output;
}

/**
 * Overrides theme_form_element_label().
 */
function sedermera_form_element_label($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  $attributes = array();
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = 'option';
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = 'element-invisible';
  }

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }

  // If the element is a checkbox or radiobutton, add the element inside the
  // label. Determine the location using the #title_display key, and put it in
  // the appropriate location.
  if (in_array($element['#type'], array('checkbox', 'radio'))) {
    switch ($element['#title_display']) {
      case 'before':
      case 'invisible':
        return ' <label' . drupal_attributes($attributes) . '>' . $t('!title !required', array('!title' => $title, '!required' => $required)) . $element['#children'] . "</label>\n";
        break;

      case 'after':
        return ' <label' . drupal_attributes($attributes) . '>' . $element['#children'] . $t('!title !required', array('!title' => $title, '!required' => $required)) . "</label>\n";
        break;
    }
  }

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $t('!title !required', array('!title' => $title, '!required' => $required)) . "</label>\n";
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
 * Overrides theme_container().
 */
function sedermera_container($variables) {
  $element = $variables['element'];

  // Special handling for form elements.
  if (isset($element['#array_parents'])) {
    // Assign an html ID.
    if (!isset($element['#attributes']['id'])) {
      $element['#attributes']['id'] = $element['#id'];
    }
    // Add the 'form-wrapper' class.
    $element['#attributes']['class'][] = 'form-wrapper';
  }

  return $element['#children'];
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
 * Overrides theme_file_link.
 */
function sedermera_file_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $url = file_create_url($file->uri);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );

  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  return '<span class="file ' . str_replace('/', '-', $file->filemime) . '">' . $icon . ' ' . l($link_text, $url, $options) . '</span>';
}
