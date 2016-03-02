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
                Om Ni har några frågor vänligen kontakta din kontaktperson på Sedermera Fondkommission.
              </td>
            </tr>

            <tr><td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px;">Med vänlig  hälsning</td></tr>
            <tr><td height="10"></td></tr>
            <tr><td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px;"><b>Sedermera Fondkommission</b></td></tr>
            <tr><td style="color: #aaaaaa; font-family: Arial, sans-serif; font-size: 13px;"><b>Besöksadress:</b> Importgatan 4, 262 73 Ängelholm, Sverige</td></tr>
            <tr><td style="color: #aaaaaa; font-family: Arial, sans-serif; font-size: 13px;"><b>Postadress:</b> Importgatan 4, 262 73 Ängelholm, Sverige</td></tr>
            <tr><td style="color: #aaaaaa; font-family: Arial, sans-serif; font-size: 13px;"><b>Växel:</b> +46431-47 17 00</td></tr>
            <tr><td style="color: #aaaaaa; font-family: Arial, sans-serif; font-size: 13px;"><b>Fax:</b> +46431-47 17 21</td></tr>
            <tr><td style="color: #aaaaaa; font-family: Arial, sans-serif; font-size: 13px;">backoffice@sedermera.se</td></tr>
            <tr><td style="color: #aaaaaa; font-family: Arial, sans-serif; font-size: 13px;">www.sedermera.se</td></tr>
            <tr><td height="10"></td></tr>
            <tr><td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px;"><b>Följ oss på sociala medier:</b></td></tr>
            <tr><td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px;">www.facebook.com/sedermera</td></tr>
            <tr><td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px;">www.twitter.com/sedermerafk</td></tr>
            <tr><td height="10"></td></tr>
            <tr><td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px;">==============================================================================</td></tr>
            <tr><td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 11px;">"PLEASE NOTE: The information contained in this message is privileged and confidential, and is intended only for the use of the individual named above and others whohave been specifically authorized to receive it. If you are not the intended recipient, you are hereby notified that any dissemination, distribution or copying of thiscommunication is strictly prohibited. If you have received this communication in error, please contact the above sender. Thank you."</td></tr>
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
