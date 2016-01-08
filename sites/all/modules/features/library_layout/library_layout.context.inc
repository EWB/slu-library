<?php
/**
 * @file
 * library_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function library_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage_slu_omega';
  $context->description = 'Frontpage context for the library website';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-library_humanities_links' => array(
          'module' => 'boxes',
          'delta' => 'library_humanities_links',
          'region' => 'content_grid_first',
          'weight' => '-10',
        ),
        'boxes-library_sciences_links' => array(
          'module' => 'boxes',
          'delta' => 'library_sciences_links',
          'region' => 'content_grid_second',
          'weight' => '-10',
        ),
        'boxes-library_social_sciences_links' => array(
          'module' => 'boxes',
          'delta' => 'library_social_sciences_links',
          'region' => 'content_grid_third',
          'weight' => '-10',
        ),
        'boxes-library_general_sources_links' => array(
          'module' => 'boxes',
          'delta' => 'library_general_sources_links',
          'region' => 'content_grid_third',
          'weight' => '-9',
        ),
        'boxes-library_interdisciplinary_links' => array(
          'module' => 'boxes',
          'delta' => 'library_interdisciplinary_links',
          'region' => 'content_grid_fourth',
          'weight' => '-10',
        ),
        'views-featured-block' => array(
          'module' => 'views',
          'delta' => 'featured-block',
          'region' => 'header_second',
          'weight' => '-10',
        ),
        'boxes-front_resources_block' => array(
          'module' => 'boxes',
          'delta' => 'front_resources_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'quicktabs-library_search_cluster' => array(
          'module' => 'quicktabs',
          'delta' => 'library_search_cluster',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'quicktabs-library_search_cluster_mobile' => array(
          'module' => 'quicktabs',
          'delta' => 'library_search_cluster_mobile',
          'region' => 'header_first',
          'weight' => '-9',
        ),
        'boxes-library_db_course_list' => array(
          'module' => 'boxes',
          'delta' => 'library_db_course_list',
          'region' => 'header_first',
          'weight' => '-8',
        ),
        'views-base_announcement-block' => array(
          'module' => 'views',
          'delta' => 'base_announcement-block',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-base_announcement-block_1' => array(
          'module' => 'views',
          'delta' => 'base_announcement-block_1',
          'region' => 'postscript_first',
          'weight' => '-8',
        ),
        'views-base_announcement-block_3' => array(
          'module' => 'views',
          'delta' => 'base_announcement-block_3',
          'region' => 'postscript_first',
          'weight' => '-7',
        ),
        'views-base_announcement-block_5' => array(
          'module' => 'views',
          'delta' => 'base_announcement-block_5',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'views-base_announcement-block_6' => array(
          'module' => 'views',
          'delta' => 'base_announcement-block_6',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'views-manuscript_collections-block_1' => array(
          'module' => 'views',
          'delta' => 'manuscript_collections-block_1',
          'region' => 'postscript_fourth',
          'weight' => '-10',
        ),
        'boxes-footer' => array(
          'module' => 'boxes',
          'delta' => 'footer',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'front_page',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage context for the library website');
  $export['frontpage_slu_omega'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_slu_omega';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-logo_slu' => array(
          'module' => 'boxes',
          'delta' => 'logo_slu',
          'region' => 'branding',
          'weight' => '-69',
        ),
        'boxes-logo_slu_mobile' => array(
          'module' => 'boxes',
          'delta' => 'logo_slu_mobile',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'superfish-4' => array(
          'module' => 'superfish',
          'delta' => '4',
          'region' => 'branding-second',
          'weight' => '-68',
        ),
        'delta_blocks-site-name' => array(
          'module' => 'delta_blocks',
          'delta' => 'site-name',
          'region' => 'menu',
          'weight' => '-68',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-67',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'menu_second',
          'weight' => '-10',
        ),
        'crumbs-breadcrumb' => array(
          'module' => 'crumbs',
          'delta' => 'breadcrumb',
          'region' => 'header_second',
          'weight' => '-10',
        ),
        'boxes-footer' => array(
          'module' => 'boxes',
          'delta' => 'footer',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'sharethis-sharethis_block' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis_block',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'footer_third',
          'weight' => '-9',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'footer_fourth',
          'weight' => '-10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'footer_fifth',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'footer_sixth',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide_slu_omega'] = $context;

  return $export;
}
