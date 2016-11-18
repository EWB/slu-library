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
  $environment->url = 'http://localhost:8983/solr/library2';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'base_announcement',
      2 => 'base_course_profile',
      3 => 'base_library_database',
      4 => 'course_reading',
      5 => 'general_content',
      6 => 'glossary_term',
      7 => 'job_posting',
      8 => 'library_citation_guide',
      9 => 'library_ebook_collection',
      10 => 'library_guide_or_tutorial',
      11 => 'library_manuscript_collection',
      12 => 'library_staff_profile',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
