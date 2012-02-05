<?php

// Copyright (c) 2010 KontextWork
// Author: Eugen Mayer, Views Bonus Author
function drush_make_ui_views_plugins() {
  $path = drupal_get_path('module', 'drush_make_ui');
  return array(
    'style' => array(
      'drush_make_ui_export' => array(
        // this isn't really a display but is necessary so the file can
        // be included.
        'no ui' => TRUE,
        'handler' => 'drush_make_ui_export',
        'path' => "$path/views",
      ),
      'drush_make_ui_makefile' => array(
        'title' => t('Drush makefile'),
        'help' => t('Create a downloadable drush make file'),
        'path' => "$path/views",
        'theme path' => "$path/views",
        'handler' => 'drush_make_ui_makefile',
        'parent' => 'drush_make_ui_export',
        'theme' => 'drush_make_ui_makefile',
        'theme file' => 'drush_make_ui_makefile.theme.inc',
        'uses row plugin' => FALSE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'feed',
        'export headers' => array('Content-type: text/make; charset=utf-8'),
        'export feed type' => 'make',
      ),
    ),
  );
}

/**
 * Theme preprocess for theme('fserver_updatexml')
 */
function template_preprocess_drush_make_ui_makefile(&$vars) {
}

/**
 * Implementation of hook_views_post_render().
 */
function drush_make_ui_views_post_render(&$view, &$output, &$cache) {
  if (is_a($view->style_plugin, 'drush_make_ui_export')) {
    if (ob_get_level()) {
      ob_end_clean();
    }
    _drush_make_ui_export_add_headers($view);
    $lenght = sizeof($output);
    drupal_set_header("Content-Lenght: $lenght");
    print $output;
    exit();
  }
}

/**
 * Private helper function for adding headers to exported views.
 *
 * @param $view
 * A views object who's current style plugin is a views export style.
 * @return
 * No return. Headers are added to page.
 */
function _drush_make_ui_export_add_headers(&$view) {
  $style = $view->style_plugin;

  if (isset($style->options['filename'])) {
    $filename = strtr(
      $style->options['filename'],
      array('%view' => check_plain($view->name))
    );
    if (!empty($_GET['filename'])) {
      $filename = $_GET['filename'];
    }
    $filename = mime_header_encode($filename);
    if ($filename) {
      drupal_set_header('Content-Disposition: attachment; filename="' . $filename . '"');
    }
  }

  drupal_set_header('Cache-Control: private');
  drupal_set_header("Content-Type: txt/plain; name='$filename'");
}
