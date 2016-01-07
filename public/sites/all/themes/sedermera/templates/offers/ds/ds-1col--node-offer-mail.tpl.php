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
        <td>
          <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding: 30px 0 30px 0">
            <tr>
              <td width="65%" valign="top" style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px; line-height: 18px;">

                <?php print render($content['field_offer_text']); ?>

                <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding-top: 15px; padding-bottom: 20px; padding-right: 20px;">
                  <tr>
                    <td style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px; line-height: 18px;">
                      <?php print render($content['field_offer_additional']); ?>
                    </td>
                  </tr>
                </table>
              </td>

              <td width="30%" valign="top" style="color: #1a1a1a; font-family: Arial, sans-serif; font-size: 13px; line-height: 16px;">

                <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding-bottom: 20px; padding-left: 20px; border-left: 2px solid #eee;">
                  <?php if ($content['field_offer_type_fe_sum'] || $content['field_offer_type_fe_rate'] || $content['field_offer_type_fe_pre'] || $content['field_offer_type_fe_sign'] || $content['field_offer_type_fe_warrant'] || $content['field_offer_type_fe_bonus'] || $content['field_offer_type_fe_terms'] || $content['field_offer_type_fe_payment']): ?>
                    <tr>
                      <td style="padding-top: 15px; padding-bottom: 5px; border-bottom: 2px solid #eee;">
                        <table border="0" cellpadding="0" cellspacing="0" width="100%">
                          <tr>
                            <td>
                              <h3 style="margin-bottom: 15px; margin-top: 0; font-weight: 400; text-transform: uppercase; letter-spacing: 0.1em; font-size: 13px; line-height: 13px; color: #797979;">Företrädesemission</h3>
                            </td>
                          </tr>
                          <?php print render($content['field_offer_type_fe_sum']); ?>
                          <?php print render($content['field_offer_type_fe_rate']); ?>
                          <?php print render($content['field_offer_type_fe_time']); ?>
                          <?php print render($content['field_offer_type_fe_pre']); ?>
                          <?php print render($content['field_offer_type_fe_sign']); ?>
                          <?php print render($content['field_offer_type_fe_warrant']); ?>
                          <?php print render($content['field_offer_type_fe_bonus']); ?>
                          <?php print render($content['field_offer_type_fe_terms']); ?>
                          <?php print render($content['field_offer_type_fe_payment']); ?>
                        </table>
                      </td>
                    </tr>
                  <?php endif; ?>
                  <?php if ($content['field_offer_type_le_sum'] || $content['field_offer_type_le_rate'] || $content['field_offer_type_le_pre'] || $content['field_offer_type_le_sign'] || $content['field_offer_type_le_warrant'] || $content['field_offer_type_le_low'] || $content['field_offer_type_le_terms'] || $content['field_offer_type_le_bonus'] || $content['field_offer_type_le_market'] || $content['field_offer_type_le_count'] || $content['field_offer_type_le_payment']): ?>
                    <tr>
                      <td style="padding-top: 15px; padding-bottom: 5px; border-bottom: 2px solid #eee;">
                        <table border="0" cellpadding="0" cellspacing="0" width="100%">
                          <tr>
                            <td>
                              <h3 style="margin-bottom: 15px; margin-top: 0; font-weight: 400; text-transform: uppercase; letter-spacing: 0.1em; font-size: 13px; line-height: 13px; color: #797979;">Listningsemission</h3>
                            </td>
                          </tr>
                          <?php print render($content['field_offer_type_le_sum']); ?>
                          <?php print render($content['field_offer_type_le_rate']); ?>
                          <?php print render($content['field_offer_type_le_time']); ?>
                          <?php print render($content['field_offer_type_le_pre']); ?>
                          <?php print render($content['field_offer_type_le_sign']); ?>
                          <?php print render($content['field_offer_type_le_warrant']); ?>
                          <?php print render($content['field_offer_type_le_low']); ?>
                          <?php print render($content['field_offer_type_le_terms']); ?>
                          <?php print render($content['field_offer_type_le_bonus']); ?>
                          <?php print render($content['field_offer_type_le_market']); ?>
                          <?php print render($content['field_offer_type_le_count']); ?>
                          <?php print render($content['field_offer_type_le_payment']); ?>
                        </table>
                      </td>
                    </tr>
                  <?php endif; ?>
                  <?php if ($content['field_offer_type_pp_sum'] || $content['field_offer_type_pp_pre'] || $content['field_offer_type_pp_rate'] || $content['field_offer_type_pp_sign'] || $content['field_offer_type_pp_payment']): ?>
                    <tr>
                      <td style="padding-top: 15px; padding-bottom: 5px; border-bottom: 2px solid #eee;">
                        <table border="0" cellpadding="0" cellspacing="0" width="100%">
                          <tr>
                            <td>
                              <h3 style="margin-bottom: 15px; margin-top: 0; font-weight: 400; text-transform: uppercase; letter-spacing: 0.1em; font-size: 13px; line-height: 13px; color: #797979;">Private placement</h3>
                            </td>
                          </tr>
                          <?php print render($content['field_offer_type_pp_sum']); ?>
                          <?php print render($content['field_offer_type_pp_rate']); ?>
                          <?php print render($content['field_offer_type_pp_time']); ?>
                          <?php print render($content['field_offer_type_pp_pre']); ?>
                          <?php print render($content['field_offer_type_pp_sign']); ?>
                          <?php print render($content['field_offer_type_pp_payment']); ?>
                        </table>
                      </td>
                    </tr>
                  <?php endif; ?>
                  <?php if ($content['field_offer_type_re_sum'] || $content['field_offer_type_re_pre'] || $content['field_offer_type_re_rate'] || $content['field_offer_type_re_sign'] || $content['field_offer_type_re_payment']): ?>
                    <tr>
                      <td style="padding-top: 15px; padding-bottom: 5px; border-bottom: 2px solid #eee;">
                        <table border="0" cellpadding="0" cellspacing="0" width="100%">
                          <tr>
                            <td>
                              <h3 style="margin-bottom: 15px; margin-top: 0; font-weight: 400; text-transform: uppercase; letter-spacing: 0.1em; font-size: 13px; line-height: 13px; color: #797979;">Riktad emission</h3>
                            </td>
                          </tr>
                          <?php print render($content['field_offer_type_re_sum']); ?>
                          <?php print render($content['field_offer_type_re_rate']); ?>
                          <?php print render($content['field_offer_type_re_time']); ?>
                          <?php print render($content['field_offer_type_re_pre']); ?>
                          <?php print render($content['field_offer_type_re_sign']); ?>
                          <?php print render($content['field_offer_type_re_payment']); ?>
                        </table>
                      </td>
                    </tr>
                  <?php endif; ?>
                  <?php if ($content['field_offer_type_bl_sum'] || $content['field_offer_type_bl_interest'] || $content['field_offer_type_bl_planned']): ?>
                    <tr>
                      <td style="padding-top: 15px; padding-bottom: 5px; border-bottom: 2px solid #eee;">
                        <table border="0" cellpadding="0" cellspacing="0" width="100%">
                          <tr>
                            <td>
                              <h3 style="margin-bottom: 15px; margin-top: 0; font-weight: 400; text-transform: uppercase; letter-spacing: 0.1em; font-size: 13px; line-height: 13px; color: #797979;">Brygglån</h3>
                            </td>
                          </tr>
                          <?php print render($content['field_offer_type_bl_sum']); ?>
                          <?php print render($content['field_offer_type_bl_time']); ?>
                          <?php print render($content['field_offer_type_bl_interest']); ?>
                          <?php print render($content['field_offer_type_bl_planned']); ?>
                        </table>
                      </td>
                    </tr>
                  <?php endif; ?>
                  <?php if ($content['field_offer_type_bp_sum'] || $content['field_offer_type_bp_price'] || $content['field_offer_type_bp_planned']): ?>
                    <tr>
                      <td style="padding-top: 15px; padding-bottom: 5px; border-bottom: 2px solid #eee;">
                        <table border="0" cellpadding="0" cellspacing="0" width="100%">
                          <tr>
                            <td>
                              <h3 style="margin-bottom: 15px; margin-top: 0; font-weight: 400; text-transform: uppercase; letter-spacing: 0.1em; font-size: 13px; line-height: 13px; color: #797979;">Blockpost</h3>
                            </td>
                          </tr>
                          <?php print render($content['field_offer_type_bp_sum']); ?>
                          <?php print render($content['field_offer_type_bp_time']); ?>
                          <?php print render($content['field_offer_type_bp_price']); ?>
                          <?php print render($content['field_offer_type_bp_planned']); ?>
                        </table>
                      </td>
                    </tr>
                  <?php endif; ?>
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
