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

Ni har härmed erhållit insiderinformation i <?php print $company; ?> och därigenom blivit insynsloggad, vilket innebär att Ni inte får utnyttja informationen för egen eller någon annans räkning. Vidare får informationen inte vidarebefordras och inte heller på annat sätt göras tillgänglig för andra. Informationen skall behandlas med strikt sekretess.

Om Ni har några frågor eller funderingar, vänligen kontakta mig.

Med vänlig hälsning
<?php print $sender; ?>
