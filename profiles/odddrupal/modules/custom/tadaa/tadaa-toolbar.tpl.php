<?php
/**
 * @file
 * Creates the output for the toolbar that's added
 * to the footer.
 *
 * $environments
 *  An array of options used by the select list.
 *  name: The name of the environment.
 *  attributes: HTML attributes to add to the option element.
 *
 * $module_state
 *  The text that is shown when the current module state
 *  is being loaded.
 *
 * $variable_state
 *  The text that is shown when the current module state
 *  is being loaded.
 *
 * $mail
 *  An array containing the email address used by reroute email.
 *  mail: The configured email address.
 *  show: Boolean indicating wether or not to show the mail wrapper.
 */
?>

<div id="tadaa-wrapper">
  <div class="tadaa-environments-wrapper">
    <label for="tadaa-environments">Vald miljö:</label>
    <select id="tadaa-environments" name="tadaa-environments">
      <?php foreach ($environments as $key => $environment): ?>
        <option value="<?php print $key; ?>"<?php print drupal_attributes($environment['attributes']); ?>><?php print $environment['name']; ?></option>
      <?php endforeach; ?>
    </select>
  </div>
  
  <div class="tadaa-module-state-wrapper">
    Moduler:
    <span id="tadaa-module-state"><a href="#tadaa-module-status"><?php print $module_state; ?></a></span>
  </div>
  
  <div class="tadaa-variable-state-wrapper">
    Variabler:
    <span id="tadaa-variable-state"><a href="#tadaa-variable-status"><?php print $variable_state; ?></a></span>
  </div>
  
  <?php $style = $mail['show'] ? '' : ' style="display: none;"'; ?>
  <div class="tadaa-mail-wrapper"<?php print $style; ?>>
    <label for="tadaa-mail">Skicka all e-post till:</label>
    <input id="tadaa-mail" name="tadaa-mail" type="text" value="<?php print $mail['mail']; ?>" />
  </div>
</div>