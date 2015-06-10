<?php
/**
 * @file
 * library_special_collections_search_cluster.box.inc
 */

/**
 * Implements hook_default_box().
 */
function library_special_collections_search_cluster_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'manuscript_search';
  $box->plugin_key = 'simple';
  $box->title = 'Search Manuscripts';
  $box->description = 'Manuscript Search';
  $box->options = array(
    'body' => array(
      'value' => '<form accept-charset="UTF-8" action="/library2/find/manuscripts" class="search-form" id="search-form" method="post"><div><div class="container-inline form-wrapper" id="edit-basic"><div class="form-item form-type-textfield form-item-keys"><label for="edit-keys">Enter terms </label> <input class="form-text" id="edit-keys" maxlength="255" name="keys" size="20" value="" type="text"></div><input class="form-submit" id="edit-submit" name="op" value="Search" type="submit"><input name="get" value="[]" type="hidden"><div class="form-item form-type-checkbox form-item-retain-filters"><input class="form-checkbox" id="edit-retain-filters" name="retain-filters" value="1" type="checkbox"> <label class="option" for="edit-retain-filters">Retain current filters </label></div></div><input name="form_id" value="apachesolr_search_custom_page_search_form" type="hidden"></div><div id="browse-manuscripts-link"><a href="manuscript-collections">browse the collections</a></div></form>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['manuscript_search'] = $box;

  return $export;
}
