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
        'weight' => '7',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '7',
    'fields' => array(
      '0' => 'field_core_version',
      '1' => 'field_drush_make_api',
      '2' => 'field_custom',
    ),
  );

  // Exported group: group_packages
  $groups['drush_make_file-group_packages'] = array(
    'group_type' => 'standard',
    'type_name' => 'drush_make_file',
    'group_name' => 'group_packages',
    'label' => 'Packages',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '8',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '8',
    'fields' => array(
      '0' => 'field_module',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Extra settings');
  t('Packages');

  return $groups;
}
