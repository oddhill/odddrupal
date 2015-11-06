# Drupal, by Odd Hill AB

Complete Drupal package that contains custom installation profiles that are used by [Odd Hill](http://www.oddhill.se/).

We won't keep this README updated with the detailed contents of each profile since its too much work to maintain. Instead, feel free to download and investigate for yourself, fork and modify for your needs, or simply be inspired.

## Odd Drupal

The main installation profile that contains the most basic modules that are used for every site, and various helper functionality such as default views for the content administration page.

## Odd Vault
Installation profile that extends Odd Drupal but adds a more "locked" expirence, which is suitable for sites that require a login, such as intranets.



## Updating existing sites

### From one minor version to another.

- Read the message for each commit since the last update.
- Take notes of any actions which you need to perform.
- Merge 7.x to HEAD.
- Perform any actions that are necessary.
- Run update.php.
- Recreate every feature since the storage might have changed.
- Verify that everything is working.
- Done.


### From 7.x-1.25 to 7.x-2.0

- Update to 7.x-1.25 using the steps above. Be sure to merge the 7.x-1.25 commit instead of the latest one though.
- Delete `.htaccess`.
- Merge the 7.x-2.0 commit to HEAD.
- Merge `/sites` with `/public/sites`. Make sure not to replace the entire /public/sites folder! What you want to achieve is to move every file in /sites to the corresponding location in /public/sites.
- Delete `/sites` if it's still present.
- Rename `/public/.htaccess.default` to `/public/.htaccess`.
- Verify that everything is working.
- Update to the latest version of 7.x-2.x using the steps described in the section above.
- Make sure to update any deployment or CI environments so that the contents of `/public` is deployed instead of the root folder!
