<?php
/**
 * @file
 * library_layout.box.inc
 */

/**
 * Implements hook_default_box().
 */
function library_layout_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'logo_slu';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'SLU Logo';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="http://www.stlawu.edu"><img alt="St. Lawrence University" src="./sites/default/files/logo.png" align="left" height="100" width="280"></a></p>',
      'format' => 'richtext_editor',
    ),
    'additional_classes' => '',
  );
  $export['logo_slu'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'logo_slu_mobile';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'SLU Logo Mobile';
  $box->options = array(
    'body' => array(
      'value' => '<p><img alt="St. Lawrence University" src="http://dev.stlawu.edu/library-alpha/sites/default/files/logo-mobile.png" align="left" height="71" width="199"></p>',
      'format' => 'richtext_editor',
    ),
    'additional_classes' => '',
  );
  $export['logo_slu_mobile'] = $box;

  return $export;
}
