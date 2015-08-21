<?php
/**
 * @file
 * restaurant_reservation.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function restaurant_reservation_defaultconfig_features() {
  return array(
    'restaurant_reservation' => array(
      'default_page_manager_pages' => 'default_page_manager_pages',
      'field_group_info' => 'field_group_info',
      'views_default_views' => 'views_default_views',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_page_manager_pages().
 */
function restaurant_reservation_defaultconfig_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'reservation';
  $page->task = 'page';
  $page->admin_title = 'Reservation';
  $page->admin_description = '';
  $page->path = 'reservation';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Book a Table',
    'name' => 'main-menu',
    'weight' => '100',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_reservation__panel_context_4b00a748-fbd1-4945-ae7f-4724f8345b1e';
  $handler->task = 'page';
  $handler->subtask = 'reservation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'layout_reservation';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'region_a' => NULL,
      'region_b' => NULL,
      'region_c' => NULL,
      'region_d' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Book a Table';
  $display->uuid = '3bdc0150-f5f4-4f37-a984-65bc967b3d52';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2f44501b-11fd-467a-af95-a972c95a9153';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:19';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'slideshow',
      'language' => 'und',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'Book a Table',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '42',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '19',
      'field_slideshow_slides' => array(
        'und' => array(
          0 => array(
            'value' => '19',
          ),
        ),
      ),
      'log' => '',
      'created' => 1440181175,
      'timestamp' => 1440181175,
      'changed' => 1440181175,
      'uuid' => '',
      'uid' => '1',
      'vuuid' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f44501b-11fd-467a-af95-a972c95a9153';
  $display->content['new-2f44501b-11fd-467a-af95-a972c95a9153'] = $pane;
  $display->panels['region_a'][0] = 'new-2f44501b-11fd-467a-af95-a972c95a9153';
  $pane = new stdClass();
  $pane->pid = 'new-2ad0a668-7fed-4889-800c-961b103011e2';
  $pane->panel = 'region_c';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:20';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'text',
      'language' => 'und',
      'is_new' => TRUE,
      'title' => 'How to book a table',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'How to book a table',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '43',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '20',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<h4>Step 1</h4><p>Fill in the reservation form with your contact information, the date of your reservation and the number of persons.</p><h4>Step 2</h4><p>Wait for our email that confirms that your reservation has been received.</p><h4>Step 3</h4><p>We will email you or call you back when your reservation has been confirmed.</p>',
            'format' => 'panopoly_wysiwyg_text',
          ),
        ),
      ),
      'log' => '',
      'created' => 1440181246,
      'timestamp' => 1440181246,
      'changed' => 1440181246,
      'uuid' => '',
      'uid' => '1',
      'vuuid' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2ad0a668-7fed-4889-800c-961b103011e2';
  $display->content['new-2ad0a668-7fed-4889-800c-961b103011e2'] = $pane;
  $display->panels['region_c'][0] = 'new-2ad0a668-7fed-4889-800c-961b103011e2';
  $pane = new stdClass();
  $pane->pid = 'new-97228bdc-7cb2-4e12-99fe-983ffa767ac3';
  $pane->panel = 'region_d';
  $pane->type = 'reservation_form';
  $pane->subtype = 'reservation_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '97228bdc-7cb2-4e12-99fe-983ffa767ac3';
  $display->content['new-97228bdc-7cb2-4e12-99fe-983ffa767ac3'] = $pane;
  $display->panels['region_d'][0] = 'new-97228bdc-7cb2-4e12-99fe-983ffa767ac3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['reservation'] = $page;

  return $pages;

}

/**
 * Implements hook_defaultconfig_field_group_info().
 */
function restaurant_reservation_defaultconfig_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|reservation|reservation|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'reservation';
  $field_group->bundle = 'reservation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '0',
    'children' => array(
      0 => 'field_reservation_name',
      1 => 'field_reservation_email',
      2 => 'field_reservation_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
      ),
    ),
  );
  $export['group_contact|reservation|reservation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|reservation|reservation|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'reservation';
  $field_group->bundle = 'reservation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reservation details',
    'weight' => '1',
    'children' => array(
      0 => 'field_reservation_date',
      1 => 'field_reservation_party_size',
      2 => 'field_reservation_number',
      3 => 'field_reservation_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-fieldset',
      ),
    ),
  );
  $export['group_details|reservation|reservation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_message|reservation|reservation|default';
  $field_group->group_name = 'group_message';
  $field_group->entity_type = 'reservation';
  $field_group->bundle = 'reservation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Message',
    'weight' => '2',
    'children' => array(
      0 => 'field_reservation_message',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-message field-group-fieldset',
      ),
    ),
  );
  $export['group_message|reservation|reservation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_update|reservation|reservation|default';
  $field_group->group_name = 'group_update';
  $field_group->entity_type = 'reservation';
  $field_group->bundle = 'reservation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Update',
    'weight' => '3',
    'children' => array(
      0 => 'status_form',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-update field-group-fieldset',
      ),
    ),
  );
  $export['group_update|reservation|reservation|default'] = $field_group;

  return $export;
}

/**
 * Implements hook_defaultconfig_views_default_views().
 */
