<?php
/**
 * @file
 * base_wysiwyg_editor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function base_wysiwyg_editor_user_default_permissions() {
  $permissions = array();

  // Exported permission: show text format dropdown.
  $permissions['show text format dropdown'] = array(
    'name' => 'show text format dropdown',
    'roles' => array(),
    'module' => 'hide_formats',
  );

  return $permissions;
}
