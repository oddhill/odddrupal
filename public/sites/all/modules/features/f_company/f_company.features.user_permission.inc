<?php
/**
 * @file
 * f_company.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_company_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create company content'.
  $permissions['create company content'] = array(
    'name' => 'create company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create conflict content'.
  $permissions['create conflict content'] = array(
    'name' => 'create conflict content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create credit_risk content'.
  $permissions['create credit_risk content'] = array(
    'name' => 'create credit_risk content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create customer_approval content'.
  $permissions['create customer_approval content'] = array(
    'name' => 'create customer_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create customer_history content'.
  $permissions['create customer_history content'] = array(
    'name' => 'create customer_history content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create final_approval content'.
  $permissions['create final_approval content'] = array(
    'name' => 'create final_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create money_launder content'.
  $permissions['create money_launder content'] = array(
    'name' => 'create money_launder content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create proposal content'.
  $permissions['create proposal content'] = array(
    'name' => 'create proposal content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create suitability_assessment content'.
  $permissions['create suitability_assessment content'] = array(
    'name' => 'create suitability_assessment content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any company content'.
  $permissions['delete any company content'] = array(
    'name' => 'delete any company content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any company content'.
  $permissions['edit any company content'] = array(
    'name' => 'edit any company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any conflict content'.
  $permissions['edit any conflict content'] = array(
    'name' => 'edit any conflict content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any credit_risk content'.
  $permissions['edit any credit_risk content'] = array(
    'name' => 'edit any credit_risk content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any customer_approval content'.
  $permissions['edit any customer_approval content'] = array(
    'name' => 'edit any customer_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any customer_history content'.
  $permissions['edit any customer_history content'] = array(
    'name' => 'edit any customer_history content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any final_approval content'.
  $permissions['edit any final_approval content'] = array(
    'name' => 'edit any final_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any money_launder content'.
  $permissions['edit any money_launder content'] = array(
    'name' => 'edit any money_launder content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any proposal content'.
  $permissions['edit any proposal content'] = array(
    'name' => 'edit any proposal content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any suitability_assessment content'.
  $permissions['edit any suitability_assessment content'] = array(
    'name' => 'edit any suitability_assessment content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own company content'.
  $permissions['edit own company content'] = array(
    'name' => 'edit own company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own conflict content'.
  $permissions['edit own conflict content'] = array(
    'name' => 'edit own conflict content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own credit_risk content'.
  $permissions['edit own credit_risk content'] = array(
    'name' => 'edit own credit_risk content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own customer_approval content'.
  $permissions['edit own customer_approval content'] = array(
    'name' => 'edit own customer_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own customer_history content'.
  $permissions['edit own customer_history content'] = array(
    'name' => 'edit own customer_history content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own final_approval content'.
  $permissions['edit own final_approval content'] = array(
    'name' => 'edit own final_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own money_launder content'.
  $permissions['edit own money_launder content'] = array(
    'name' => 'edit own money_launder content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own proposal content'.
  $permissions['edit own proposal content'] = array(
    'name' => 'edit own proposal content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own suitability_assessment content'.
  $permissions['edit own suitability_assessment content'] = array(
    'name' => 'edit own suitability_assessment content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any company content'.
  $permissions['view any company content'] = array(
    'name' => 'view any company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any conflict content'.
  $permissions['view any conflict content'] = array(
    'name' => 'view any conflict content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any credit_risk content'.
  $permissions['view any credit_risk content'] = array(
    'name' => 'view any credit_risk content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any customer_approval content'.
  $permissions['view any customer_approval content'] = array(
    'name' => 'view any customer_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any customer_history content'.
  $permissions['view any customer_history content'] = array(
    'name' => 'view any customer_history content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any final_approval content'.
  $permissions['view any final_approval content'] = array(
    'name' => 'view any final_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any money_launder content'.
  $permissions['view any money_launder content'] = array(
    'name' => 'view any money_launder content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any proposal content'.
  $permissions['view any proposal content'] = array(
    'name' => 'view any proposal content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any suitability_assessment content'.
  $permissions['view any suitability_assessment content'] = array(
    'name' => 'view any suitability_assessment content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view any unpublished conflict content'.
  $permissions['view any unpublished conflict content'] = array(
    'name' => 'view any unpublished conflict content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished credit_risk content'.
  $permissions['view any unpublished credit_risk content'] = array(
    'name' => 'view any unpublished credit_risk content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished customer_history content'.
  $permissions['view any unpublished customer_history content'] = array(
    'name' => 'view any unpublished customer_history content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished final_approval content'.
  $permissions['view any unpublished final_approval content'] = array(
    'name' => 'view any unpublished final_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished money_launder content'.
  $permissions['view any unpublished money_launder content'] = array(
    'name' => 'view any unpublished money_launder content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished proposal content'.
  $permissions['view any unpublished proposal content'] = array(
    'name' => 'view any unpublished proposal content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished suitability_assessment content'.
  $permissions['view any unpublished suitability_assessment content'] = array(
    'name' => 'view any unpublished suitability_assessment content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view own company content'.
  $permissions['view own company content'] = array(
    'name' => 'view own company content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own conflict content'.
  $permissions['view own conflict content'] = array(
    'name' => 'view own conflict content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own credit_risk content'.
  $permissions['view own credit_risk content'] = array(
    'name' => 'view own credit_risk content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own customer_approval content'.
  $permissions['view own customer_approval content'] = array(
    'name' => 'view own customer_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own customer_history content'.
  $permissions['view own customer_history content'] = array(
    'name' => 'view own customer_history content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own final_approval content'.
  $permissions['view own final_approval content'] = array(
    'name' => 'view own final_approval content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own money_launder content'.
  $permissions['view own money_launder content'] = array(
    'name' => 'view own money_launder content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own proposal content'.
  $permissions['view own proposal content'] = array(
    'name' => 'view own proposal content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Granskare' => 'Granskare',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own suitability_assessment content'.
  $permissions['view own suitability_assessment content'] = array(
    'name' => 'view own suitability_assessment content',
    'roles' => array(
      'Administratör' => 'Administratör',
      'Redaktör' => 'Redaktör',
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
