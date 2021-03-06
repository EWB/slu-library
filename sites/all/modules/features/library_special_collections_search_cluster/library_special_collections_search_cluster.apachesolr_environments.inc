<?php
/**
 * @file
 * library_special_collections_search_cluster.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function library_special_collections_search_cluster_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr/library';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_access_always_add_grants' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '0:0',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'base_announcement' => '0',
      'article' => '0',
      'page' => '0',
      'library_citation_guide' => '0',
      'base_course_profile' => '0',
      'course_reading' => '0',
      'feed' => '0',
      'feed_item' => '0',
      'general_content' => '0',
      'glossary_term' => '0',
      'job_posting' => '0',
      'base_library_database' => '0',
      'library_resource_listing' => '0',
      'library_manuscript_collection' => '0',
      'library_guide_or_tutorial' => '0',
      'slideshow_slide' => '0',
      'library_staff_profile' => '0',
      'webform' => '0',
      'library_ebook_collection' => '0',
    ),
    'field_bias' => array(
      'access__all' => '0',
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '1.0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_field_announcement_archive_da' => '0',
      'ds_field_database_coverage' => '0',
      'ds_field_manuscript_period_start' => '0',
      'ds_field_manuscript_period_start_end' => '0',
      'ds_last_comment_or_change' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'fts_field_manuscript_coll_length' => '0',
      'fts_field_rate_of_pay' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_audience' => '0',
      'im_field_course_semester' => '0',
      'im_field_primary' => '0',
      'im_field_resource_type' => '0',
      'im_field_staff_profile_departmen' => '0',
      'im_field_subjects' => '0',
      'im_field_tags' => '0',
      'im_vid_1' => '0',
      'im_vid_2' => '0',
      'im_vid_3' => '0',
      'im_vid_4' => '0',
      'im_vid_5' => '0',
      'im_vid_6' => '0',
      'is_field_reading_reading_order' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'its_field_manuscript_collection_' => '0',
      'label' => '8.0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_field_coures_databases' => '0',
      'sm_field_course_citation_guide' => '0',
      'sm_field_course_readings' => '0',
      'sm_field_ebook_formats' => '0',
      'sm_field_ebook_supported_devices' => '0',
      'sm_field_research_guides' => '0',
      'sm_field_resource_databases' => '0',
      'sm_field_supervisor' => '0',
      'sm_vid_Audience' => '0',
      'sm_vid_Library_Deparments' => '0',
      'sm_vid_Resource_Types' => '0',
      'sm_vid_Semester' => '0',
      'sm_vid_Subjects' => '0',
      'sm_vid_Tags' => '0',
      'sort_field_announcement_column' => '0',
      'sort_field_job_department_office' => '0',
      'sort_field_new' => '0',
      'sort_field_position_grade_level' => '0',
      'sort_field_reading_location' => '0',
      'sort_field_staff_profile_position' => '0',
      'sort_field_status' => '0',
      'sort_field_trial' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_field_announcement_column' => '0',
      'ss_field_job_department_office' => '0',
      'ss_field_new' => '0',
      'ss_field_position_grade_level' => '0',
      'ss_field_reading_location' => '0',
      'ss_field_staff_profile_position' => '0',
      'ss_field_status' => '0',
      'ss_field_trial' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'tid' => '0',
      'timestamp' => '0',
      'tm_vid_1_names' => '0',
      'tm_vid_2_names' => '0',
      'tm_vid_3_names' => '0',
      'tm_vid_4_names' => '0',
      'tm_vid_5_names' => '0',
      'tm_vid_6_names' => '0',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0.5',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'base_announcement',
      1 => 'base_course_profile',
      2 => 'base_library_database',
      3 => 'course_reading',
      4 => 'general_content',
      5 => 'job_posting',
      6 => 'library_citation_guide',
      7 => 'library_ebook_collection',
      8 => 'library_guide_or_tutorial',
      9 => 'library_manuscript_collection',
      10 => 'library_resource_listing',
      11 => 'library_staff_profile',
      12 => 'space',
      13 => 'video',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
