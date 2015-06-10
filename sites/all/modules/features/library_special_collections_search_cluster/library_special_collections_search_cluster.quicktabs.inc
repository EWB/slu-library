<?php
/**
 * @file
 * library_special_collections_search_cluster.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function library_special_collections_search_cluster_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'special_collections_search_clust';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Special Collections Search Cluster';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'boxes_delta_manuscript_search',
      'hide_title' => 1,
      'title' => 'Manuscript Search',
      'weight' => '-100',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Manuscript Search');
  t('Special Collections Search Cluster');

  $export['special_collections_search_clust'] = $quicktabs;

  return $export;
}
