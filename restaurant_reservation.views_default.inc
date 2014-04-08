<?php
/**
 * @file
 * restaurant_reservation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function restaurant_reservation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administration_reservations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administration: Reservations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reservations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reservation_name' => 'field_reservation_name',
    'field_reservation_date' => 'field_reservation_date',
    'field_reservation_persons' => 'field_reservation_persons',
    'field_reservation_email' => 'field_reservation_email',
    'field_reservation_phone' => 'field_reservation_phone',
    'created' => 'created',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reservation_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_persons' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_phone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_reservation_name']['id'] = 'field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['field'] = 'field_reservation_name';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reservation_date']['id'] = 'field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['table'] = 'field_data_field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['field'] = 'field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['label'] = 'Reserved for';
  $handler->display->display_options['fields']['field_reservation_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Number of persons */
  $handler->display->display_options['fields']['field_reservation_persons']['id'] = 'field_reservation_persons';
  $handler->display->display_options['fields']['field_reservation_persons']['table'] = 'field_data_field_reservation_persons';
  $handler->display->display_options['fields']['field_reservation_persons']['field'] = 'field_reservation_persons';
  $handler->display->display_options['fields']['field_reservation_persons']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_reservation_email']['id'] = 'field_reservation_email';
  $handler->display->display_options['fields']['field_reservation_email']['table'] = 'field_data_field_reservation_email';
  $handler->display->display_options['fields']['field_reservation_email']['field'] = 'field_reservation_email';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_reservation_phone']['id'] = 'field_reservation_phone';
  $handler->display->display_options['fields']['field_reservation_phone']['table'] = 'field_data_field_reservation_phone';
  $handler->display->display_options['fields']['field_reservation_phone']['field'] = 'field_reservation_phone';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Reserved on';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reservation' => 'reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name (field_reservation_name) */
  $handler->display->display_options['filters']['field_reservation_name_value']['id'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['field'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_reservation_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator_id'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_field'] = 'field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Month';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'month';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'month';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'admin_reservations');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/reservations';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Reservations';
  $handler->display->display_options['menu']['weight'] = '-9';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Reservations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';
  $export['administration_reservations'] = $view;

  return $export;
}
