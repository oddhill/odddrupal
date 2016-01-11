<?php
/**
 * @file
 * Template file for the signed mail.
 *
 * Available variables:
 * - $recipient: Name of the recipient.
 * - $sender: Name of the user that sent the email.
 * - $company: Name of the company for which the information is connected to.
 *
 * About HTML-mail:
 * Don't use comments in the code below - some email clients can choke on comments so please don't put any unnecessary code anywhere in the file.
 */
?>

<table border="0" cellpadding="0" cellspacing="0" width="100%">
  <tr>
   <td>

    <table align="center" border="0" cellpadding="0" cellspacing="0" width="600" style="border-collapse: collapse;">

      <tr>
        <td align="center" style="border-bottom: 2px solid #eee; padding-bottom: 30px; padding-top: 30px;">
          <img src="<?php print $logo; ?>" alt="Sedermera Fondkommission" style="display: block;" />
        </td>
      </tr>

      <tr>
        <td bgcolor="#ffffff" style="padding: 30px 20px 30px 20px;">

          <table border="0" cellpadding="0" cellspacing="0" width="100%">

            <tr>
              <td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px; padding: 0 0 15px 0;">
                Hej <?php print $recipient; ?>,
              </td>
            </tr>

            <tr>
             <td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px; padding: 0 0 15px 0;">
              <p>
                Med anledning av att Ni erhållit insynsinformation avseende <?php print $company; ?> vill vi göra Dig uppmärksam på följande:
              </p>
              <p>
                Insynsinformationen innebär att Ni blivit införd i loggbok av Sedermera Fondkommission. Informationen får inte nyttjas för egen eller någon annans räkning. Vidare får informationen inte vidarebefordras och inte heller på annat sätt göras tillgänglig för andra. Informationen ska behandlas med strikt sekretess. Brott mot detta kan innebära straffpåföljd.
              </p>
              <p>
                Så snart erhållen information är allmänt känd kommer Ni att bli avförd från loggboken och informerad om detta.
              </p>
              <p>
                Om ni har några frågor vänligen kontakta din kontaktperson på Sedermera Fondkommission.
              </p>
             </td>
            </tr>

            <?php if ($contact_details): ?>
              <tr>
                <td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px;">
                  <?php print $contact_details; ?>
                </td>
              </tr>
            <?php endif; ?>

          </table>

        </td>
      </tr>

      <tr>
        <td style="border-top: 2px solid #eee; padding-bottom: 20px; padding-top: 5px;">
        </td>
      </tr>

    </table>

   </td>
  </tr>
</table>
