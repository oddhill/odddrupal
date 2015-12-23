CONTENTS OF THIS FILE
----------------------

  * Introduction
  * Installation
  * Usage


INTRODUCTION
------------
Find out Form ID and print form variables easily!

This module adds a contextual link to every form that lets you easily find out form's ID
and get a template for hook_form_FORM_ID_alter() function. Additionally, you can quickly print out variables of any form.

INSTALLATION
------------
1. Copy devel_form_debug folder to modules directory.
2. Download Drupal contrib module called Devel from https://www.drupal.org/project/devel, copy devel folder to modules directory.
2. At admin/build/modules enable the "Devel form debug" module.
3. Assign permission "Access devel form debug contextual links" if necessary.

USAGE
------------
By hovering over any form you will see a contextual link available. By expanding the link you will see the form ID. Click
on the link and you will see a modal window with copyable form id and hook_form_FORM_ID_alter() function template. You can also
print out form variables by clicking on "Print out this form variables" button.