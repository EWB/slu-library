<?php
/**
 * @file
 * base_announcement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_announcement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function base_announcement_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function base_announcement_image_default_styles() {
  $styles = array();

  // Exported image style: micro-slide.
  $styles['micro-slide'] = array(
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'micro-slide',
  );

  // Exported image style: micro-thumb.
  $styles['micro-thumb'] = array(
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 52,
          'height' => 38,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'micro-thumb',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function base_announcement_node_info() {
  $items = array(
    'base_announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('Use <em>Announcement</em> for time-sensitive content like news, press releases or general postings.  This content is moderated - which means that contributors can create announcements which will then be passed on to editors for review prior to publication.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
