<?php

/**
 * Implementation of hook_content_default_fields().
 */
function drush_make_ui_content_default_fields() {
  $fields = array();

  // Exported field: field_core_version
  $fields['drush_make_file-field_core_version'] = array(
    'field_name' => 'field_core_version',
    'type_name' => 'drush_make_file',
    'display_settings' => array(
      'weight' => '10',
      'parent' => 'group_extras',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '7.x
6.x
5.x
4.1.x',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '6.x',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Core',
      'weight' => '10',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_custom
  $fields['drush_make_file-field_custom'] = array(
    'field_name' => 'field_custom',
    'type_name' => 'drush_make_file',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_extras',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '6',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_custom][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Custom settings',
      'weight' => '13',
      'description' => 'You can enter customer specifications here for adding any kind of things which are e.g. not yet supported by the UI or whatever you like.
The content of this file will plainly be tailed to the end of the generated make file.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_drush_make_api
  $fields['drush_make_file-field_drush_make_api'] = array(
    'field_name' => 'field_drush_make_api',
    'type_name' => 'drush_make_file',
    'display_settings' => array(
      'weight' => '12',
      'parent' => 'group_extras',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '2.x
1.x',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '2.x',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Drush make API',
      'weight' => '12',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_module
  $fields['drush_make_file-field_module'] = array(
    'field_name' => 'field_module',
    'type_name' => 'drush_make_file',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_packages',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'short_name',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'update_feed_cck',
    'required' => '1',
    'multiple' => '1',
    'module' => 'update_feed_cck',
    'active' => '1',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'server_key' => 'drupal_org',
          'short_name' => '',
          'api_version' => '6.x',
          'module_release' => '',
          'refresh' => 'Refresh',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Packages',
      'weight' => '6',
      'description' => '',
      'type' => 'update_feed_cck_widget',
      'module' => 'update_feed_cck',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Core');
  t('Custom settings');
  t('Drush make API');
  t('Packages');

  return $fields;
}