function restaurant_reservation_defaultconfig_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administration_reservations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_reservation';
  $view->human_name = 'Administration: Reservations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reservations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer reservations';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reservation_number' => 'field_reservation_number',
    'field_reservation_name' => 'field_reservation_name',
    'field_reservation_date' => 'field_reservation_date',
    'field_reservation_party_size' => 'field_reservation_party_size',
    'field_reservation_phone' => 'field_reservation_phone',
    'field_reservation_email' => 'field_reservation_email',
    'field_reservation_status' => 'field_reservation_status',
    'edit_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reservation_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
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
    'field_reservation_party_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Reservation: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_reservation';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Reservation: Reservation number */
  $handler->display->display_options['fields']['field_reservation_number']['id'] = 'field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['table'] = 'field_data_field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['field'] = 'field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['label'] = '#';
  $handler->display->display_options['fields']['field_reservation_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_reservation_number']['alter']['path'] = 'admin/reservations/[id]';
  $handler->display->display_options['fields']['field_reservation_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_number']['field_api_classes'] = TRUE;
  /* Field: Reservation: Name */
  $handler->display->display_options['fields']['field_reservation_name']['id'] = 'field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['field'] = 'field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_name']['field_api_classes'] = TRUE;
  /* Field: Reservation: Date */
  $handler->display->display_options['fields']['field_reservation_date']['id'] = 'field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['table'] = 'field_data_field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['field'] = 'field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['label'] = 'Reserved for';
  $handler->display->display_options['fields']['field_reservation_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_reservation_date']['field_api_classes'] = TRUE;
  /* Field: Reservation: Party size */
  $handler->display->display_options['fields']['field_reservation_party_size']['id'] = 'field_reservation_party_size';
  $handler->display->display_options['fields']['field_reservation_party_size']['table'] = 'field_data_field_reservation_party_size';
  $handler->display->display_options['fields']['field_reservation_party_size']['field'] = 'field_reservation_party_size';
  $handler->display->display_options['fields']['field_reservation_party_size']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_party_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_party_size']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_party_size']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_party_size']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_reservation_party_size']['field_api_classes'] = TRUE;
  /* Field: Reservation: Phone */
  $handler->display->display_options['fields']['field_reservation_phone']['id'] = 'field_reservation_phone';
  $handler->display->display_options['fields']['field_reservation_phone']['table'] = 'field_data_field_reservation_phone';
  $handler->display->display_options['fields']['field_reservation_phone']['field'] = 'field_reservation_phone';
  $handler->display->display_options['fields']['field_reservation_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_phone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_phone']['field_api_classes'] = TRUE;
  /* Field: Reservation: Email */
  $handler->display->display_options['fields']['field_reservation_email']['id'] = 'field_reservation_email';
  $handler->display->display_options['fields']['field_reservation_email']['table'] = 'field_data_field_reservation_email';
  $handler->display->display_options['fields']['field_reservation_email']['field'] = 'field_reservation_email';
  $handler->display->display_options['fields']['field_reservation_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_email']['field_api_classes'] = TRUE;
  /* Field: Reservation: Status */
  $handler->display->display_options['fields']['field_reservation_status']['id'] = 'field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['field'] = 'field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['alter']['preserve_tags'] = '<span>';
  $handler->display->display_options['fields']['field_reservation_status']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_status']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_status']['field_api_classes'] = TRUE;
  /* Field: Reservation: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_reservation';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_link']['text'] = 'edit';
  /* Filter criterion: Reservation: reservation type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_reservation';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reservation' => 'reservation',
  );
  /* Filter criterion: Reservation: Name (field_reservation_name) */
  $handler->display->display_options['filters']['field_reservation_name_value']['id'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['field'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_reservation_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator_id'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_field'] = 'field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Reservation: Reservation number (field_reservation_number) */
  $handler->display->display_options['filters']['field_reservation_number_value']['id'] = 'field_reservation_number_value';
  $handler->display->display_options['filters']['field_reservation_number_value']['table'] = 'field_data_field_reservation_number';
  $handler->display->display_options['filters']['field_reservation_number_value']['field'] = 'field_reservation_number_value';
  $handler->display->display_options['filters']['field_reservation_number_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_reservation_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['operator_id'] = 'field_reservation_number_value_op';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['label'] = 'Reservation number';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['operator'] = 'field_reservation_number_value_op';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['identifier'] = 'number';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_field'] = 'field_reservation_number';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Reservation: Status (field_reservation_status) */
  $handler->display->display_options['filters']['field_reservation_status_value']['id'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['filters']['field_reservation_status_value']['field'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['operator_id'] = 'field_reservation_status_value_op';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['operator'] = 'field_reservation_status_value_op';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'administration_reservations');
  $handler->display->display_options['path'] = 'admin/reservations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Reservations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Reservations';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Calendar */
  $handler = $view->new_display('page', 'Calendar', 'administration_reservations_calendar');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['pager_position'] = 'both';
  $handler->display->display_options['pager']['options']['skip_empty_pages'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['multiday_hidden'] = array(
    'field_reservation_name' => 'field_reservation_name',
    'field_reservation_party_size' => 'field_reservation_party_size',
    'field_reservation_phone' => 'field_reservation_phone',
    'field_reservation_email' => 'field_reservation_email',
    'field_reservation_status' => 'field_reservation_status',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_reservation_number' => 'field_reservation_number',
    'field_reservation_name' => 'field_reservation_name',
    'field_reservation_party_size' => 'field_reservation_party_size',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Reservation: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_reservation';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Reservation: Reservation number */
  $handler->display->display_options['fields']['field_reservation_number']['id'] = 'field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['table'] = 'field_data_field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['field'] = 'field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_reservation_number']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reservation_number']['alter']['text'] = '<a href="/admin/reservations/[id]">#[field_reservation_number]</a>';
  $handler->display->display_options['fields']['field_reservation_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_number']['field_api_classes'] = TRUE;
  /* Field: Reservation: Status */
  $handler->display->display_options['fields']['field_reservation_status']['id'] = 'field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['field'] = 'field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_status']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_status']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_status']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_reservation_status']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (eck_reservation) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'eck_reservation';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );
  $handler->display->display_options['path'] = 'admin/reservations/calendar';
  $handler->display->display_options['menu']['title'] = 'Calendar';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['administration_reservations'] = $view;

  return $export;
}
