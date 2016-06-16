<?php
/**
 * @file
 * Definition of sedermera_investor_views_handler_sign_field.
 */

/**
 * Handler for the verification status link.
 */
class sedermera_investor_views_handler_sign_field extends views_handler_field_entity {

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
    // Get the offer for this row.
    $offer = $this->get_value($values);
    $wrapper = entity_metadata_wrapper('offer', $offer);

    if ($wrapper->field_offer_signed->value()) {
      // The offer has already been signed.
      return 'Tecknad';
    }
    else {
      // The offer hasn't been signed. Print a link to the form for signing an
      // offer if the user has the appropriate permission.
      if (user_access('eck edit offer offer entities')) {
        $capital_raising_id = $wrapper->field_offer_cap_rais->nid->value();
        $offer_id = $wrapper->id->value();
        $this->options['alter']['make_link'] = TRUE;
        $this->options['alter']['path'] = "node/$capital_raising_id/intressenter/$offer_id/teckna";
        $this->options['alter']['query'] = array('destination' => current_path());
        return array('#markup' => 'Teckna');
      }
      else {
        return array('#markup' => 'Ej tecknad');
      }
    }
  }

}
