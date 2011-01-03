<?php 
// $Id$

// Copyright (c) 2010 KontextWork
// Author: Eugen Mayer
function drush_make_ui_makefile($element) {
  $result = '';
  foreach(element_children($element) as $key) {
    $short_name = $element[$key]['#item']['short_name'];
    $api_version = $element[$key]['#item']['api_version'];
    $server_key = $element[$key]['#item']['server_key'];
    $version = $element[$key]['#item']['module_release'];
    if($short_name == '' || $server_key == '') {
      //drupal_set_message("Could not parse faulty entry for the makefile: $short_name, $server_key, $api_version, $version",'error');
      continue;
    }
    // Load the project with all releases

    $project = Project_factory::load_project($server_key, $short_name, $api_version, TRUE);    
    // get our specific release
    $release = $project->get_release_by_version($version);
    // thats our helper handling the conversion from release to something the drush make files wants ( a string )
    $drush_make_release = new Drush_make_release($release, array('set_download' => FALSE, 'set_version' => TRUE));
    $result .= $drush_make_release->__toString()."\n\n";
  }
  return $result;
}

function theme_drush_make_ui_formatter_drush_make_api($element) {
  return 'api='.$element['#item']['safe']."\n";
}

function theme_drush_make_ui_formatter_core_api($element) {
  return 'core='.$element['#item']['safe']."\n";
}
