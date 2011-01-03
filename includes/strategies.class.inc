<?php 
// $Id$

// Copyright (c) 2010 KontextWork
// Author: Eugen Mayer

class Drush_make_release_generic{
  protected $release = NULL;
  protected $options = FALSE;
  public function __construct($release, $options) {
    $this->release = $release;
    if(!$this->validate($release)) {
      throw new Exception("Your release is not a valid drush make entry. There are some fields missing");
    }
    $this->options = $options;
    $this->validate($release);
  }
  
  public function __toString() {
    $options = array();
    $this->set_type($options);
    $this->set_directories($options);
    // we dont set a location, if we set a download directly
    if(array_key_exists('set_version', $this->options) && $this->options['set_version'] === TRUE) {
       $this->set_version($options);
    }
    
    if(array_key_exists('set_download', $this->options) && $this->options['set_download'] === TRUE) {
      $this->set_download($options);
    }
    else {
      $this->set_location($options);
    }
    $module = $this->release->module_name();
    // if we have no options, try the very short variant
    if(count($options) == 0) {      
      return "projects[]=$module";
    }
    // else
    $result = $this->array_to_string($options,"projects[$module]");
    return $result;
  }
  
  protected function array_to_string($array, $prefix = '') {
    $result = '';
    foreach($array as $key => $value) {
      $result .= "{$prefix}[$key]";
      if(is_array($value)) {
        $result .= $this->array_to_string($value, '');
      } 
      else {
        $result .= "=$value";  
      }
      $result .= "\n";
    }
    return $result;
  }
  
  protected function set_download(&$options){
    $feeds = _update_feed_api_get_feeds(array($this->release->server_key()));
    $options['download']['type'] = 'get';
    $options['download']['url'] = $this->release->get_info('download_link');
  }
  
  protected function set_location(&$options) {
    $feeds = _update_feed_api_get_feeds(array($this->release->server_key()));
    $options['location'] = $feeds[0]['host'];
  }
  
  protected function set_type(&$options) {
    $options['type'] = $this->release->type();
  }
  
  protected function set_version(&$options) {
   $major = $minor = $extra = NULL;
   try {
     $major = $this->release->get_info('version_major');  
     $patch = $this->release->get_info('version_patch');
     $extra = $this->release->get_info('version_extra');
   }
   catch(Exception $e) {     
   }
   
   $options['version'] = $major;
   
   if($patch != '') {
     $options['version'] .= ".$patch";
   }
   else {
     $options['version'] .= ".x";
   }
   
   if(!empty($extra)) {
     $options['version'] .= "-$extra";
   }
  }
  
  protected function set_directories(&$options){
  /* 
    - `directory_name`
  		Provide an alternative directory name for this project. By default, the
  		project name is used.
  		 
    - `subdir`

  		Place a project within a subdirectory of the `--contrib-destination`
  		specified. In the example below, `cck` will be placed in
  		`sites/all/modules/contrib` instead of the default `sites/all/modules`.*/
    
    if(array_key_exists('subdir', $this->options)) {
      $options['subdir'] = $this->options['subdir'];
    }
    if(array_key_exists('directory_name', $this->options)) {
      $options['directory_name'] = $this->options['directory_name'];
    }
  }
  
  protected function validate($release) {
    // do we need to validate anything here?
    return TRUE;
  }
}