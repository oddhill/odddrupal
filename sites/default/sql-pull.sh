#!/bin/sh
drush sql-sync @staging default --yes
drush ts development
drush fra --yes
drush cc all