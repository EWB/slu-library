<?php
/**
 * @file
 * library_base_layout.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function library_base_layout_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu.
  $menus['menu-menu'] = array(
    'menu_name' => 'menu-menu',
    'title' => 'Library Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Library Menu');

  return $menus;
}
