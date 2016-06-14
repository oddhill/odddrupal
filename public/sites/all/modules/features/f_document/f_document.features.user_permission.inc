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

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'add terms in document_type'.
  $permissions['add terms in document_type'] = array(
    'name' => 'add terms in document_type',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in mall_typ'.
  $permissions['add terms in mall_typ'] = array(
    'name' => 'add terms in mall_typ',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in manual_typ'.
  $permissions['add terms in manual_typ'] = array(
    'name' => 'add terms in manual_typ',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create document content'.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      'Dokumentskapare' => 'Dokumentskapare',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create manual content'.
  $permissions['create manual content'] = array(
    'name' => 'create manual content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create template content'.
  $permissions['create template content'] = array(
    'name' => 'create template content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentskapare' => 'Dokumentskapare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in document_type'.
  $permissions['delete terms in document_type'] = array(
    'name' => 'delete terms in document_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in mall_typ'.
  $permissions['delete terms in mall_typ'] = array(
    'name' => 'delete terms in mall_typ',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in manual_typ'.
  $permissions['delete terms in manual_typ'] = array(
    'name' => 'delete terms in manual_typ',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'document admin'.
  $permissions['document admin'] = array(
    'name' => 'document admin',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: 'document log'.
  $permissions['document log'] = array(
    'name' => 'document log',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Granskare' => 'Granskare',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: 'document read per document'.
  $permissions['document read per document'] = array(
    'name' => 'document read per document',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Granskare' => 'Granskare',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: 'document read per user'.
  $permissions['document read per user'] = array(
    'name' => 'document read per user',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Granskare' => 'Granskare',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: 'edit any document content'.
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any manual content'.
  $permissions['edit any manual content'] = array(
    'name' => 'edit any manual content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any template content'.
  $permissions['edit any template content'] = array(
    'name' => 'edit any template content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document content'.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      'Dokumentskapare' => 'Dokumentskapare',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own manual content'.
  $permissions['edit own manual content'] = array(
    'name' => 'edit own manual content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own template content'.
  $permissions['edit own template content'] = array(
    'name' => 'edit own template content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit revisions'.
  $permissions['edit revisions'] = array(
    'name' => 'edit revisions',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'edit terms in document_type'.
  $permissions['edit terms in document_type'] = array(
    'name' => 'edit terms in document_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in mall_typ'.
  $permissions['edit terms in mall_typ'] = array(
    'name' => 'edit terms in mall_typ',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in manual_typ'.
  $permissions['edit terms in manual_typ'] = array(
    'name' => 'edit terms in manual_typ',
    'roles' => array(
      'Administratör' => 'Administratör',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'generate pdf using mpdf'.
  $permissions['generate pdf using mpdf'] = array(
    'name' => 'generate pdf using mpdf',
    'roles' => array(),
    'module' => 'pdf_using_mpdf',
  );

  // Exported permission: 'publish revisions'.
  $permissions['publish revisions'] = array(
    'name' => 'publish revisions',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'publish revisions of any document content'.
  $permissions['publish revisions of any document content'] = array(
    'name' => 'publish revisions of any document content',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'publish revisions of own document content'.
  $permissions['publish revisions of own document content'] = array(
    'name' => 'publish revisions of own document content',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'unpublish current revision'.
  $permissions['unpublish current revision'] = array(
    'name' => 'unpublish current revision',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'use text format document_html'.
  $permissions['use text format document_html'] = array(
    'name' => 'use text format document_html',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any document content'.
  $permissions['view any document content'] = array(
    'name' => 'view any document content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Användare' => 'Användare',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any manual content'.
  $permissions['view any manual content'] = array(
    'name' => 'view any manual content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Användare' => 'Användare',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any template content'.
  $permissions['view any template content'] = array(
    'name' => 'view any template content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Användare' => 'Användare',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished document content'.
  $permissions['view any unpublished document content'] = array(
    'name' => 'view any unpublished document content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished manual content'.
  $permissions['view any unpublished manual content'] = array(
    'name' => 'view any unpublished manual content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished template content'.
  $permissions['view any unpublished template content'] = array(
    'name' => 'view any unpublished template content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view own document content'.
  $permissions['view own document content'] = array(
    'name' => 'view own document content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Användare' => 'Användare',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own manual content'.
  $permissions['view own manual content'] = array(
    'name' => 'view own manual content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Användare' => 'Användare',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own template content'.
  $permissions['view own template content'] = array(
    'name' => 'view own template content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Användare' => 'Användare',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view revision status messages'.
  $permissions['view revision status messages'] = array(
    'name' => 'view revision status messages',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions of any document content'.
  $permissions['view revisions of any document content'] = array(
    'name' => 'view revisions of any document content',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions of own document content'.
  $permissions['view revisions of own document content'] = array(
    'name' => 'view revisions of own document content',
    'roles' => array(
      'Dokumentmoderator' => 'Dokumentmoderator',
      'Dokumentskapare' => 'Dokumentskapare',
    ),
    'module' => 'revisioning',
  );

  return $permissions;
}
