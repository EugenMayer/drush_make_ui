<?php
// $Id: views-bonus-export-xml.tpl.php,v 1.2 2009/06/24 17:27:53 neclimdul Exp $
/**
 * @file views-view-table.tpl.php
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $rows: An array of row items. Each row is an array of content
 *   keyed by field ID.
 * - $header: an array of headers(labels) for fields.
 * - $themed_rows: a array of rows with themed fields.
 * @ingroup views_templates
 */

?>
<?php
// globals so we can be aware then core / api is only printed once
$core_printed = $api_printed = FALSE;
foreach($view->style_plugin->rendered_fields as $row) {
  foreach ($row as $key => $field) {
    // check that core / api is always printed once, even if several make files are combined
    if($key == 'field_core_version_value' && $core_printed != FALSE) {
      continue;
    } 
    else if ($key == 'field_core_version_value') {
      $core_printed = TRUE;
    }
    if($key == 'field_drush_make_api_value' && $api_printed) {
      continue;
    }
    else if($key == 'field_drush_make_api_value') {
      $api_printed = TRUE;
    }
    echo "$field\n";
  }
}
?>
