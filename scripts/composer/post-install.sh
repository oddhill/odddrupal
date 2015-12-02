#!/bin/sh

# Prepare the settings file for installation
if [ ! -f public/sites/default/settings.php ]
  then
    cp public/sites/default/default.settings.php public/sites/default/settings.php
    chmod 777 public/sites/default/settings.php
fi

# Prepare the services file for installation
if [ ! -f public/sites/default/services.yml ]
  then
    cp public/sites/default/default.services.yml public/sites/default/services.yml
    chmod 777 public/sites/default/services.yml
fi

# Prepare the files directory for installation
if [ ! -d public/sites/default/files ]
  then
    mkdir -m777 public/sites/default/files
fi
