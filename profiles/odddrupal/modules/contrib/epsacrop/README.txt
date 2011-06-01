
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
JCrop (http://deepliquid.com/content/Jcrop.html)
   If the Libraries module is installed, you may install the files into your libraries folder (ex.: sites/all/libraries). Otherwise, place them into the epsacrop module folder (ex.: sites/all/modules/epsacrop).

json2 (https://github.com/douglascrockford/JSON-js)
  Rename the downloaded folder into json2 and place it into either libraries (only if the module Libraries is enabled) folder (ex.: sites/all/libraries), or the epsacrop folder (ex.: sites/all/modules/epsacrop/json2). 
  You may use the minified version, but be sure to conserve the file name (json2.js).

-- INSTALLATION --

1. Extract epsacrop on your module directory (ex. sites/all/modules)
2. Download the JCrop library and install it into either the libraries folder (ex.: sites/all/libraries), or the epsacrop module folder (ex.: sites/all/modules/epsacrop)
  2.1 You would get, for example, sites/all/libraries/Jcrop or sites/all/modules/epsacrop/Jcrop
3. Download the json2 library and install it into either the libraries folder (ex.: sites/all/libraries), or the epsacrop module folder (ex.: sites/all/modules/epsacrop)
  3.1 You would get, for example, sites/all/libraries/json2 or sites/all/modules/epsacrop/json2
4. Go to admin/build/modules and enable EPSA Crop

-- CONFIGURATION --

You can go at admin/settings/epsacrop to set thumbnail size (needed for large size images)

-- TROUBLESHOOTING --

-- FAQ --

-- CONTACT --

Current maintainers:
* Yvan Marques (yvmarques) - http://drupal.org/user/298685
* gbaudoin - http://drupal.org/user/377795