<?php
// $Id$

// Copyright (c) 2010 KontextWork
// Author: Eugen Mayer
class Drush_make_release{
  protected $release = NULL;
  protected $strategy = NULL;
  protected $options = FALSE;
  
  public function __construct($release, $options = array()) {
    $this->release = $release;
    $this->options = $options;
    $this->choose_strategy();
  }
  
  public function __toString() {
    if(!is_object($this->strategy)) {
      throw new Exception('No strategy set. Did you implement it or is the current release type know? ('.$this->release->type().')');
    }
    return $this->strategy->__toString();
  }
  
  protected function choose_strategy() {
    $type = $this->release->type();
    $class = "Drush_make_release_$type";
    if(!class_exists($class)) {
      if(empty($this->options['generic_class']) || !class_exists($this->options['generic_class'])) {
        $class = "Drush_make_release_generic";      
      }
      else {
        $class = $this->options['generic_class'];
      }
    }
    $this->strategy = new $class($this->release, $this->options);
  }
}