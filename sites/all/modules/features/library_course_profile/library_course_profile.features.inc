<?php
/**
 * @file
 * library_course_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_course_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function library_course_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_course_profile_node_info() {
  $items = array(
    'base_course_profile' => array(
      'name' => t('Course Profile'),
      'base' => 'node_content',
      'description' => t('Profile for a specific course.'),
      'has_title' => '1',
      'title_label' => t('Course Title'),
      'help' => t('Use this form to create a webpage that highlights course-specific scholarly resources for your students.  After you create the course profile you can add reserve readings,  citation guides, library tutorials and more.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
