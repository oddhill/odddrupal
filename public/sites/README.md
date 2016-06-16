# Sedermera instructions

We tried to use ECK for various entities in order to not create stupid content
types for things that aren't content. This succeeded, and the results were OK.
It might not be entirely clear why certain things are content types and other
things are custom entity types though.

A full ER model is available in Lucidchart.

There are various custom messages that are created when certain events occurs.
These are handled via a custom module in combination with the Message module.
The main purpose of this is to provide an activity log with everything that's
going on.

## Nodes

### Kundbolag (company)

A Kundbolag stores the basic information about a client.

### Transaktion (capital_raising)

A Transaktion is the entire purpose if this site. It stores the information
about capital raisings, and it's connected to a Kundbolag.

## Custom entity types

### Investor (investor)

Custom entity type which contains two bundles, company and person. The investors
are the ones who are offered to invest in a Transaktion.

### Erbjudande (offer)

Custom entity type with a single bundle. Erbjudande entities acts as the
relation between an Investor and a Transaktion. It contains information about
the offer status, amounts, and so on.

### Kontrolluppgift (verification)

Custom entity type with a single bundle. A Kontrolluppgift stores the
information about a single verification component, such as the ID verification.
There are multiple Kontrolluppgift entities connected to a single investor.
These are connected from the investor entity, via multiple fields.

## Custom modules

We've created several custom modules in order for each of them to handle a small
area of customizations. This is comparable to the way we've divided the exportet
features.

### Sedermera Activities

Responsible for creating message entities when certain event occurs. Works in
combination with the Message module.

### Sedermera Capital Raising

Custom alterations related to the Transaktion bundle. Custom validations,
blocks, etc.

### Sedermera Core

Alterations that are common through the entire site. Contains implementations of
hook_update_N which will be used as deployment instructions.

### Sedermera Dashboard

Contains customizations related to the dashboard page. The most interesting part
is the block for verifications. This is impossible to accomplish using Views,
since Views can't create the query that is necessary.

### Sedermera Investor

Custom alterations related to the Investor entities.

### Sedermera Offer

Custom alterations related to the Offer entities. The biggest purpose of this
module is to handle the workflow when managing the investors that are connected
to a capital raising via the offer entity.

### Sedermera Parent Paths

Small module which will provide paths that redirect the user to a different
path. This is used for the links in the main menu. For instance, the
/investerare path will redirect to the /investerare/lista path. This makes sure
that the active trail is working properly.

### Sedermera Verification

Custom alterations related to the verification entities.

## Requirements

- PHP > 5.3
- MySQL

## Others

**Core has been hacked!** The (small) change is stored in the
drupal-path_alias_xt_alterations.patch file. This is a change that is required
in order for breadcrumbs and active trails to be determined when the
Extended Path Alias module is being used. This module is required in order to
handle the custom paths for entities, such as node/xxx/kontroll.
