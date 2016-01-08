<?php
/**
 * @file
 * library_frontpage_subject_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_frontpage_subject_blocks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
