[1]Mail System

   Provides an Administrative UI and Developers API for safely updating
   the [2]mail_system configuration variable.

  Administrative UI

   The administrative interface is at [3]admin/config/system/mailsystem. A
   [4]screenshot is available.

  Used by;

     * [5]HTML Mail
     * [6]Mime Mail 7.x-1.x-dev
     * [7]Postmark 7.x-1.x

  Developers API

   A module example with a [8]MailSystemInterface implementation called
   ExampleMailSystem should add the following in its example.install file:
/**
 * Implements hook_enable().
 */
function example_enable() {
  mailsystem_set(array('example' => 'ExampleMailSystem'));
}
/**
 * Implements hook_disable().
 */
function example_disable() {
  mailsystem_clear(array('example' => 'ExampleMailSystem'));
}


   The above settings allow mail sent by example to use ExampleMailSystem.
   To make ExampleMailSystem the site-wide default for sending mail:
mailsystem_set(array(mailsystem_default_id() => 'ExampleMailSystem'));


   To restore the default mail system:
mailsystem_set(array(mailsystem_default_id() => mailsystem_default_value()));


   Or simply:
mailsystem_set(mailsystem_defaults());


   If module example relies on dependency foo and its FooMailSystem class,
   then the example.install code should like like this:
/**
 * Implements hook_enable().
 */
function example_enable() {
  mailsystem_set(array('example' => 'FooMailSystem'));
}
/**
 * Implements hook_disable().
 */
function example_disable() {
  mailsystem_clear(array('example' => ''));
}


   If module example only wants to use FooMailSystem when sending emails
   with a key of examail, then the example.install code should look like
   this:
/**
 * Implements hook_enable().
 */
function example_enable() {
  mailsystem_set(array('example_examail' => 'FooMailSystem'));
}
/**
 * Implements hook_disable().
 */
function example_disable() {
  mailsystem_clear(array('example_examail' => ''));
}


    (New in 2.x branch)

   To change the site-wide defaults to use the FooMailSystem for
   formatting messages and the BarMailSystem for sending them:
mailsystem_set(
  array(
    mailsystem_default_id() => array(
      'format' => 'FooMailSystem',
      'mail' => 'BarMailSystem',
    ),
  )
);


   To change the site-wide defaults to use the FooMailSystem for sending
   messages, while continuing to use the current system for formatting
   them:
mailsystem_set(
  array(
    mailsystem_default_id() => array(
      'mail' => 'FooMailsystem',
    ),
  )
);


  References

   [9]drupal_mail_system() API documentation:
          [10]api.drupal.org/api/drupal/includes--mail.inc/function/drupal
          _mail_system/7

   [11]MailSystemInterface API documentation:
          [12]api.drupal.org/api/drupal/includes--mail.inc/interface/MailS
          ystemInterface/7

   [13]Creating HTML formatted mails in Drupal 7
          [14]drupal.org/node/900794

References

   1. http://drupal.org/project/mailsystem
   2. http://api.drupal.org/api/drupal/includes--mail.inc/function/drupal_mail_system/7
   3. file://localhost/home/bobvin/www/d7/sites/all/modules/mailsystem/README.html
   4. http://drupal.org/node/1134044
   5. http://drupal.org/project/htmlmail
   6. http://drupal.org/project/mimemail
   7. http://drupal.org/project/postmark
   8. http://api.drupal.org/api/drupal/includes--mail.inc/interface/MailSystemInterface/7
   9. http://api.drupal.org/api/drupal/includes--mail.inc/function/drupal_mail_system/7
  10. http://api.drupal.org/api/drupal/includes--mail.inc/function/drupal_mail_system/7
  11. http://api.drupal.org/api/drupal/includes--mail.inc/interface/MailSystemInterface/7
  12. http://api.drupal.org/api/drupal/includes--mail.inc/interface/MailSystemInterface/7
  13. http://drupal.org/node/900794
  14. http://drupal.org/node/900794
