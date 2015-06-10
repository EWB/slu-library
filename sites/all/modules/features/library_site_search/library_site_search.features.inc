<?php
/**
 * @file
 * library_site_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_site_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
