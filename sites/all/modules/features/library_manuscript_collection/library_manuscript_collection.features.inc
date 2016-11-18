<?php
/**
 * @file
 * library_manuscript_collection.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_manuscript_collection_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function library_manuscript_collection_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_manuscript_collection_node_info() {
  $items = array(
    'library_manuscript_collection' => array(
      'name' => t('Manuscript Collection'),
      'base' => 'node_content',
      'description' => t('Used to describe Manuscript Collections and to connect them to catalog records, digital collections and more...'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
