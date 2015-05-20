<?php
/**
 * @file
 * f_document.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_document_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create document content'.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      'Dokument skapare' => 'Dokument skapare',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in document_type'.
  $permissions['delete terms in document_type'] = array(
    'name' => 'delete terms in document_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any document content'.
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document content'.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      'Dokument skapare' => 'Dokument skapare',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit revisions'.
  $permissions['edit revisions'] = array(
    'name' => 'edit revisions',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
      'Dokument skapare' => 'Dokument skapare',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'edit terms in document_type'.
  $permissions['edit terms in document_type'] = array(
    'name' => 'edit terms in document_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'generate pdf using mpdf'.
  $permissions['generate pdf using mpdf'] = array(
    'name' => 'generate pdf using mpdf',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'pdf_using_mpdf',
  );

  // Exported permission: 'publish revisions'.
  $permissions['publish revisions'] = array(
    'name' => 'publish revisions',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'publish revisions of any document content'.
  $permissions['publish revisions of any document content'] = array(
    'name' => 'publish revisions of any document content',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'publish revisions of own document content'.
  $permissions['publish revisions of own document content'] = array(
    'name' => 'publish revisions of own document content',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'unpublish current revision'.
  $permissions['unpublish current revision'] = array(
    'name' => 'unpublish current revision',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view any document content'.
  $permissions['view any document content'] = array(
    'name' => 'view any document content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokument moderator' => 'Dokument moderator',
      'Dokument skapare' => 'Dokument skapare',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
      'Dokument skapare' => 'Dokument skapare',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished document content'.
  $permissions['view any unpublished document content'] = array(
    'name' => 'view any unpublished document content',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
      'Dokument skapare' => 'Dokument skapare',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view own document content'.
  $permissions['view own document content'] = array(
    'name' => 'view own document content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokument moderator' => 'Dokument moderator',
      'Dokument skapare' => 'Dokument skapare',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
      'Dokument skapare' => 'Dokument skapare',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revision status messages'.
  $permissions['view revision status messages'] = array(
    'name' => 'view revision status messages',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions of any document content'.
  $permissions['view revisions of any document content'] = array(
    'name' => 'view revisions of any document content',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions of own document content'.
  $permissions['view revisions of own document content'] = array(
    'name' => 'view revisions of own document content',
    'roles' => array(
      'Dokument moderator' => 'Dokument moderator',
    ),
    'module' => 'revisioning',
  );

  return $permissions;
}