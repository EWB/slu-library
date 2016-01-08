<?php
/**
 * @file
 * library_base_layout.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function library_base_layout_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'library_front_page';
  $delta->name = 'Library Front Page';
  $delta->description = '';
  $delta->theme = 'slu_libraries_theme';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_slu_libraries_theme_settings' => array(
      'alpha_layouts_alpha_default_wide_media' => 'all and (min-width: 1220px)',
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_content_zone' => NULL,
      'alpha_region_content_equal_height_element' => FALSE,
      'alpha_region_preface_third_zone' => NULL,
      'alpha_region_preface_third_columns' => '5',
      'alpha_region_preface_third_equal_height_element' => FALSE,
      'alpha_region_header_third_zone' => NULL,
      'alpha_region_header_third_prefix' => '1',
      'alpha_region_header_third_equal_height_element' => FALSE,
      'alpha_zone_content_wrapper' => 0,
      'alpha_zone_content_section' => NULL,
      'alpha_zone_content_primary' => NULL,
      'alpha_zone_header_columns' => '24',
      'alpha_region_header_first_columns' => '13',
      'alpha_region_header_second_columns' => '11',
      'alpha_region_preface_first_columns' => '3',
      'alpha_region_preface_second_columns' => '3',
      'alpha_zone_content_grid_columns' => '16',
      'alpha_region_sidebar_second_zone' => 'content_grid',
      'alpha_region_sidebar_second_columns' => '4',
      'alpha_region_sidebar_second_weight' => '5',
    ),
    'color_slu_libraries_theme_files' => NULL,
    'color_slu_libraries_theme_logo' => NULL,
    'color_slu_libraries_theme_palette' => NULL,
    'color_slu_libraries_theme_stylesheets' => NULL,
    'color_slu_libraries_theme_screenshot' => NULL,
  );
  $export['library_front_page'] = $delta;

  return $export;
}
