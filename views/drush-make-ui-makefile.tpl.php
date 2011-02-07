<?php
// $Id$

// Copyright (c) 2010 KontextWork
// Author: Eugen Mayer
// globals so we can be aware then core / api is only printed once
$core_printed = $api_printed = FALSE;
$packages = array();
foreach($view->style_plugin->rendered_fields as $row) {
  foreach ($row as $key => $field) {
    // check that core / api is always printed once, even if several make files are combined
    if( ($key == 'field_core_version_value' && $core_printed != FALSE) 
        || ($key == 'field_drush_make_api_value' && $api_printed) ) {
      continue;
    } 
    else if ($key == 'field_core_version_value') {
      $core_printed = TRUE;
    }
    else if($key == 'field_drush_make_api_value') {
      $api_printed = TRUE;
    }
    echo "$field\n";
  }
  echo "\n";
}
?>
