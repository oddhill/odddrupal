<?php
/**
 * @file
 * Template file for the signed mail.
 *
 * Available variables:
 * - $recipient: Name of the recipient.
 * - $sender: Name of the user that sent the email.
 * - $company: Name of the company for which the information is connected to.
 */
?>
Hej <?php print $recipient; ?>,

Ni har härmed blivit utloggade från Er insynsställning i <?php print $company; ?>.

Om Ni har några frågor eller funderingar, vänligen kontakta mig.

Med vänlig hälsning
<?php print $sender; ?>
