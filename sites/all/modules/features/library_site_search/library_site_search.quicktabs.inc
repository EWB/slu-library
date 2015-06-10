<?php
/**
 * @file
 * library_site_search.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function library_site_search_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'site_search';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 1;
  $quicktabs->title = 'Site Search';
  $quicktabs->tabs = array(
    0 => array(
      'nid' => '',
      'teaser' => 0,
      'hide_title' => 1,
      'title' => 'Hidden',
      'weight' => '-100',
      'type' => 'node',
    ),
    1 => array(
      'bid' => 'search_delta_form',
      'hide_title' => 1,
      'title' => 'Site Search',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 0,
      'collapsible' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Hidden');
  t('Site Search');

  $export['site_search'] = $quicktabs;

  return $export;
}
