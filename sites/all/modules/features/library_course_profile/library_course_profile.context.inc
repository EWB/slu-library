<?php
/**
 * @file
 * library_course_profile.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function library_course_profile_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'course_listing';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'courses' => 'courses',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-courses-block_1' => array(
          'module' => 'views',
          'delta' => 'courses-block_1',
          'region' => 'content',
          'weight' => '2',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'two_column',
    ),
  );
  $context->condition_mode = 1;
  $export['course_listing'] = $context;

  return $export;
}
