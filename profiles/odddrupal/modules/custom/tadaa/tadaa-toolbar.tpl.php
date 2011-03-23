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
 * $mail
 *  An array containing the email address used by reroute email.
 *  mail: The configured email address.
 *  show: Boolean indicating wether or not to show the mail wrapper.
 */
?>

<div id="tadaa-wrapper">
  
  <div class="tadaa-state-wrapper">
    <span id="tadaa-module-state"><a href="#tadaa-module-status" class="loading"></a></span>
  </div>
  
  <div class="tadaa-state-wrapper">
    <span id="tadaa-variable-state"><a href="#tadaa-variable-status" class="loading"></a></span>
  </div>
  
  <div class="tadaa-environments-wrapper">
    <select id="tadaa-environments" name="tadaa-environments">
      <?php foreach ($environments as $key => $environment): ?>
        <?php $attributes = is_array($environment['attributes']) ? drupal_attributes($environment['attributes']) : ''; ?>
        <option value="<?php print $key; ?>"<?php print $attributes; ?>><?php print $environment['name']; ?></option>
      <?php endforeach; ?>
    </select>
  </div>
  
  <?php $style = $mail['show'] ? '' : ' style="display: none;"'; ?>
  <div class="tadaa-mail-wrapper"<?php print $style; ?>>
    <input id="tadaa-mail" name="tadaa-mail" type="text" value="<?php print $mail['mail']; ?>" />
  </div>
</div>