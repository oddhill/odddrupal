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
              Ni har härmed blivit utloggade från Er insynsställning i <?php print $company; ?>.
             </td>
            </tr>

            <tr>
              <td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px; padding: 0 0 15px 0;">
                Om Ni har några frågor eller funderingar, vänligen kontakta mig.
              </td>
            </tr>

            <tr>
              <td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px; padding: 0 0 15px 0;">
                Med vänlig hälsning
              </td>
            </tr>

            <tr>
              <td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px;">
                <?php print $sender; ?>
              </td>
            </tr>

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
