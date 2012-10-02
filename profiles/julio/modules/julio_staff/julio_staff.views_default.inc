<?php
/**
 * @file
 * julio_staff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function julio_staff_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'julio_faculty_staff';
  $view->description = 'Faculty and Staff Directory';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Faculty and Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faculty and Staff';
  $handler->display->display_options['css_class'] = 'staff';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_julio_first_name' => 'field_julio_first_name',
    'field_julio_last_name' => 'field_julio_last_name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Flags: julio_staff */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'julio_staff';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_julio_first_name']['id'] = 'field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['table'] = 'field_data_field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['field'] = 'field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_julio_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_julio_first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['field_api_classes'] = 0;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_julio_last_name']['id'] = 'field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['table'] = 'field_data_field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['field'] = 'field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_julio_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_julio_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['field_api_classes'] = 0;
  /* Field: User: Job Title */
  $handler->display->display_options['fields']['field_julio_job_title']['id'] = 'field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['table'] = 'field_data_field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['field'] = 'field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_julio_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_job_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_julio_job_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['field_api_classes'] = 0;
  /* Field: User: Department(s) */
  $handler->display->display_options['fields']['field_julio_department']['id'] = 'field_julio_department';
  $handler->display->display_options['fields']['field_julio_department']['table'] = 'field_data_field_julio_department';
  $handler->display->display_options['fields']['field_julio_department']['field'] = 'field_julio_department';
  $handler->display->display_options['fields']['field_julio_department']['label'] = '';
  $handler->display->display_options['fields']['field_julio_department']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_julio_department']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_julio_department']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_department']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_julio_department']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_julio_department']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_julio_department']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_julio_department']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_julio_department']['field_api_classes'] = 0;
  /* Field: User: Email */
  $handler->display->display_options['fields']['field_julio_email']['id'] = 'field_julio_email';
  $handler->display->display_options['fields']['field_julio_email']['table'] = 'field_data_field_julio_email';
  $handler->display->display_options['fields']['field_julio_email']['field'] = 'field_julio_email';
  $handler->display->display_options['fields']['field_julio_email']['label'] = '';
  $handler->display->display_options['fields']['field_julio_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_julio_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_julio_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_julio_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_email']['field_api_classes'] = 0;
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_julio_phone']['id'] = 'field_julio_phone';
  $handler->display->display_options['fields']['field_julio_phone']['table'] = 'field_data_field_julio_phone';
  $handler->display->display_options['fields']['field_julio_phone']['field'] = 'field_julio_phone';
  $handler->display->display_options['fields']['field_julio_phone']['label'] = '';
  $handler->display->display_options['fields']['field_julio_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_julio_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_phone']['field_api_classes'] = 0;
  /* Sort criterion: User: Last Name (field_julio_last_name) */
  $handler->display->display_options['sorts']['field_julio_last_name_value']['id'] = 'field_julio_last_name_value';
  $handler->display->display_options['sorts']['field_julio_last_name_value']['table'] = 'field_data_field_julio_last_name';
  $handler->display->display_options['sorts']['field_julio_last_name_value']['field'] = 'field_julio_last_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'staff';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Faculty and Staff';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_julio_first_name']['id'] = 'field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['table'] = 'field_data_field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['field'] = 'field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_julio_first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_first_name']['field_api_classes'] = 0;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_julio_last_name']['id'] = 'field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['table'] = 'field_data_field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['field'] = 'field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_julio_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_last_name']['field_api_classes'] = 0;
  /* Field: User: Job Title */
  $handler->display->display_options['fields']['field_julio_job_title']['id'] = 'field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['table'] = 'field_data_field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['field'] = 'field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_job_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_julio_job_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_julio_job_title']['field_api_classes'] = 0;
  $export['julio_faculty_staff'] = $view;

  return $export;
}
