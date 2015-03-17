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
 */
?>

<!-- Table E-mail Wrapper -->
<table cellspacing="0" cellpadding="0" border="0" width="100%" style="font-family: Arial, Helvetica, Sans-serif; font-size: 14px; line-height: 18px;">
  <tr>
    <td>

      <!-- Table Wrapper width 600 -->
      <table width="600" cellspacing="0" cellpadding="0" border="0">
        <tr>
          <td>

            <!-- Image Table-->
            <table width="100%" cellpadding="40">
              <tr>
                <td cellspacing="0" border="0" align="center"><?php print render($content['field_cap_rais_comp']); ?></td>
              </tr>
            </table>

          </td>
        </tr>

        <tr>
          <td>

            <!-- Table Title & Line -->
            <table width="100%" align="center" cellpadding="0" cellspacing="0" border="0">
              <!-- Title -->
              <tr>
                <td align="center" style="padding: 0 0 0 5px;"><h2><?php print render($content['title']); ?></h2></td>
              </tr>
              <!-- Line -->
              <tr>
                <td width="600"><hr style="margin: 0; padding: 0; border-color: #f3f4f8; border-width: 2px; border-style: solid;"></td>
              </tr>
            </table>
            <!-- End Table Title & Line -->

          </td>
        </tr>

        <tr>
          <td>

            <!-- Table Body -->
            <table width="100%" cellpadding="0" cellspacing="0" border="0">
              <tr>
                <td style="padding: 20px 20px 10px 20px;"><?php print render($content['body']); ?></td>
              </tr>
            </table>
            <!-- End Table Body -->

          </td>
        </tr>

        <tr>
          <td>

            <!-- Table Additional Text -->
            <table width="100%" cellpadding="0" cellspacing="0" border="0">
              <tr>
                <td style="padding: 0 20px 20px 20px;"><?php print render($content['field_cap_rais_text_def']); ?></td>
              </tr>
            </table>
             <!-- End Table Additional Text -->

          </td>
        </tr>

        <tr>
          <td>

            <!-- Table Fields -->
            <table class="html-mail-fields" width="100%" cellpadding="0" cellspacing="0" border="0" style="padding: 0 20px 0 20px;">

              <tr>
                <td><?php print render($content['field_cap_rais_date']); ?></td>
              </tr>

              <tr>
                <td><?php print render($content['field_cap_rais_post']); ?></td>
              </tr>

              <tr>
                <td><?php print render($content['field_cap_rais_post_units']); ?></td>
              </tr>

              <tr>
                <td><?php print render($content['field_cap_rais_rate']); ?></td>
              </tr>

              <tr>
                <td><?php print render($content['field_cap_rais_vol']); ?></td>
              </tr>

              <tr>
                <td><?php print render($content['field_cap_rais_vol_units']); ?></td>
              </tr>

              <tr>
                <td><?php print render($content['field_cap_rais_stock_no']); ?></td>
              </tr>

              <tr>
                <td><?php print render($content['field_cap_rais_units_no']); ?></td>
              </tr>

              <tr>
                <td><?php print render($content['field_cap_rais_estim']); ?></td>
              </tr>

              <tr>
                <td><?php print render($content['field_cap_rais_file']); ?></td>
              </tr>

            </table>
            <!-- End Table Fields -->

          </td>
        </tr>
      </table>
      <!-- End Table Wrapper width 600 -->

    </td>
  </tr>
</table>
<!-- End E-mail Table Wrapper -->
