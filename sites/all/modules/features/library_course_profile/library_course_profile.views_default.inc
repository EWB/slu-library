<?php
/**
 * @file
 * library_course_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_course_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course_listings_by_department';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course Listings by Department';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course Page Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Subjects */
  $handler->display->display_options['fields']['field_subjects']['id'] = 'field_subjects';
  $handler->display->display_options['fields']['field_subjects']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['fields']['field_subjects']['field'] = 'field_subjects';
  $handler->display->display_options['fields']['field_subjects']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subjects']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Subjects (field_subjects) */
  $handler->display->display_options['arguments']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['arguments']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['arguments']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['arguments']['field_subjects_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_subjects_tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'base_course_profile' => 'base_course_profile',
  );

  /* Display: Courses Block */
  $handler = $view->new_display('block', 'Courses Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['course_listings_by_department'] = $view;

  $view = new view();
  $view->name = 'courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course Readings and Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_course_code' => 'field_course_code',
    'title' => 'title',
    'field_course_instructor' => 'field_course_instructor',
  );
  $handler->display->display_options['style_options']['default'] = 'field_course_code';
  $handler->display->display_options['style_options']['info'] = array(
    'field_course_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_instructor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'title',
    'hide' => array(
      'field_course_code' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'title' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_course_instructor' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
    ),
  );
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Course Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Instructor */
  $handler->display->display_options['fields']['field_course_instructor']['id'] = 'field_course_instructor';
  $handler->display->display_options['fields']['field_course_instructor']['table'] = 'field_data_field_course_instructor';
  $handler->display->display_options['fields']['field_course_instructor']['field'] = 'field_course_instructor';
  $handler->display->display_options['fields']['field_course_instructor']['label'] = 'Instructor(s)';
  $handler->display->display_options['fields']['field_course_instructor']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_course_instructor']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  $handler->display->display_options['fields']['field_course_instructor']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'base_course_profile' => 'base_course_profile',
  );
  /* Filter criterion: Content: Subjects (field_subjects) */
  $handler->display->display_options['filters']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['filters']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['operator_id'] = 'field_subjects_tid_op';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['operator'] = 'field_subjects_tid_op';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['identifier'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_subjects_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_subjects_tid']['vocabulary'] = 'library_subjects';
  /* Filter criterion: Content: Instructor */
  $handler->display->display_options['filters']['field_course_instructor']['id'] = 'field_course_instructor';
  $handler->display->display_options['filters']['field_course_instructor']['table'] = 'field_data_field_course_instructor';
  $handler->display->display_options['filters']['field_course_instructor']['field'] = 'field_course_instructor';
  $handler->display->display_options['filters']['field_course_instructor']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_instructor']['expose']['operator_id'] = 'field_course_instructor_op';
  $handler->display->display_options['filters']['field_course_instructor']['expose']['label'] = 'Instructor';
  $handler->display->display_options['filters']['field_course_instructor']['expose']['operator'] = 'field_course_instructor_op';
  $handler->display->display_options['filters']['field_course_instructor']['expose']['identifier'] = 'field_course_instructor';
  $handler->display->display_options['filters']['field_course_instructor']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Course Readings and Resources */
  $handler = $view->new_display('page', 'Course Readings and Resources', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'courses';

  /* Display: Courses Block */
  $handler = $view->new_display('block', 'Courses Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Course Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Instructor */
  $handler->display->display_options['fields']['field_course_instructor']['id'] = 'field_course_instructor';
  $handler->display->display_options['fields']['field_course_instructor']['table'] = 'field_data_field_course_instructor';
  $handler->display->display_options['fields']['field_course_instructor']['field'] = 'field_course_instructor';
  $handler->display->display_options['fields']['field_course_instructor']['label'] = 'Instructor(s)';
  $handler->display->display_options['fields']['field_course_instructor']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_course_instructor']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  $handler->display->display_options['fields']['field_course_instructor']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Course Code (field_course_code:format) */
  $handler->display->display_options['sorts']['field_course_code_format']['id'] = 'field_course_code_format';
  $handler->display->display_options['sorts']['field_course_code_format']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['sorts']['field_course_code_format']['field'] = 'field_course_code_format';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'base_course_profile' => 'base_course_profile',
  );
  /* Filter criterion: Content: Subjects (field_subjects) */
  $handler->display->display_options['filters']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['filters']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['operator_id'] = 'field_subjects_tid_op';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['operator'] = 'field_subjects_tid_op';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['identifier'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_subjects_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_subjects_tid']['vocabulary'] = 'library_subjects';
  /* Filter criterion: Content: Instructor */
  $handler->display->display_options['filters']['field_course_instructor']['id'] = 'field_course_instructor';
  $handler->display->display_options['filters']['field_course_instructor']['table'] = 'field_data_field_course_instructor';
  $handler->display->display_options['filters']['field_course_instructor']['field'] = 'field_course_instructor';
  $handler->display->display_options['filters']['field_course_instructor']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_instructor']['expose']['operator_id'] = 'field_course_instructor_op';
  $handler->display->display_options['filters']['field_course_instructor']['expose']['label'] = 'Instructor';
  $handler->display->display_options['filters']['field_course_instructor']['expose']['operator'] = 'field_course_instructor_op';
  $handler->display->display_options['filters']['field_course_instructor']['expose']['identifier'] = 'field_course_instructor';
  $handler->display->display_options['filters']['field_course_instructor']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Semester (field_course_semester) */
  $handler->display->display_options['filters']['field_course_semester_tid']['id'] = 'field_course_semester_tid';
  $handler->display->display_options['filters']['field_course_semester_tid']['table'] = 'field_data_field_course_semester';
  $handler->display->display_options['filters']['field_course_semester_tid']['field'] = 'field_course_semester_tid';
  $handler->display->display_options['filters']['field_course_semester_tid']['value'] = array(
    41 => '41',
  );
  $handler->display->display_options['filters']['field_course_semester_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_semester_tid']['expose']['operator_id'] = 'field_course_semester_tid_op';
  $handler->display->display_options['filters']['field_course_semester_tid']['expose']['label'] = 'Semester';
  $handler->display->display_options['filters']['field_course_semester_tid']['expose']['operator'] = 'field_course_semester_tid_op';
  $handler->display->display_options['filters']['field_course_semester_tid']['expose']['identifier'] = 'field_course_semester_tid';
  $handler->display->display_options['filters']['field_course_semester_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_course_semester_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_semester_tid']['vocabulary'] = 'semester';
  $export['courses'] = $view;

  return $export;
}
