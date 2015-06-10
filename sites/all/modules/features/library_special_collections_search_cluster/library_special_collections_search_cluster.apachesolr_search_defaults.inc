<?php
/**
 * @file
 * library_special_collections_search_cluster.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function library_special_collections_search_cluster_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'manuscript_collections';
  $searcher->label = 'Manuscript Collections';
  $searcher->description = 'Search for manuscript collections';
  $searcher->search_path = 'find/manuscripts';
  $searcher->page_title = 'Manuscripts';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:library_manuscript_collection',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_per_page' => '10',
    'apachesolr_search_browse' => 'blocks',
    'apachesolr_search_spellcheck' => 0,
    'apachesolr_search_allow_user_input' => 0,
  );
  $export['manuscript_collections'] = $searcher;

  return $export;
}
