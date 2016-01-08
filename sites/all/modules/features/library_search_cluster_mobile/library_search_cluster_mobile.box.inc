<?php
/**
 * @file
 * library_search_cluster_mobile.box.inc
 */

/**
 * Implements hook_default_box().
 */
function library_search_cluster_mobile_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'encore_mobile';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Encore Mobile Version';
  $box->options = array(
    'body' => array(
      'value' => '<form action="http://encore.stlawu.edu/iii/encore/Home,$Search.form.sdirect" id="form" method="get" name="form"><input id="target" name="target" onfocus="if (this.value==\'\') this.value=\'\';" size="30" value="" type="text"><input value="Search" type="submit"><!--  <input type=image src="../images/search.gif" name="submit"/><br />
--><input name="formids" value="target" type="hidden"><input name="lang" value="eng" type="hidden"><input name="suite" value="def" type="hidden"><input name="reservedids" value="lang,suite" type="hidden"><br><input name="submitmode" value="" type="hidden"><input name="submitname" value="" type="hidden"></form><div id="connect-ny-search"><a href="http://www.connectny.info/">ConnectNY</a></div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['encore_mobile'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'journal_search_mobile';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Journal Search Mobile Version';
  $box->options = array(
    'body' => array(
      'value' => '<form action="http://ba4rv7xl7m.search.serialssolutions.com/" method="get"><input name="V" value="1.0" type="hidden"><input name="N" value="100" type="hidden"><input name="L" value="BA4RV7XL7M" type="hidden"><input name="S" value="T_B" type="hidden"><input name="C" onfocus="if (this.value==\'\') this.value=\'\';" size="25" value=""><input value="Search" type="submit">&nbsp;</form>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['journal_search_mobile'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'odysseus_mobile';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'ODYsseus Mobile Version';
  $box->options = array(
    'body' => array(
      'value' => '<form action="http://library.stlawu.edu/search/X" method="post"><select name="searchtype"><option value="a">Author</option><option selected="selected" value="t">Title</option><option value="d">Subject</option><option value="X">Keyword</option><option value="c">Call Number</option></select><p><input maxlength="75" name="searcharg" onfocus="if (this.value==\'\') this.value=\'\';" size="25" value="" type="text"><input name="submit" value="Search" type="submit"><br><input name="searchscope" value="3" type="hidden"></p></form><p>&nbsp;</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['odysseus_mobile'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'video_search_mobile';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Video Search Mobile Version';
  $box->options = array(
    'body' => array(
      'value' => '<form action="http://library.stlawu.edu/search/X" method="post"><select name="searchtype"><option value="a">Author</option><option selected="selected" value="t">Title</option><option value="d">Subject</option><option value="X">Keyword</option><option value="c">Call Number</option></select><p><input maxlength="75" name="searcharg" size="30" value="" type="text"><input name="submit" value="Search" type="submit"><input name="searchscope" value="1" type="hidden"></p></form>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['video_search_mobile'] = $box;

  return $export;
}
