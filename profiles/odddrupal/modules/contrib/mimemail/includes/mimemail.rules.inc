<?php // $Id$

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
    'mimemail_rules_action_mail_to_user' => array(
      'label' => t('Send an HTML mail to a user'),
      'arguments' => array(
        'user' => array('type' => 'user', 'label' => t('Recipient')),
      ),
      'module' => 'Mime Mail',
      'eval input' => array('from', 'to', 'cc', 'bcc', 'subject', 'message_html', 'message_plaintext', 'attachments'),
    ),
    'mimemail_rules_action_mail' => array(
      'label' => t('Send an HTML mail to an arbitrary mail address'),
      'module' => 'Mime Mail',
      'eval input' => array('from', 'to', 'cc', 'bcc', 'subject', 'message_html', 'message_plaintext', 'attachments'),
    ),
    'mimemail_rules_action_mail_to_users_of_role' => array(
      'label' => t('Send an HTML mail to all users of a role'),
      'module' => 'Mime Mail',
      'eval input' => array('from', 'to', 'cc', 'bcc', 'subject', 'message_html', 'message_plaintext', 'attachments'),
    ),
  );
}

/**
 * Action Implementation: Send a mail to a user and to an arbitrary mail address.
 */
function mimemail_rules_action_mail_to_user($user, $settings) {
  // Process settings.
  $settings = mimemail_rules_form_settings_process($settings);
  $from = $settings['from'];
  $subject = $settings['subject'];
  $body = $settings['message_html'];
  $plaintext = $settings['message_plaintext'];
  $attachments = $settings['attachments'];
  $mailkey = 'mimemail_rules_action_mail';

  // If recipient field is empty send it to given user object.
  $to = empty($settings['to']) ? $user->mail : implode(',', $settings['to']);

  $headers = array();
  if (!empty($settings['bcc'])) {
    $headers['Bcc'] = implode(',', $settings['bcc']);
  }
  if (!empty($settings['cc'])) {
    $headers['Cc'] = implode(',', $settings['cc']);
  }

  $status = mimemail($from, $to, $subject, $body, NULL , $headers, $plaintext, $attachments, $mailkey);

  if (!empty($status)) {
    $recipients = array_merge(explode(',', $to), $settings['bcc'], $settings['cc']);
    watchdog('rules', 'HTML mail successfully sent to %recipient', array('%recipient' => implode(', ', $recipients)));
  }
}

/**
 * Action Implementation: rules_action_mail
 * This action makes use of the rules_action_mail_to_user action implementation.
 */
function mimemail_rules_action_mail($settings) {
  mimemail_rules_action_mail_to_user(NULL, $settings);
}

/**
 * Action: Send mail to all users of a specific role group(s).
 */
function mimemail_rules_action_mail_to_users_of_role($settings) {
  $recipients = array_filter(array_keys(array_filter($settings['recipients'])));

  // All authenticated users, which is everybody.
  if (in_array(DRUPAL_AUTHENTICATED_RID, $recipients)) {
    $result = db_query('SELECT mail FROM {users} WHERE uid > 0');
  }
  else {
    $rids = implode(',', $recipients);
    // Avoid sending emails to members of two or more target role groups.
    $result = db_query('SELECT DISTINCT u.mail FROM {users} u INNER JOIN {users_roles} r ON u.uid = r.uid WHERE r.rid IN ('. $rids .')');
  }

  // Process settings.
  $settings = mimemail_rules_form_settings_process($settings);
  $from = $settings['from'];
  $subject = $settings['subject'];
  $body = $settings['message_html'];
  $plaintext = $settings['message_plaintext'];
  $attachments = $settings['attachments'];
  $mailkey = 'mimemail_rules_action_role_mail';

  // Now, actually send the mails.
  $status = TRUE;
  while (($account = db_fetch_object($result)) && !empty($status)) {
    $status = mimemail($from, $account->mail, $subject, $body, NULL, array(), $plaintext, $attachments, $mailkey);
  }
  if (!empty($status)) {
    $roles = array_intersect_key(user_roles(TRUE), drupal_map_assoc($recipients));
    watchdog('rules', 'HTML mail successfully sent to role(s) %roles.', array('%roles' => implode(', ', $roles)));
  }
}

/*
 * Helper function for processing form settings on execution time,
 * so that tokens and input evaluators apply.
 */
function mimemail_rules_form_settings_process($settings) {
  // We also handle CC and BCC if it's set.
  $settings['to'] = empty($settings['to']) ? array() : explode(',', $settings['to']);
  $settings['cc'] = empty($settings['cc']) ? array() : explode(',', $settings['cc']);
  $settings['bcc'] = empty($settings['bcc']) ? array() : explode(',', $settings['bcc']);

  foreach ($settings['to'] as $key => $address) {
    $settings['to'][$key] = str_replace(array("\r", "\n"), '', trim($address));
  }
  foreach ($settings['cc'] as $key => $address) {
    $settings['cc'][$key] = str_replace(array("\r", "\n"), '', trim($address));
  }
  foreach ($settings['bcc'] as $key => $address) {
    $settings['bcc'][$key] = str_replace(array("\r", "\n"), '', trim($address));
  }

  $settings['from'] = str_replace(array("\r", "\n"), '', $settings['from']);
  $settings['subject'] = str_replace(array("\r", "\n"), '', $settings['subject']);

  $attachments = array();
  $attachments_string = trim($settings['attachments']);
  if (!empty($attachments_string)) {
    $attachment_lines = array_filter(explode("\n", trim($attachments_string)));
    foreach ($attachment_lines as $key => $attachment_line) {
      $attachment = explode(":", trim($attachment_line), 2);
      $attachments[] = array(
        'filepath' => $attachment[1],
        'filemime' => $attachment[0],
      );
    }
  }
  $settings['attachments'] = empty($attachments[0]['filepath']) ? array() : $attachments;

  return $settings;
}

/**
 * @}
 */

