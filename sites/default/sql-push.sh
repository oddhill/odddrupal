#!/bin/sh
drush sql-sync default @staging --yes
drush @staging ts staging
drush @staging fra --yes
drush @staging cc all