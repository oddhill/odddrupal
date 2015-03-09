<?php

/**
* @file
* Views field handler. Outputs a checkbox for selecting a row for email sending.
* Implements the Views Form API.
*/

class views_send_handler_field_selector extends views_handler_field {
  /**
   * If the view is using a table style, provide a
   * placeholder for a "select all" checkbox.
   */
  function label() {
    // Don't do anything if the user doesn't have access.
    if (!user_access('mass mailing with views_send')) {
      return;
    }

    if ($this->view->style_plugin instanceof views_plugin_style_table) {
      return '<!--views-send-select-all-->';
    }
    else {
      return parent::label();
    }
  }

  function query() {
    // Do nothing.
  }

  function render($values) {
    // Don't do anything if the user doesn't have access.
    if (!user_access('mass mailing with views_send')) {
      return;
    }

    return '<!--form-item-' . $this->options['id'] . '--' . $this->view->row_index . '-->';
  }

  /**
   * The form which replaces the placeholder from render().
   */
  function views_form(&$form, &$form_state) {
    // Don't do anything if the user doesn't have access.
    if (!user_access('mass mailing with views_send')) {
      return;
    }

    // The view is empty, abort.
    if (empty($this->view->result)) {
      return;
    }

    $form[$this->options['id']] = array(
      '#tree' => TRUE,
    );
    foreach ($this->view->result as $row_index => $row) {
      $form[$this->options['id']][$row_index] = array(
        '#type' => 'checkbox',
        '#default_value' => FALSE,
        '#attributes' => array('class' => array('views-send-select')),
      );
    }
  }

  function views_form_validate($form, &$form_state) {
    $field_name = $this->options['id'];
    $selection = array_filter($form_state['values'][$field_name]);

    if (empty($selection)) {
      form_set_error($field_name, t('Please select at least one item.'));
    }
  }
}
