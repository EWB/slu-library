<?php
/**
 * @file
 * library_layout.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function library_layout_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'front_page';
  $delta->name = 'Front Page';
  $delta->description = '';
  $delta->theme = 'slu_omega';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_slu_omega_settings' => array(
      'alpha_exclude' => array(
        'sites/all/modules/contrib/colorbox_node/colorbox_node.css' => 0,
        'modules/comment/comment.css' => 0,
        'sites/all/modules/contrib/date/date_api/date.css' => 0,
        'sites/all/modules/contrib/date/date_popup/themes/datepicker.1.7.css' => 0,
        'sites/all/modules/contrib/date/date_repeat_field/date_repeat_field.css' => 0,
        'modules/field/theme/field.css' => 0,
        'sites/all/modules/contrib/flexslider/assets/css/flexslider_img.css' => 0,
        'sites/all/modules/contrib/ldap/ldap_user/ldap_user.css' => 0,
        'modules/node/node.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/contrib/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_content_zone' => NULL,
      'alpha_region_content_equal_height_element' => FALSE,
      'alpha_region_user_second_zone' => NULL,
      'alpha_region_user_second_equal_height_element' => FALSE,
      'alpha_zone_content_section' => NULL,
      'alpha_zone_content_primary' => NULL,
      'alpha_region_user_first_columns' => '12',
      'alpha_zone_content_grid_columns' => '16',
      'alpha_region_content_grid_second_zone' => 'content_grid',
      'alpha_region_content_grid_second_columns' => '3',
      'alpha_region_content_grid_second_weight' => '2',
      'alpha_region_content_grid_second_equal_height_element' => 0,
      'alpha_region_content_grid_first_zone' => 'content_grid',
      'alpha_region_content_grid_first_columns' => '3',
      'alpha_region_content_grid_first_weight' => '1',
      'alpha_region_content_grid_first_equal_height_element' => 0,
      'alpha_region_content_grid_third_zone' => 'content_grid',
      'alpha_region_content_grid_third_columns' => '3',
      'alpha_region_content_grid_third_weight' => '3',
      'alpha_region_content_grid_third_equal_height_element' => 0,
      'alpha_region_content_grid_fourth_zone' => 'content_grid',
      'alpha_region_content_grid_fourth_columns' => '3',
      'alpha_region_content_grid_fourth_weight' => '4',
      'alpha_region_content_grid_fourth_equal_height_element' => 0,
      'alpha_region_sidebar_second_zone' => 'content_grid',
      'alpha_region_sidebar_second_columns' => '4',
      'alpha_region_sidebar_second_weight' => '5',
    ),
  );
  $export['front_page'] = $delta;

  return $export;
}
