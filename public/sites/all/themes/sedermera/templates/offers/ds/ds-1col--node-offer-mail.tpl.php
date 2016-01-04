<?php
/**
 * @file
 * Default theme implementation that displays a node using the DS 1 column
 * layout.
 *
 * If you'd like to create a different template file for nodes, you should
 * create a new DS layout, and place it in the templates/ds folder, just like
 * this implementation.
 *
 * Have a look at the example_layout folder in the DS folder for guidance.
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
        <td align="center" style="color: #1a1a1a; font-family: Arial, sans-serif; font-weight: bold; font-size: 26px; border-bottom: 2px solid #eee; padding-bottom: 20px; padding-top: 30px;">
          <h1 style="color: #1a1a1a; font-family: Arial, sans-serif; font-weight: bold; font-size: 26px;"><?php print $title; ?></h1>
        </td>
      </tr>

      <tr>
        <td align="center" style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 14px; border-bottom: 2px solid #eee; padding-top: 30px; padding-bottom: 30px;">
          <?php print render($content['field_offer_time']); ?>
        </td>
      </tr>

     <tr>
      <td>

        <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding: 30px 0 30px 0">
          <tr>
            <td width="65%" valign="top" style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px; line-height: 18px;">

              <?php print render($content['field_offer_text']); ?>

              <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding-bottom: 20px;">
                <tr>
                  <td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px; line-height: 18px;">
                    <?php print render($content['field_offer_additional']); ?>
                  </td>
                </tr>
              </table>

            </td>

            <td style="font-size: 0; line-height: 0;" width="20">
              &nbsp;
            </td>

            <td width="30%" valign="top" style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px; line-height: 16px;">

                <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding-bottom: 20px; padding-left: 35px; border-left: 2px solid #eee;">

                  <?php print render($content['field_offer_type_fe_sum']); ?>
                  <?php print render($content['field_offer_type_fe_rate']); ?>
                  <?php print render($content['field_offer_type_fe_pre']); ?>
                  <?php print render($content['field_offer_type_fe_sign']); ?>
                  <?php print render($content['field_offer_type_fe_warrant']); ?>
                  <?php print render($content['field_offer_type_fe_payment']); ?>
                  <?php print render($content['field_offer_type_fe_terms']); ?>

                  <?php print render($content['field_offer_type_le_sum']); ?>
                  <?php print render($content['field_offer_type_le_rate']); ?>
                  <?php print render($content['field_offer_type_le_pre']); ?>
                  <?php print render($content['field_offer_type_le_sign']); ?>
                  <?php print render($content['field_offer_type_le_warrant']); ?>
                  <?php print render($content['field_offer_type_le_payment']); ?>
                  <?php print render($content['field_offer_type_le_terms']); ?>

                  <?php print render($content['field_offer_type_pp_sum']); ?>
                  <?php print render($content['field_offer_type_pp_rate']); ?>
                  <?php print render($content['field_offer_type_pp_pre']); ?>
                  <?php print render($content['field_offer_type_pp_sign']); ?>
                  <?php print render($content['field_offer_type_pp_payment']); ?>

                  <?php print render($content['field_offer_type_re_sum']); ?>
                  <?php print render($content['field_offer_type_re_rate']); ?>
                  <?php print render($content['field_offer_type_re_pre']); ?>
                  <?php print render($content['field_offer_type_re_sign']); ?>
                  <?php print render($content['field_offer_type_re_payment']); ?>

                  <?php print render($content['field_offer_type_bl_sum']); ?>

                  <?php print render($content['field_offer_type_bp_sum']); ?>

              </table>
            </td>

          </tr>
        </table>

        </td>
      </tr>

      <?php if ($content['field_offer_files']): ?>
        <tr>
          <td style="border-top: 2px solid #eee; padding-bottom: 20px; padding-top: 20px;">
          </td>
        </tr>

        <tr>
         <td>
          <?php print render($content['field_offer_files']); ?>
          <td>
        </tr>
      <?php endif; ?>

      <?php if ($contact_details): ?>
        <tr>
          <td style="border-top: 2px solid #eee; padding-bottom: 20px; padding-top: 20px;">
          </td>
        </tr>

        <tr>
         <td>
          <?php print $contact_details; ?>
          <td>
        </tr>
      <?php endif; ?>

    </table>

   </td>
  </tr>
 </table>