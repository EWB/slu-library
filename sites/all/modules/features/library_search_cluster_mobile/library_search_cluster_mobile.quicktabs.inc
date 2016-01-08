<?php
/**
 * @file
 * library_search_cluster_mobile.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function library_search_cluster_mobile_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'library_search_cluster_mobile';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Library Search Cluster Mobile';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'boxes_delta_encore_mobile',
      'hide_title' => 1,
      'title' => 'Encore',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'nid' => '',
      'teaser' => 0,
      'hide_title' => 1,
      'title' => 'Hidden',
      'weight' => '-98',
      'type' => 'node',
    ),
    2 => array(
      'bid' => 'boxes_delta_journal_search_mobile',
      'hide_title' => 1,
      'title' => 'Journals',
      'weight' => '-97',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'boxes_delta_odysseus_mobile',
      'hide_title' => 1,
      'title' => 'ODYsseus',
      'weight' => '-96',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'boxes_delta_video_search_mobile',
      'hide_title' => 1,
      'title' => 'Videos',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 0,
      'collapsible' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Encore');
  t('Hidden');
  t('Journals');
  t('Library Search Cluster Mobile');
  t('ODYsseus');
  t('Videos');

  $export['library_search_cluster_mobile'] = $quicktabs;

  return $export;
}
