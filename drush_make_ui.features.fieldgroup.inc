<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function drush_make_ui_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_extras
  $groups['drush_make_file-group_extras'] = array(
    'group_type' => 'standard',
    'type_name' => 'drush_make_file',
    'group_name' => 'group_extras',
    'label' => 'Extra settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '11',
    'fields' => array(
      '0' => 'field_core_version',
      '1' => 'field_drush_make_api',
      '2' => 'field_custom',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Extra settings');

  return $groups;
}
