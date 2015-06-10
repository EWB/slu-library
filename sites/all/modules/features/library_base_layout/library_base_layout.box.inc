<?php
/**
 * @file
 * library_base_layout.box.inc
 */

/**
 * Implements hook_default_box().
 */
function library_base_layout_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Library Footer';
  $box->options = array(
    'body' => array(
      'value' => 'St. Lawrence University | 23 Romoda Drive, Canton, NY 13617 | ODY Library (315) 229-5451 Science Library (315) 229-5400',
      'format' => 'filtered_html',
    ),
  );
  $export['footer'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'front_resources_block';
  $box->plugin_key = 'simple';
  $box->title = 'Resources';
  $box->description = 'Front Resources Block';
  $box->options = array(
    'body' => array(
      'value' => '<div class="homerightcoldot">&nbsp;<ul class="homeres"><li><a href="about/library-hours" title="Hours &amp; Locations"><img alt="Hours &amp; Locations" src="./sites/all/themes/slu_libraries_theme/images/hours-52-52.png" title="Hours &amp; Locations" border="0" height="52" width="52"> Hours &amp; Locations</a></li><li><a href="https://www.refworks.com/Refworks/login.asp?WNCLang=false" title="RefWorks"><img alt="Find a Librarian" src="./sites/all/themes/slu_libraries_theme/images/refworks-52-52.png" title="RefWorks" border="0" height="52" width="52"> RefWorks</a></li><li><a href="off-campus" title="Off-Campus Access"><img alt="Off-Campus Access" src="./sites/all/themes/slu_libraries_theme/images/world-52-52.png" title="Off-Campus Access" border="0" height="52" width="52">Remote Access</a></li><li><a href="printing" title="Printing Services"><img alt="Printing & Scanning Services" src="./sites/all/themes/slu_libraries_theme/images/printing-52-52.png" title="Printing & Scanning" border="0" height="52" width="52"> Printing & Scanning</a></li><li><a href="help" title="Get Help"><img alt="Get Help" src="./sites/all/themes/slu_libraries_theme/images/help.png" title="Get Help" border="0" height="52" width="53"> Get Help</a></li><li><a href="http://infotech.stlawu.edu" title="Technology Support"><img alt="Technology Support" src="./sites/all/themes/slu_libraries_theme/images/tech-52-52.png" title="Technology Support" border="0" height="52" width="52"> Technology Support</a></li></ul></div><p>&nbsp;</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['front_resources_block'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_db_course_list';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'LInk to datbases and courses';
  $box->options = array(
    'body' => array(
      'value' => '<p>&nbsp;</p><p><span><a href="databases"><img src="sites/all/themes/slu_libraries_theme/images/databases-a-z.gif"></a><a href="courses"><img src="sites/all/themes/slu_libraries_theme/images/course-resources-and-reserves.gif"></a></span></p>',
      'format' => 'full_html',
    ),
  );
  $export['library_db_course_list'] = $box;

  return $export;
}
