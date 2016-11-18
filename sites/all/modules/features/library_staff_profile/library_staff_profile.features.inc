<?php
/**
 * @file
 * library_staff_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_staff_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function library_staff_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_staff_profile_node_info() {
  $items = array(
    'library_staff_profile' => array(
      'name' => t('Staff Profile'),
      'base' => 'node_content',
      'description' => t('Profile for library staff member'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
