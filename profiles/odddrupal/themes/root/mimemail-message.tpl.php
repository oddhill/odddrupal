<?php // $Id: mimemail-message.tpl.php,v 1.3 2010/09/12 16:35:48 sgabe Exp $

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[mailkey].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $mailkey: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<style type="text/css">
.ReadMsgBody { width: 100%;}
.ExternalClass {width: 100%;}
body {
  margin: 0;
  font-family: Arial, Helvetica, Sans-serif;
  font-size: 13px;
  line-height: 20px;
}
div {
  font-size: 13px;
  line-height: 20px;
}
img {
  margin: 0px;
  padding: 0px;
  border: 0px;
}
a img {
  text-decoration: none;
  border: 0px;
}
p {
  font-size: 13px;
  line-height: 20px;
  font-family: Arial, Helvetica, Sans-serif;
}
h1{
}
h2{
  font-size: 24px;
  color: #444444 !important;
  font-weight: bold;
  padding: 0;
  margin: 0;
  line-height: 33px;
  border-top: 5px solid #FFFFFF; 
}
h2 a, h2 a:link, h2 a:visited{
	color:#444444 !important;
	text-decoration:none;
	font-weight:bold;
	font-size: 24px;
	padding: 0;
  margin: 0;
}
a,a:link,a:visited{
}
a:hover,a:focus{
}
.right-align {
  text-align: right;
}
.table-border {
border: solid 1px #DDD;
-moz-border-radius:7px;
-webkit-border-radius:7px;
border-radius:7px;
}
p.odd{
  text-align: right;
}
p.odd a {
  font-size: 9px;
  text-align: right;
  color: #b9b9b9;
  text-decoration: none;
}
label {
  font-weight: bold;
  padding: 10px 0px;
}
</style>
</head>
<body bgcolor="#F4F4F4" style="font-size: 13px; margin: 0; background-color: #F4F4F4; font-family: Arial, Helvetica, Sans-serif; line-height: 20px;">
  <table cellspacing="0" border="0" cellpadding="0" width="100%" style="table-layout: fixed;">
  <tr>
  <td bgcolor="#F4F4F4">
    <table width="602" cellspacing="0" cellpadding="0" border="0" align="center">
      <tr>
        <td width="602" height="50"></td>
      </tr>
    </table>
    <table class="table-border" cellspacing="0" border="0" align="center" width="602" bgcolor="#FFFFFF" cellpadding="0" style="-webkit-border-radius: 7px; border: solid 1px #DDD; -moz-border-radius: 7px; border-radius: 7px;">
      <tr>
        <td>
          <table width="600" cellspacing="0" cellpadding="0" border="0" align="center">
            <tr>
              <td width="600" height="20"></td>
            </tr>
          </table>
          <table width="600" cellspacing="0" cellpadding="0" border="0" align="center">
            <tr>
              <td width="20"></td>
              <td width="560">
                <p style="font-size: 13px; font-family: Arial, Helvetica, Sans-serif; line-height: 20px;">
                  <h2 style="font-weight: bold; font-size: 24px; margin: 0; padding: 0; color: #444444 !important; line-height: 33px; border-top: 5px solid #FFFFFF;"><?php print $subject ?></h2>
                  <?php print $body ?>
                </p>
              </td>
              <td width="20"></td>
            </tr>
          </table>
          <table width="600" cellspacing="0" cellpadding="0" border="0" align="center">
            <tr>
              <td width="600" height="20"></td>
            </tr>
          </table>
        </td>
      </tr>
    </table>
    <table width="600" cellspacing="0" cellpadding="0" border="0" align="center">
      <tr>
        <td width="500" height="50"></td>
        <td width="100" height="50" valign="top"><p class="odd" align="right" style="font-size: 13px; font-family: Arial, Helvetica, Sans-serif; line-height: 20px; text-align: right;"><a href="http://www.oddhill.se" style="font-size: 9px; text-decoration: none; color: #b9b9b9; text-align: right;">ODD HILL</a></p></td>
      </tr>
    </table>
  </td>
  </tr>
  </table>    
</body>
</html>