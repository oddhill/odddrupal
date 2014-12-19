<?php
/**
 * @file
 * Definition of sedermera_verificaton_views_handler_status_field.
 */

/**
 * Handler for the verification status link.
 */
class sedermera_verificaton_views_handler_status_field extends views_handler_field_entity {

  /**
   * Override the option form.
   */
  function options_form(&$form, &$form_state) {
    // Load the parent definition in order to disable irrelevant settings.
    parent::options_form($form, $form_state);
    $form['alter']['#access'] = FALSE;
    $form['empty_field_behavior']['#access'] = FALSE;
  }

  /**
   * Render the field.
   */
  function render($values) {
    // Get the investor for this row.
    $investor = $this->get_value($values);

    // Change the options in order to render this field as a link to the
    // verification form for the investor.
    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['link_class'] = 'sedermera-verification-status-check';
    $this->options['alter']['path'] = "investor/{$investor->type}/{$investor->id}/kontroll";
    $this->options['alter']['query'] = array('destination' => current_path());

    // Return a renderable array for the text which will attach the javascript
    // required for the AJAX check.
    return array(
      '#markup' => 'Visa',
      '#attached' => array(
        'js' => array(
          drupal_get_path('module', 'sedermera_verification') . '/sedmera_verification_status_field.js',
        ),
      ),
    );
  }

}
