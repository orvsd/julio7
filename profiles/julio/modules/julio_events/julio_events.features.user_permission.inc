<?php
/**
 * @file
 * julio_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function julio_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: create julio_event content
  $permissions['create julio_event content'] = array(
    'name' => 'create julio_event content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any julio_event content
  $permissions['delete any julio_event content'] = array(
    'name' => 'delete any julio_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own julio_event content
  $permissions['delete own julio_event content'] = array(
    'name' => 'delete own julio_event content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any julio_event content
  $permissions['edit any julio_event content'] = array(
    'name' => 'edit any julio_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own julio_event content
  $permissions['edit own julio_event content'] = array(
    'name' => 'edit own julio_event content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
