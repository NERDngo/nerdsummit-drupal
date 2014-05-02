<?php
/**
 * @file
 * homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage';
  $display->uuid = 'a5ec09cf-834b-4687-b2a2-4585aaf91478';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2997f84c-a912-49fc-b832-84d9fa511480';
    $pane->panel = 'three_33_bottom';
    $pane->type = 'views';
    $pane->subtype = 'cod_sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 1,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_7',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2997f84c-a912-49fc-b832-84d9fa511480';
    $display->content['new-2997f84c-a912-49fc-b832-84d9fa511480'] = $pane;
    $display->panels['three_33_bottom'][0] = 'new-2997f84c-a912-49fc-b832-84d9fa511480';
    $pane = new stdClass();
    $pane->pid = 'new-0fb916ce-97bf-4224-a3e6-76a3d8b7cc17';
    $pane->panel = 'three_33_bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0fb916ce-97bf-4224-a3e6-76a3d8b7cc17';
    $display->content['new-0fb916ce-97bf-4224-a3e6-76a3d8b7cc17'] = $pane;
    $display->panels['three_33_bottom'][1] = 'new-0fb916ce-97bf-4224-a3e6-76a3d8b7cc17';
    $pane = new stdClass();
    $pane->pid = 'new-381ed5e7-185b-4004-a350-60fbcce0ea19';
    $pane->panel = 'three_33_bottom';
    $pane->type = 'views';
    $pane->subtype = 'cod_community_attendees';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '33',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '381ed5e7-185b-4004-a350-60fbcce0ea19';
    $display->content['new-381ed5e7-185b-4004-a350-60fbcce0ea19'] = $pane;
    $display->panels['three_33_bottom'][2] = 'new-381ed5e7-185b-4004-a350-60fbcce0ea19';
    $pane = new stdClass();
    $pane->pid = 'new-44719e22-5980-412b-83b9-e894fcf0c871';
    $pane->panel = 'three_33_bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '44719e22-5980-412b-83b9-e894fcf0c871';
    $display->content['new-44719e22-5980-412b-83b9-e894fcf0c871'] = $pane;
    $display->panels['three_33_bottom'][3] = 'new-44719e22-5980-412b-83b9-e894fcf0c871';
    $pane = new stdClass();
    $pane->pid = 'new-3cd47320-b8ab-4a2e-acc6-7817a4f377e7';
    $pane->panel = 'three_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn',
      'title' => 'Learn',
      'body' => 'Relevant...

Find out more...',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3cd47320-b8ab-4a2e-acc6-7817a4f377e7';
    $display->content['new-3cd47320-b8ab-4a2e-acc6-7817a4f377e7'] = $pane;
    $display->panels['three_33_first'][0] = 'new-3cd47320-b8ab-4a2e-acc6-7817a4f377e7';
    $pane = new stdClass();
    $pane->pid = 'new-813931d3-b682-4fd6-97e6-20a2af00e8af';
    $pane->panel = 'three_33_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Teach',
      'title' => 'Teach',
      'body' => 'Share...

Find out more...',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '813931d3-b682-4fd6-97e6-20a2af00e8af';
    $display->content['new-813931d3-b682-4fd6-97e6-20a2af00e8af'] = $pane;
    $display->panels['three_33_second'][0] = 'new-813931d3-b682-4fd6-97e6-20a2af00e8af';
    $pane = new stdClass();
    $pane->pid = 'new-6d0d547c-8d84-4478-b8a1-5cd67ef1a24f';
    $pane->panel = 'three_33_third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Support',
      'title' => 'Support',
      'body' => 'Help...

Find out more...',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6d0d547c-8d84-4478-b8a1-5cd67ef1a24f';
    $display->content['new-6d0d547c-8d84-4478-b8a1-5cd67ef1a24f'] = $pane;
    $display->panels['three_33_third'][0] = 'new-6d0d547c-8d84-4478-b8a1-5cd67ef1a24f';
    $pane = new stdClass();
    $pane->pid = 'new-be46543f-face-4967-9b81-c44a709f426d';
    $pane->panel = 'three_33_top';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'be46543f-face-4967-9b81-c44a709f426d';
    $display->content['new-be46543f-face-4967-9b81-c44a709f426d'] = $pane;
    $display->panels['three_33_top'][0] = 'new-be46543f-face-4967-9b81-c44a709f426d';
    $pane = new stdClass();
    $pane->pid = 'new-8bb3751c-b675-4b9d-9407-4df8a53eafcb';
    $pane->panel = 'three_33_top';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8bb3751c-b675-4b9d-9407-4df8a53eafcb';
    $display->content['new-8bb3751c-b675-4b9d-9407-4df8a53eafcb'] = $pane;
    $display->panels['three_33_top'][1] = 'new-8bb3751c-b675-4b9d-9407-4df8a53eafcb';
    $pane = new stdClass();
    $pane->pid = 'new-610a7913-c116-4ef5-b40d-3b94e7eb641b';
    $pane->panel = 'three_33_top';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '610a7913-c116-4ef5-b40d-3b94e7eb641b';
    $display->content['new-610a7913-c116-4ef5-b40d-3b94e7eb641b'] = $pane;
    $display->panels['three_33_top'][2] = 'new-610a7913-c116-4ef5-b40d-3b94e7eb641b';
    $pane = new stdClass();
    $pane->pid = 'new-cffc7f0d-e0ab-4795-bf56-a464214ff5f2';
    $pane->panel = 'three_33_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-about';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cffc7f0d-e0ab-4795-bf56-a464214ff5f2';
    $display->content['new-cffc7f0d-e0ab-4795-bf56-a464214ff5f2'] = $pane;
    $display->panels['three_33_top'][3] = 'new-cffc7f0d-e0ab-4795-bf56-a464214ff5f2';
    $pane = new stdClass();
    $pane->pid = 'new-04cc9ec6-952d-4b05-b5f6-af303fd68440';
    $pane->panel = 'three_33_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'NERDSummit 2014',
      'title' => 'NERDSummit 2014',
      'body' => 'Content...

Register here...',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '04cc9ec6-952d-4b05-b5f6-af303fd68440';
    $display->content['new-04cc9ec6-952d-4b05-b5f6-af303fd68440'] = $pane;
    $display->panels['three_33_top'][4] = 'new-04cc9ec6-952d-4b05-b5f6-af303fd68440';
    $pane = new stdClass();
    $pane->pid = 'new-8c2cba62-bc2c-4416-9b05-da5d7fd2a297';
    $pane->panel = 'three_33_top';
    $pane->type = 'views';
    $pane->subtype = 'frontpage';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 1,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8c2cba62-bc2c-4416-9b05-da5d7fd2a297';
    $display->content['new-8c2cba62-bc2c-4416-9b05-da5d7fd2a297'] = $pane;
    $display->panels['three_33_top'][5] = 'new-8c2cba62-bc2c-4416-9b05-da5d7fd2a297';
    $pane = new stdClass();
    $pane->pid = 'new-f74631cf-4fa8-4280-9364-28cd2908a520';
    $pane->panel = 'three_33_top';
    $pane->type = 'views';
    $pane->subtype = 'cod_events_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 1,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f74631cf-4fa8-4280-9364-28cd2908a520';
    $display->content['new-f74631cf-4fa8-4280-9364-28cd2908a520'] = $pane;
    $display->panels['three_33_top'][6] = 'new-f74631cf-4fa8-4280-9364-28cd2908a520';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-be46543f-face-4967-9b81-c44a709f426d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
