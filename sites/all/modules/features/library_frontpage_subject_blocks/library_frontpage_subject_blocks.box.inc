<?php
/**
 * @file
 * library_frontpage_subject_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function library_frontpage_subject_blocks_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_general_sources_links';
  $box->plugin_key = 'simple';
  $box->title = 'General Sources';
  $box->description = 'General Sources Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li><a href="./databases/alternative-press">Alternative Press</a></li><li><a href="./databases/business-sources">Business Sources</a></li><li><a href="./databases/general-sources">General Sources</a></li><li><a href="./government-information">Government Information</a></li><li><a href="./databases/news-sources">News Sources</a></li><li><a href="./databases/statistics-data">Statistics and Data</a></li></ul>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['library_general_sources_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_humanities_links';
  $box->plugin_key = 'simple';
  $box->title = 'Humanities';
  $box->description = 'Humanities Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li><a href="./resources/english">English</a></li><li><a href="./resources/film-studies">Film Studies</a></li><li><a href="./resources/fine-arts">Fine Arts</a></li><li><a href="./resources/history">History</a></li><li><a href="./resources/modern-languages-and-literatures">Modern Languages &amp; Literatures</a></li><li><a href="./resources/music">Music</a></li><li><a href="./resources/performance-and-communication-arts">Performance &amp; Communication Arts</a></li><li><a href="./resources/philosophy">Philosophy</a></li><li><a href="./resources/religious-studies">Religious Studies</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['library_humanities_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_interdisciplinary_links';
  $box->plugin_key = 'simple';
  $box->title = 'Interdisciplinary';
  $box->description = 'Interdisciplinary Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li><a href="./resources/african-studies">African Studies</a></li><li><a href="./resources/asian-studies">Asian Studies</a></li><li><a href="./resources/canadian-studies">Canadian Studies</a></li><li><a href="./resources/CLAS">CLAS</a></li><li><a href="./resources/environmental-studies">Environmental Studies</a></li><li><a href="./resources/european-studies">European Studies</a></li><li><a href="./resources/gender-studies">Gender Studies</a></li><li><a href="./resources/global-studies">Global Studies</a></li><li><a href="./resources/native-american-studies">Native American Studies</a></li><li><a href="./resources/outdoor-studies">Outdoor Studies</a></li><li><a href="./resources/sports-studies">Sports Studies</a></li><li><a href="./resources/US-cultural-and-ethnic-studies">US Cultural &amp; Ethnic Studies</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['library_interdisciplinary_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_sciences_links';
  $box->plugin_key = 'simple';
  $box->title = 'Sciences';
  $box->description = 'Sciences Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li><a href="./resources/biology">Biology</a></li><li><a href="./resources/biochemistry">Biochemistry</a></li><li><a href="./resources/chemistry">Chemistry</a></li><li><a href="./resources/computer-science">Computer Science</a></li><li><a href="./resources/conservation-biology">Conservation Biology</a></li><li><a href="./resources/geology">Geology</a></li><li><a href="./resources/mathematics">Mathematics</a></li><li><a href="./resources/physics">Physics</a></li><li><a href="./resources/psychology">Psychology</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['library_sciences_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_social_sciences_links';
  $box->plugin_key = 'simple';
  $box->title = 'Social Sciences';
  $box->description = 'Social Sciences Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li><a href="./resources/anthropology">Anthropology</a></li><li><a href="./resources/economics">Economics</a></li><li><a href="./resources/education">Education</a></li><li><a href="./resources/government">Government</a></li><li><a href="./resources/sociology">Sociology</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['library_social_sciences_links'] = $box;

  return $export;
}
