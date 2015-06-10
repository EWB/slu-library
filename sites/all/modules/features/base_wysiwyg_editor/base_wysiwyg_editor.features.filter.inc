<?php
/**
 * @file
 * base_wysiwyg_editor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function base_wysiwyg_editor_filter_default_formats() {
  $formats = array();

  // Exported format: Richtext Editor.
  $formats['richtext_editor'] = array(
    'format' => 'richtext_editor',
    'name' => 'Richtext Editor',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <img> <p> <br> <em> <strong> <blockquote> <ul> <ol> <li> <dl> <span> <dt> <dd> <h2> <h3> <h4> <hr> <sub> <sup> <del> <b> <i> <table> <thead> <tbody> <th> <tr> <td> <caption><style>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'ckeditor_link_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'htmlpurifier_basic' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'htmlpurifier_help' => 1,
          'htmlpurifier_basic_config' => array(
            'Attr.EnableID' => '0',
            'AutoFormat.AutoParagraph' => '1',
            'AutoFormat.Linkify' => '1',
            'AutoFormat.RemoveEmpty' => '0',
            'Null_HTML.Allowed' => '1',
            'HTML.ForbiddenAttributes' => '',
            'HTML.ForbiddenElements' => '',
            'HTML.SafeObject' => '0',
            'Output.FlashCompat' => '0',
            'URI.DisableExternalResources' => '0',
            'URI.DisableResources' => '0',
            'Null_URI.Munge' => '1',
          ),
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '50',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'protocol_style' => 'full',
        ),
      ),
    ),
  );

  return $formats;
}
