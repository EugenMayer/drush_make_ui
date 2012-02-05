<?php

// Copyright (c) 2010 KontextWork
// Author: Eugen Mayer, Views Bonus Author
/**
 * @file
 * Plugin include file for export style plugin.
 */

/**
 * Generalized style plugin for export plugins.
 *
 * @ingroup views_style_plugins
 */
class drush_make_ui_export extends views_plugin_style {
  /**
   * Set options fields and default values.
   *
   * @return
   * An array of options information.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['attach_text'] = array(
      'default' => $this->feed_text,
      'translatable' => TRUE,
    );
    $options['provide_file'] = array(
      'default' => FALSE,
      'translatable' => FALSE,
    );
    $options['filename'] = array(
      'default' => $this->feed_file,
      'translatable' => FALSE,
    );
    $options['generic_class'] = array(
      'default' => $this->feed_generic_class,
      'translatable' => FALSE,
    );
    $options['parent_sort'] = array(
      'default' => FALSE,
      'translatable' => FALSE,
    );
    return $options;
  }

  /**
   * Options form mini callback.
   *
   * @param $form
   * Form array to add additional fields to.
   * @param $form_state
   * State of the form.
   * @return
   * None.
   */
  function options_form(&$form, &$form_state) {
    $form['attach_text'] = array(
      '#type' => 'textfield',
      '#title' => t('Attach text'),
      '#default_value' => $this->options['attach_text'],
      '#description' => t('This text is used in building the feed link. By default it is the "alt" text for the feed image.'),
    );
    $form['provide_file'] = array(
      '#type' => 'checkbox',
      '#title' => t('Provide as file'),
      '#default_value' => $this->options['provide_file'],
      '#description' => t('By deselecting this, the xml file will be provided as a feed instead of a file for download.'),
    );
    $form['filename'] = array(
      '#type' => 'textfield',
      '#title' => t('Filename'),
      '#default_value' => $this->options['filename'],
      '#description' => t('The filename that will be suggested to the browser for downloading purposes. %view will be replaced with the view name.'),
      '#process' => array('views_process_dependency'),
      '#dependency' => array(
        'edit-style-options-provide-file' => array(TRUE),
      ),
    );
    $form['generic_class'] = array(
      '#type' => 'textfield',
      '#title' => t('Generic class'),
      '#default_value' => $this->options['generic_class'],
      '#description' => t('What generic class to use when generating the make file. Leave empty to use the default class'),
      '#process' => array('views_process_dependency'),
      '#dependency' => array(
        'edit-style-options-provide-file' => array(TRUE),
      ),
    );
    $form['parent_sort'] = array(
      '#type' => 'checkbox',
      '#title' => t('Parent sort'),
      '#default_value' => $this->options['parent_sort'],
      '#description' => t('Try to apply any additional sorting from the attached display like table sorting to the exported feed.'),
    );
  }

  /**
   * Attach this view to another display as a feed.
   *
   * Provide basic functionality for all export style views like attaching a
   * feed image link.
   */
  function attach_to($display_id, $path, $title) {
    $type = $this->definition['export feed type'];
    $query = $this->view->get_exposed_input();
    // Stash the display id we're coming form in the url so we can hijack it later.
    if ($this->options['parent_sort']) {
      $query['attach'] = $display_id;
    }
    //$this->view->get_url(NULL, $path)
    $image = theme('image',
      $this->feed_image,
      $this->options['attach_text'],
      $this->options['attach_text']
    );
    $options = array(
      'html' => TRUE,
    );
    if (count($query) > 0) {
      $options['query'] = $query;
    }

    $link = l($image, $this->view->get_url(NULL, $path), $options);
    $this->view->feed_icon .= $link;
  }

  function build_sort() {
    // Bypass doing any sort of testing if parent sorting is disabled.
    if (!$this->options['parent_sort']) {
      return parent::build_sort();
    }

    $displays = $this->display->handler->get_option('displays');

    // Here is later. We can get the passed argument and use it to know which
    // display we can from and then do some addition processing.
    // If the display exists and is attached these two tests will succeed.
    if (isset($_GET['attach']) && isset($displays[$_GET['attach']]) && $displays[$_GET['attach']]) {
      // Setup the second style we're going to be using to sort on.
      $plugin_id = $displays[$_GET['attach']];
      $parent_display = $this->view->display[$plugin_id];
      $style_name = $parent_display->handler->get_option('style_plugin');
      $style_options = $parent_display->handler->get_option('style_options');
      $this->extra_style = views_get_plugin('style', $style_name);
      $this->extra_style->init($this->view, $parent_display, $style_options);

      // Call the second styles sort funciton and return the value.
      return $this->extra_style->build_sort();
    }
  }

  function build_sort_post() {
    // If we found an extra style plugin earlier, pass off the build_sort_post call to it.
    if (isset($this->extra_style)) {
      return $this->extra_style->build_sort_post();
    }
    else {
      return parent::build_sort_post();
    }
  }
}
