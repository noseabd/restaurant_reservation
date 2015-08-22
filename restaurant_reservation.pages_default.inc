<?php
/**
 * @file
 * restaurant_reservation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function restaurant_reservation_default_page_manager_pages() {
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
      'timestamp' => 1440241731,
      'uid' => '1',
      'title' => '',
      'log' => '',
      'vuuid' => '',
      'fpid' => '19',
      'bundle' => 'slideshow',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'Book a Table',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1440181175',
      'changed' => 1440241731,
      'uuid' => '',
      'language' => 'und',
      'current_vid' => '42',
      'field_slideshow_slides' => array(
        'und' => array(
          0 => array(
            'value' => '19',
          ),
        ),
      ),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '42',
        'timestamp' => '1440181175',
        'uid' => '1',
        'title' => '',
        'log' => '',
        'vuuid' => '',
        'fpid' => '19',
        'bundle' => 'slideshow',
        'link' => '0',
        'path' => '',
        'reusable' => '1',
        'admin_title' => 'Book a Table',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1440181175',
        'changed' => '1440181175',
        'uuid' => '',
        'language' => 'und',
        'current_vid' => '42',
        'field_slideshow_slides' => array(
          'und' => array(
            0 => array(
              'value' => '19',
            ),
          ),
        ),
      ),
      'old_vid' => '42',
      'vid' => '56',
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
      'timestamp' => 1440241704,
      'uid' => '1',
      'title' => 'How to book a table',
      'log' => '',
      'vuuid' => '',
      'fpid' => '20',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'How to book a table',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1440181246',
      'changed' => 1440241704,
      'uuid' => '',
      'language' => 'und',
      'current_vid' => '43',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<h4>Step 1</h4><p>Fill in the reservation form with your contact information, the date of your reservation and the number of persons.</p><h4>Step 2</h4><p>Wait for our email that confirms that your reservation has been received.</p><h4>Step 3</h4><p>We will email you or call you back when your reservation has been confirmed.</p><p>[config:opening_hours]</p>',
            'format' => 'panopoly_wysiwyg_text',
          ),
        ),
      ),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '43',
        'timestamp' => '1440181246',
        'uid' => '1',
        'title' => 'How to book a table',
        'log' => '',
        'vuuid' => '',
        'fpid' => '20',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '1',
        'admin_title' => 'How to book a table',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1440181246',
        'changed' => '1440181246',
        'uuid' => '',
        'language' => 'und',
        'current_vid' => '43',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<h4>Step 1</h4><p>Fill in the reservation form with your contact information, the date of your reservation and the number of persons.</p><h4>Step 2</h4><p>Wait for our email that confirms that your reservation has been received.</p><h4>Step 3</h4><p>We will email you or call you back when your reservation has been confirmed.</p>',
              'format' => 'panopoly_wysiwyg_text',
              'safe_value' => '<h4>Step 1</h4><p>Fill in the reservation form with your contact information, the date of your reservation and the number of persons.</p><h4>Step 2</h4><p>Wait for our email that confirms that your reservation has been received.</p><h4>Step 3</h4><p>We will email you or call you back when your reservation has been confirmed.</p>',
            ),
          ),
        ),
      ),
      'old_vid' => '43',
      'vid' => '55',
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
