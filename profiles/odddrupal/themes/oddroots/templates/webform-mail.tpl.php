<?php
// $Id: webform-mail.tpl.php,v 1.3.2.3 2010/08/30 20:22:15 quicksketch Exp $

/**
 * @file
 * Customize the e-mails sent by Webform after successful submission.
 *
 * This file may be renamed "webform-mail-[nid].tpl.php" to target a
 * specific webform e-mail on your site. Or you can leave it
 * "webform-mail.tpl.php" to affect all webform e-mails on your site.
 *
 * Available variables:
 * - $node: The node object for this webform.
 * - $submission: The webform submission.
 * - $email: The entire e-mail configuration settings.
 * - $user: The current user submitting the form.
 * - $ip_address: The IP address of the user submitting the form.
 *
 * The $email['email'] variable can be used to send different e-mails to different users
 * when using the "default" e-mail template.
 */
?>
<?php print ($email['html'] ? '<p style="color: #9a9a9a;">' : '') . t('Submitted on %date'). ($email['html'] ? '</p>' : ''); ?>

<table width="560" cellspacing="0" cellpadding="0" border="0" align="center">
  <tr>
    <td height="10" width="560"></td>
  </tr>
  <tr>
    <td width="560" style="font-size: 13px; line-height: 20px;">%email_values</td>
  </tr>
</table>

<?php if ($user->uid): ?>
<?php print ($email['html'] ? '<br /><p>' : '') . t('<strong>Submitted by user:</strong> %username') . ($email['html'] ? '</p>' : ''); ?>
<?php else: ?>
<?php print ($email['html'] ? '<p>' : '') . t('<strong>Submitted by anonymous user:</strong> [%ip_address]') . ($email['html'] ? '</span> <p/>' : ''); ?>
<?php endif; ?>

<?php print ($email['html'] ? '<p style="font-style: italic; color: #9a9a9a;">' : '') . t('The results of this submission may be viewed at: ') . ($email['html'] ? '</p>' : '') ?>

<?php print ($email['html'] ? '<p>' : ''); ?><a href="%submission_url">%submission_url</a><?php print ($email['html'] ? '</p>' : ''); ?>

