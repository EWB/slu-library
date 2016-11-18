<?php
/**
 * @file
 * library_search_cluster_mobile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_search_cluster_mobile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
