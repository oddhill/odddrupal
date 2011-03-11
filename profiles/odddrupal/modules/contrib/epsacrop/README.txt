
-- SUMMARY --

EPSA Crop is a module that allows a user to choose coordinates for different presets on an image. If a user defines coordinates EPSACrop will alter the Imagecache process and will set new coordinates.

Every preset with the crop action is handled by EPSACrop. If the user don't change the coordinates, the normal imagecache process is applied.

You can try the module on this demo web site : http://www.aswissidea.com


-- REQUIRENENTS --

EPSACrop depends on these modules
 - Imagefield
 - Imagecache
 - jQuery UI (dialog)

And need to install these external libraries
 - JCrop (http://deepliquid.com/content/Jcrop.html) in epsacrop root directory (ex: sites/all/modules/epsacrop)
 - json2.js (http://www.json.org/json2.js) in epsacrop/js directory (ex: sites/all/modules/epsacrop/js)

For json2.js you can minified, but conserve the same name (json2.js)

-- INSTALLATION --

1. Extract epsacrop on your module directory (ex. sites/all/modules)
2. Download JCrop librarie and install this on epsacrop directory (ex. sites/all/modules/epsacrop) or sites/all/libraries
  2.1 You would get, for example, sites/all/modules/epsacrop/Jcrop
3. Download json2.js and copy file in epsacrop/js directory
4. Go to admin/build/modules and enable EPSA Crop

-- CONFIGURATION --

You can go at admin/settings/epsacrop to set thumbnail size (needed for large size images)

-- TROUBLESHOOTING --

-- FAQ --

-- CONTACT --

Current maintainers:
* Yvan Marques (yvmarques) - http://drupal.org/user/298685
* gbaudoin - http://drupal.org/user/377795
