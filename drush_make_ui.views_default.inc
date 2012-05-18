<?php

/**
 * Implementation of hook_views_default_views().
 */
function drush_make_ui_views_default_views() {
  $views = array();

  // Exported view: drush_make_file_generator
  $view = new view;
  $view->name = 'drush_make_file_generator';
  $view->description = 'Drush make file generator';
  $view->tag = '';
  $view->base_table = 'node_revisions';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Drush make file';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_drush_make_api_value' => 'field_drush_make_api_value',
    'field_core_version_value' => 'field_core_version_value',
    'field_module_title' => 'field_module_title',
    'field_custom_value' => 'field_custom_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_drush_make_api_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_core_version_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_module_title' => array(
      'separator' => '',
    ),
    'field_custom_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'You have no make-file field in the provided node or you did not provide a vid ( node revision ) as first argument.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Drush make API (field_drush_make_api) */
  $handler->display->display_options['fields']['field_drush_make_api_value']['id'] = 'field_drush_make_api_value';
  $handler->display->display_options['fields']['field_drush_make_api_value']['table'] = 'node_data_field_drush_make_api';
  $handler->display->display_options['fields']['field_drush_make_api_value']['field'] = 'field_drush_make_api_value';
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_drush_make_api_value']['format'] = 'drush_make_api';
  /* Field: Content: Core (field_core_version) */
  $handler->display->display_options['fields']['field_core_version_value']['id'] = 'field_core_version_value';
  $handler->display->display_options['fields']['field_core_version_value']['table'] = 'node_data_field_core_version';
  $handler->display->display_options['fields']['field_core_version_value']['field'] = 'field_core_version_value';
  $handler->display->display_options['fields']['field_core_version_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_core_version_value']['format'] = 'core_api';
  /* Field: Content: Custom settings (field_custom) */
  $handler->display->display_options['fields']['field_custom_value']['id'] = 'field_custom_value';
  $handler->display->display_options['fields']['field_custom_value']['table'] = 'node_data_field_custom';
  $handler->display->display_options['fields']['field_custom_value']['field'] = 'field_custom_value';
  $handler->display->display_options['fields']['field_custom_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_custom_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_custom_value']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['field_custom_value']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['field_custom_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_custom_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_custom_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_custom_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_custom_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_custom_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_custom_value']['label_type'] = 'none';
  /* Field: Content: Modules (field_module) */
  $handler->display->display_options['fields']['field_module_title']['id'] = 'field_module_title';
  $handler->display->display_options['fields']['field_module_title']['table'] = 'node_data_field_module';
  $handler->display->display_options['fields']['field_module_title']['field'] = 'field_module_title';
  $handler->display->display_options['fields']['field_module_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_module_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_module_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_module_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_module_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_module_title']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_module_title']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_module_title']['format'] = 'makefile';
  $handler->display->display_options['fields']['field_module_title']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_module_title']['multiple']['multiple_reversed'] = 0;
  /* Argument: Node revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revisions';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['vid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['validate_type'] = 'numeric';
  $handler->display->display_options['arguments']['vid']['validate_fail'] = 'empty';
  $handler->display->display_options['arguments']['vid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['vid']['not'] = 0;

  /* Display: Drush make file */
  $handler = $view->new_display('page', 'Drush make file', 'page_1');
  $handler->display->display_options['path'] = 'drush_makefile';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Makefile';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'drush_make_ui_makefile';
  $handler->display->display_options['style_options']['attach_text'] = 'Download makefile';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'drush_make_ui/generate';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );

  $views[$view->name] = $view;

  // Exported view: drush_make_files
  $view = new view;
  $view->name = 'drush_make_files';
  $view->description = 'Drush Make Files';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Drush make files';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Core (field_core_version) */
  $handler->display->display_options['fields']['field_core_version_value']['id'] = 'field_core_version_value';
  $handler->display->display_options['fields']['field_core_version_value']['table'] = 'node_data_field_core_version';
  $handler->display->display_options['fields']['field_core_version_value']['field'] = 'field_core_version_value';
  $handler->display->display_options['fields']['field_core_version_value']['label'] = 'Core';
  $handler->display->display_options['fields']['field_core_version_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['link_to_node'] = 0;
  /* Field: Content: Drush make API (field_drush_make_api) */
  $handler->display->display_options['fields']['field_drush_make_api_value']['id'] = 'field_drush_make_api_value';
  $handler->display->display_options['fields']['field_drush_make_api_value']['table'] = 'node_data_field_drush_make_api';
  $handler->display->display_options['fields']['field_drush_make_api_value']['field'] = 'field_drush_make_api_value';
  $handler->display->display_options['fields']['field_drush_make_api_value']['label'] = 'Drush API';
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['label_type'] = 'custom';
  /* Field: Content: Modules (field_module) */
  $handler->display->display_options['fields']['field_module_title']['id'] = 'field_module_title';
  $handler->display->display_options['fields']['field_module_title']['table'] = 'node_data_field_module';
  $handler->display->display_options['fields']['field_module_title']['field'] = 'field_module_title';
  $handler->display->display_options['fields']['field_module_title']['label'] = 'Module (max 3)';
  $handler->display->display_options['fields']['field_module_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_module_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_module_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_module_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_module_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_module_title']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_module_title']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_module_title']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_module_title']['multiple']['multiple_number'] = '3';
  $handler->display->display_options['fields']['field_module_title']['multiple']['multiple_reversed'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'drush_make_file' => 'drush_make_file',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['optional'] = 0;
  $handler->display->display_options['filters']['type']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  /* Filter: Node: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'Search';
  $handler->display->display_options['filters']['title']['expose']['optional'] = 1;
  $handler->display->display_options['filters']['title']['case'] = 1;
  /* Filter: Content: Modules (field_module) - short_name */
  $handler->display->display_options['filters']['field_module_short_name']['id'] = 'field_module_short_name';
  $handler->display->display_options['filters']['field_module_short_name']['table'] = 'node_data_field_module';
  $handler->display->display_options['filters']['field_module_short_name']['field'] = 'field_module_short_name';
  $handler->display->display_options['filters']['field_module_short_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_module_short_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_module_short_name']['expose']['operator'] = 'field_module_short_name_op';
  $handler->display->display_options['filters']['field_module_short_name']['expose']['label'] = 'Includes module';
  $handler->display->display_options['filters']['field_module_short_name']['expose']['identifier'] = 'field_module_short_name';
  $handler->display->display_options['filters']['field_module_short_name']['expose']['optional'] = 1;
  $handler->display->display_options['filters']['field_module_short_name']['case'] = 1;

  /* Display: Drush make files */
  $handler = $view->new_display('page', 'Drush make files', 'page_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'drush_make_file' => 'drush_make_file',
    'component' => 'component',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  /* Filter: Node: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'Search';
  $handler->display->display_options['filters']['title']['expose']['optional'] = 1;
  $handler->display->display_options['filters']['title']['case'] = 1;
  /* Filter: Content: Modules (field_module) - short_name */
  $handler->display->display_options['filters']['field_module_short_name']['id'] = 'field_module_short_name';
  $handler->display->display_options['filters']['field_module_short_name']['table'] = 'node_data_field_module';
  $handler->display->display_options['filters']['field_module_short_name']['field'] = 'field_module_short_name';
  $handler->display->display_options['filters']['field_module_short_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_module_short_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_module_short_name']['expose']['operator'] = 'field_module_short_name_op';
  $handler->display->display_options['filters']['field_module_short_name']['expose']['label'] = 'Includes module';
  $handler->display->display_options['filters']['field_module_short_name']['expose']['identifier'] = 'field_module_short_name';
  $handler->display->display_options['filters']['field_module_short_name']['expose']['optional'] = 1;
  $handler->display->display_options['filters']['field_module_short_name']['case'] = 1;
  $handler->display->display_options['path'] = 'drush_make_files';
  $handler->display->display_options['menu']['title'] = 'Drush make files';
  $handler->display->display_options['menu']['description'] = 'Drush make files';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'drush_make_ui_makefile';
  $handler->display->display_options['style_options']['attach_text'] = 'Download makefile. The makefile is generated out of all current makefiles!';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Core (field_core_version) */
  $handler->display->display_options['fields']['field_core_version_value']['id'] = 'field_core_version_value';
  $handler->display->display_options['fields']['field_core_version_value']['table'] = 'node_data_field_core_version';
  $handler->display->display_options['fields']['field_core_version_value']['field'] = 'field_core_version_value';
  $handler->display->display_options['fields']['field_core_version_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_core_version_value']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_core_version_value']['format'] = 'core_api';
  /* Field: Content: Drush make API (field_drush_make_api) */
  $handler->display->display_options['fields']['field_drush_make_api_value']['id'] = 'field_drush_make_api_value';
  $handler->display->display_options['fields']['field_drush_make_api_value']['table'] = 'node_data_field_drush_make_api';
  $handler->display->display_options['fields']['field_drush_make_api_value']['field'] = 'field_drush_make_api_value';
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_drush_make_api_value']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_drush_make_api_value']['format'] = 'drush_make_api';
  /* Field: Content: Modules (field_module) */
  $handler->display->display_options['fields']['field_module_title']['id'] = 'field_module_title';
  $handler->display->display_options['fields']['field_module_title']['table'] = 'node_data_field_module';
  $handler->display->display_options['fields']['field_module_title']['field'] = 'field_module_title';
  $handler->display->display_options['fields']['field_module_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_module_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_module_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_module_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_module_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_module_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_module_title']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_module_title']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_module_title']['format'] = 'makefile';
  $handler->display->display_options['fields']['field_module_title']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_module_title']['multiple']['multiple_number'] = '3';
  $handler->display->display_options['fields']['field_module_title']['multiple']['multiple_reversed'] = 0;
  $handler->display->display_options['path'] = 'drush_make_ui/generatecurrent';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );

  $views[$view->name] = $view;

  return $views;
}
