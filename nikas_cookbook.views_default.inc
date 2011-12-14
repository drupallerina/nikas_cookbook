<?php
/**
 * @file
 * nikas_cookbook.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nikas_cookbook_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'speisendatenbank';
  $view->description = 'Eine Übersicht der Speisen in unserem Sortiment.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speisendatenbank';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Speisen';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_tag';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Flags: bookmarks */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmarks';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Tag */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = '';
  $handler->display->display_options['fields']['field_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tag']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tag']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tag']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tag']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tag']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tag']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tag']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tag']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tag']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tag']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tag']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tag']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tag']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tag']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tag']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tag']['field_api_classes'] = 0;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['external'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['html'] = 0;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['ops']['hide_empty'] = 0;
  $handler->display->display_options['fields']['ops']['empty_zero'] = 0;
  $handler->display->display_options['fields']['ops']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'speisendatenbank';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Speisendatenbank';
  $handler->display->display_options['menu']['name'] = 'features';
  $export['speisendatenbank'] = $view;

  return $export;
}
