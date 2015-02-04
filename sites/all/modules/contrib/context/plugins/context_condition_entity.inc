<?php

define('CONTEXT_ENTITY_VIEW', 0);
define('CONTEXT_ENTITY_FORM', 1);
define('CONTEXT_ENTITY_FORM_ONLY', 2);

/**
 * Expose node views/node forms of specific node types as a context condition.
 */
class context_condition_entity extends context_condition {
  function condition_values() {
    $values = array();
    foreach (entity_get_info() as $name => $type) {
      $values[$name] = check_plain($type['label'].' ('.$name.')');
    }
    return $values;
  }

  function options_form($context) {
    $defaults = $this->fetch_from_context($context, 'options');
    return array(
      'entity_form' => array(
        '#title' => t('Set on entity form'),
        '#type' => 'select',
        '#options' => array(
           CONTEXT_ENTITY_VIEW => t('No'),
           CONTEXT_ENTITY_FORM => t('Yes'),
           CONTEXT_ENTITY_FORM_ONLY => t('Only on form')
        ),
        '#description' => t('Set this context on entity forms'),
        '#default_value' => isset($defaults['entity_form']) ? $defaults['entity_form'] : TRUE,
      ),
    );
  }

  function execute($entity_type, $op) {
    foreach ($this->get_contexts($entity_type) as $context) {
      if ($op === 'form') {
        $options = $this->fetch_from_context($context, 'options');
        if (!empty($options['entity_form']) && in_array($options['entity_form'], array(CONTEXT_ENTITY_FORM, CONTEXT_ENTITY_FORM_ONLY))) {
          $this->condition_met($context, $entity_type);
        }
      }
      elseif (empty($options['entity_form']) || $options['entity_form'] != CONTEXT_ENTITY_FORM_ONLY) {
        $this->condition_met($context, $entity_type);
      }
    }
  }
}
