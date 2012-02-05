<?php

// Copyright (c) 2010 KontextWork
// Author: Eugen Mayer, Views Bonus Author
class drush_make_ui_makefile extends drush_make_ui_export {
  var $feed_text = 'MAKE';
  var $feed_file = 'view-%view.make';

  /**
   * Initialize plugin.
   *
   * Set feed image for shared rendering later.
   */
  function init(&$view, &$display, $options = NULL) {
    parent::init($view, $display, $options = NULL);
    $this->feed_image = drupal_get_path('module', 'drush_make_ui') . '/images/make-icon.png';
  }
}