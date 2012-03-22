<?php
/**
 * @file
 * humanitarianresponse_layout.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_layout_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer advanced pane settings
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer pane access
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels layouts
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'panels',
  );

  // Exported permission: change layouts in place editing
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels caching features
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'panels',
  );

  // Exported permission: view pane admin links
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'panels',
  );

  return $permissions;
}
