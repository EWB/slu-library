<?php
/**
 * @file
 * library_course_profile.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function library_course_profile_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|base_course_profile|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'base_course_profile';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|base_course_profile|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|base_course_profile|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'base_course_profile';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|base_course_profile|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function library_course_profile_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|base_course_profile|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'base_course_profile';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'comments',
        1 => 'field_course_code',
        2 => 'field_course_instructor',
        3 => 'field_course_semester',
        4 => 'field_subjects',
        5 => 'field_coures_databases',
        6 => 'group_course_picklist_tab',
        7 => 'field_course_citation_guide',
        8 => 'field_course_readings',
        9 => 'group_course_readings',
        10 => 'group_course_db_tab',
        11 => 'group_course_citation_guide_tab',
        12 => 'group_course_research_guides_tab',
        13 => 'field_research_guides',
      ),
    ),
    'fields' => array(
      'comments' => 'ds_content',
      'field_course_code' => 'ds_content',
      'field_course_instructor' => 'ds_content',
      'field_course_semester' => 'ds_content',
      'field_subjects' => 'ds_content',
      'field_coures_databases' => 'ds_content',
      'group_course_picklist_tab' => 'ds_content',
      'field_course_citation_guide' => 'ds_content',
      'field_course_readings' => 'ds_content',
      'group_course_readings' => 'ds_content',
      'group_course_db_tab' => 'ds_content',
      'group_course_citation_guide_tab' => 'ds_content',
      'group_course_research_guides_tab' => 'ds_content',
      'field_research_guides' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|base_course_profile|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|base_course_profile|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'base_course_profile';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_course_code',
        2 => 'field_course_instructor',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_course_code' => 'ds_content',
      'field_course_instructor' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|base_course_profile|search_result'] = $ds_layout;

  return $export;
}
