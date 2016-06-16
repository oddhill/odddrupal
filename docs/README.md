# Sedermera

This README describes some of the basics which are relevant to developers of this project. For further documentation involving feature specification, deployment routines etc, please refer to the space in Confluence.

Feel free to modify this file or create new files within the docs folder as needed.

### Pre-production environment

This project includes an extra enviornment called pre-production. The purpose of this enviornment is to test deployments to an isolated server before the deployment is sent to production.

The Tadaa! configuration for this environment is an exact copy of the production enviornment except for two things:

- Reroute email is enabled since we don't want to send out any emails.
- Database logging is enabled since we want easy access to the logs.
