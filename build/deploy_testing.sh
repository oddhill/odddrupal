# URL in order to connect to the server via SSH.
SSH_URL=root@oddserver.se

# The base path for where the docroot exists and the directory name of the
# docroot.
BASE_PATH=/mnt/persist/www/testar
DOCROOT=portal-sedermera

# Path to the files directory and settings file.
FILES_PATH=sites/all/files
SETTINGS_FILE=sites/default/settings.local.php

# Name of the user that is running the web server. Only change this if you know
# that the user is different from www-data.
WWW_USER=www-data

# File name of the build that is created. You don't need to change this if you
# don't want to.
BUILD_NAME=build.tar.gz

# Expand some variables into full paths.
CURRENT_DOCROOT=$BASE_PATH/$DOCROOT
NEW_DOCROOT=$BASE_PATH/$DOCROOT-temp-deployment
CURRENT_FILE_DIR=$CURRENT_DOCROOT/$FILES_PATH
NEW_FILE_DIR=$NEW_DOCROOT/$FILES_PATH
CURRENT_SETTINGS_FILE=$CURRENT_DOCROOT/$SETTINGS_FILE
NEW_SETTINGS_FILE=$NEW_DOCROOT/$SETTINGS_FILE

# Move configuration to the appropriate location.
echo "Bundling .htaccess"
mv config/.htaccess.testing public/.htaccess

# Remove any Drush alias files.
echo "Removing Drush aliases from sites/default"
rm public/sites/default/aliases.*

# Create a tarball and save it as an artifact.
echo "Creating tarball"
tar czf $BUILD_NAME -C public/ .
mv $BUILD_NAME $CIRCLE_ARTIFACTS

# Copy the tarball to the remote server.
echo "Uploading tarball to $BASE_PATH"
scp $CIRCLE_ARTIFACTS/$BUILD_NAME $SSH_URL:$BASE_PATH

# Log in to the server and prepare the site.
ssh $SSH_URL /bin/bash << EOF
  # Create the new docroot and extract the build to that folder.
  echo "Extracting tarball to $NEW_DOCROOT"
  mkdir $NEW_DOCROOT
  tar xzof $BASE_PATH/$BUILD_NAME -C $NEW_DOCROOT

  # Copy files and settings from the current docroot to the new one, if the
  # current directory exists, which won't be the case if this is a fresh deploy.
  if [ -d "$CURRENT_DOCROOT" ]; then
    echo "Copying files from $CURRENT_FILE_DIR to $NEW_FILE_DIR"
    cp -r $CURRENT_FILE_DIR/* $NEW_FILE_DIR/

    echo "Copying $CURRENT_SETTINGS_FILE to $NEW_SETTINGS_FILE"
    cp $CURRENT_SETTINGS_FILE $NEW_SETTINGS_FILE
  else
    echo "$CURRENT_DOCROOT doesn't exist. You will need to setup $CURRENT_SETTINGS_FILE manually."
  fi

  # Make sure that the entire directory isn't writable by anyone except the
  # owner. Directories will get 750 since these should be executable, and files
  # will get 640.
  echo "Making $NEW_DOCROOT writable for the owner only"
  find $NEW_DOCROOT -type d -print0 | xargs -0 chmod 750
  find $NEW_DOCROOT -type f -print0 | xargs -0 chmod 640

  # Make sure that the files directory is writable.
  echo "Making $NEW_FILE_DIR writable by the owner and group"
  chmod 770 $NEW_FILE_DIR
  find $NEW_FILE_DIR -type d -print0 | xargs -0 chmod 770
  find $NEW_FILE_DIR -type f -print0 | xargs -0 chmod 660

  # Change group ownership to the user that is running the web server.
  echo "Changing group ownership of $NEW_DOCROOT to $WWW_USER"
  chgrp -R $WWW_USER $NEW_DOCROOT

  # Replace the current docroot with the new one, if the current directory
  # exists.
  if [ -d "$CURRENT_FILE_DIR" ]; then
    echo "Replacing $CURRENT_DOCROOT with $NEW_DOCROOT"
    rm -r $CURRENT_DOCROOT && mv $NEW_DOCROOT $CURRENT_DOCROOT
  else
    echo "Renaming $NEW_DOCROOT to $CURRENT_DOCROOT"
    mv $NEW_DOCROOT $CURRENT_DOCROOT
  fi

  # Remove the build.
  echo "Removing tarball"
  rm $BASE_PATH/$BUILD_NAME
EOF
