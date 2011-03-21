<?php

/**
 * @file
 * Rules actions for sending Mime-encoded emails.
 *
 * @addtogroup rules
 * @{
 */

/**
 * Implementation of hook_rules_action_info().
 */
function mimemail_rules_action_info() {
  return array(
    'mimemaill' => array(
      'label' => t('Send HTML e-mail'),
      'group' => t('System'),
      'parameter' => array(
        'to' => array(
          'type' => 'text',
          'label' => t('To'),
          'description' => t("The mail's recipient address. The formatting of this string must comply with RFC 2822."),
        ),
        'cc' => array(
          'type' => 'text',
          'label' => t('CC Recipient'),
          'description' => t("The mail's carbon copy address. You may separate multiple addresses with comma."),
          'optional' => TRUE,
        ),
        'bcc' => array(
          'type' => 'text',
          'label' => t('BCC Recipient'),
          'description' => t("The mail's blind carbon copy address. You may separate multiple addresses with comma."),
          'optional' => TRUE,
        ),
        'from' => array(
          'type' => 'text',
          'label' => t('From'),
          'description' => t("The mail's from address. Leave it empty to use the site-wide configured address."),
          'optional' => TRUE,
        ),
        'subject' => array(
          'type' => 'text',
          'label' => t('Subject'),
          'description' => t("The mail's subject."),
        ),
        'body' => array(
          'type' => 'text',
          'label' => t('Body'),
          'description' => t("The mail's message HTML body."),
        ),
        'plaintext' => array(
          'type' => 'text',
          'label' => t('Plain text body'),
          'description' => t("The mail's message plaintext body."),
          'optional' => TRUE,
        ),
        'attachments' => array(
          'type' => 'text',
          'label' => t('Attachments'),
          'description' => t("The mail's attachments, one file per line like [mimetype]:[path] e.g. \"image/png:/files/images/mypic.png\"."),
          'optional' => TRUE,
        ),
      ),
      'base' => 'rules_action_mimemail',
      'access callback' => 'rules_system_integration_access',
    ),
    'mimemail_to_users_of_role' => array(
      'label' => t('Send HTML mail to all users of a role'),
      'group' => t('System'),
      'parameter' => array(
        'roles' => array(
          'type' => 'list<integer>',
          'label' => t('Roles'),
          'options list' => 'entity_metadata_user_roles',
          'description' => t('Select the roles whose users should receive the mail.'),
        ),
        'from' => array(
          'type' => 'text',
          'label' => t('From'),
          'description' => t("The mail's from address. Leave it empty to use the site-wide configured address."),
          'optional' => TRUE,
        ),
        'subject' => array(
          'type' => 'text',
          'label' => t('Subject'),
          'description' => t("The mail's subject."),
        ),
        'body' => array(
          'type' => 'text',
          'label' => t('Body'),
          'description' => t("The mail's message HTML body."),
        ),
        'plaintext' => array(
          'type' => 'text',
          'label' => t('Plaintext body'),
          'description' => t("The mail's message plaintext body."),
        ),
        'attachments' => array(
          'type' => 'text',
          'label' => t('Attachments'),
          'description' => t("The mail's attachments, one file per line like [mimetype]:[path] e.g. \"image/png:/files/images/mypic.png\"."),
          'optional' => TRUE,
        ),
      ),
      'base' => 'rules_action_mimemail_to_users_of_role',
      'access callback' => 'rules_system_integration_access',
    ),
  );
}

/**
 * Action Implementation: Send HTML mail.
 */
function rules_action_mimemail($to, $cc = NULL, $bcc = NULL, $from = NULL, $subject, $body, $plaintext = NULL, $attachments = array(), $settings, RulesState $state, RulesPlugin $element) {
  $to = str_replace(array("\r", "\n"), '', $to);
  $cc = str_replace(array("\r", "\n"), '', $cc);
  $bcc = str_replace(array("\r", "\n"), '', $bcc);
  $from = !empty($from) ? str_replace(array("\r", "\n"), '', $from) : NULL;

  $attachments_string = trim($attachments);
  if (!empty($attachments_string)) {
    $attachments = array();
    $attachment_lines = array_filter(preg_split("/\n/", trim($attachments_string)));
    foreach ($attachment_lines as $key => $attachment_line) {
      $attachment = explode(":", trim($attachment_line), 2);
      $attachments[] = array(
        'filepath' => $attachment[1],
        'filemime' => $attachment[0],
      );
    }
  }

  $params = array(
    'context' => array(
      'subject' => $subject,
      'body' => $body,
      'action' => $element,
      'state' => $state,
    ),
    'plaintext' => $plaintext,
    'attachments' => $attachments,
  );

  if ($cc) $params['headers']['Cc'] = $cc;
  if ($bcc) $params['headers']['Bcc'] = $bcc;

  // Set a unique key for this mail.
  $name = isset($element->root()->name) ? $element->root()->name : 'unnamed';
  $key = 'rules_action_mimemail_' . $name . '_' . $element->elementId();

  $message = drupal_mail('mimemail', $key, $to, language_default(), $params, $from);
  if ($message['result']) {
    watchdog('rules', 'Successfully sent HTML email to %recipient', array('%recipient' => $to));
  }
}

/**
 * Action: Send HTML mail to all users of a specific role group(s).
 */
function rules_action_mimemail_to_users_of_role($roles, $from = NULL, $subject, $body, $plaintext = NULL, $attachments = array(), $settings, RulesState $state, RulesPlugin $element) {
  $from = !empty($from) ? str_replace(array("\r", "\n"), '', $from) : NULL;

  // All authenticated users, which is everybody.
  if (in_array(DRUPAL_AUTHENTICATED_RID, $roles)) {
    $result = db_query('SELECT mail FROM {users} WHERE uid > 0');
  }
  else {
    $rids = implode(',', $roles);
    // Avoid sending emails to members of two or more target role groups.
    $result = db_query('SELECT DISTINCT u.mail FROM {users} u INNER JOIN {users_roles} r ON u.uid = r.uid WHERE r.rid IN ('. $rids .')');
  }

  $params = array(
    'context' => array(
      'subject' => $subject,
      'body' => $body,
      'action' => $element,
      'state' => $state,
    ),
    'plaintext' => $plaintext,
    'attachments' => $attachments,
  );

  // Set a unique key for this mail.
  $name = isset($element->root()->name) ? $element->root()->name : 'unnamed';
  $key = 'rules_action_mimemail_to_users_of_role_' . $name . '_' . $element->elementId();

  $message = array('result' => TRUE);
  foreach ($result as $row) {
    $message = drupal_mail('mimemail', $key, $row->mail, language_default(), $params, $from);
    if (!$message['result']) {
      break;
    }
  }
  if ($message['result']) {
    $role_names = array_intersect_key(user_roles(TRUE), array_flip($roles));
    watchdog('rules', 'Successfully sent HTML email to the role(s) %roles.', array('%roles' => implode(', ', $role_names)));
  }
}

/**
 * @}
 */

