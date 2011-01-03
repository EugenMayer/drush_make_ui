<?php

/**
 * Implementation of hook_strongarm().
 */
function drush_make_ui_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_drush_make_file';
  $strongarm->value = 0;

  $export['comment_anonymous_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_drush_make_file';
  $strongarm->value = '3';

  $export['comment_controls_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_drush_make_file';
  $strongarm->value = '4';

  $export['comment_default_mode_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_drush_make_file';
  $strongarm->value = '1';

  $export['comment_default_order_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_drush_make_file';
  $strongarm->value = '50';

  $export['comment_default_per_page_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_drush_make_file';
  $strongarm->value = '0';

  $export['comment_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_drush_make_file';
  $strongarm->value = '1';

  $export['comment_form_location_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_drush_make_file';
  $strongarm->value = '1';

  $export['comment_preview_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_drush_make_file';
  $strongarm->value = '0';

  $export['comment_subject_field_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_drush_make_file';
  $strongarm->value = array(
    'title' => '9',
    'body_field' => '11',
    'revision_information' => '14',
    'author' => '15',
    'options' => '16',
    'menu' => '17',
  );

  $export['content_extra_weights_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_drush_make_file';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_drush_make_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_drush_make_file';
  $strongarm->value = '0';

  $export['upload_drush_make_file'] = $strongarm;
  return $export;
}
