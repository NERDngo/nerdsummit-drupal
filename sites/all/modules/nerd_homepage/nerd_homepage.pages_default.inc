<?php
/**
 * @file
 * nerd_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function nerd_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
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
    'title' => 'Homepage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'nerds_two_col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0bbcd845-85e1-4768-96b1-1e48a92ace59';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eb5c746e-9184-4b46-908a-ff5a2b7e9648';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn Box',
      'title' => 'Learn',
      'body' => '<p>Relevant skills in coding, graphics, and tech for users of all levels. Wordpress, Drupal, Javascript.</p>
<p><b>What do you want to learn?</b></p>
<p><a class="button" href="/learn">Find out more +</a></p>
',
      'format' => 'full_html',
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
    $pane->uuid = 'eb5c746e-9184-4b46-908a-ff5a2b7e9648';
    $display->content['new-eb5c746e-9184-4b46-908a-ff5a2b7e9648'] = $pane;
    $display->panels['middle'][0] = 'new-eb5c746e-9184-4b46-908a-ff5a2b7e9648';
    $pane = new stdClass();
    $pane->pid = 'new-30e3f94b-392e-4cd7-b9be-0380abf50b02';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Tech Box',
      'title' => 'Teach',
      'body' => '<p>Share your knowledge, use your communication skills.</p>

<p><b>What will you teach?</b></p>

<p><a class="button" href="/teach">Find out more +</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '30e3f94b-392e-4cd7-b9be-0380abf50b02';
    $display->content['new-30e3f94b-392e-4cd7-b9be-0380abf50b02'] = $pane;
    $display->panels['middle'][1] = 'new-30e3f94b-392e-4cd7-b9be-0380abf50b02';
    $pane = new stdClass();
    $pane->pid = 'new-14f66ed4-075a-481c-a69a-7af030696824';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Support Box',
      'title' => 'Support',
      'body' => '<p>Help make this happen.</p>
<p><b>You can help make this happen.</b></p>
<p><a class="button" href="/support">Find out more +</a></p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '14f66ed4-075a-481c-a69a-7af030696824';
    $display->content['new-14f66ed4-075a-481c-a69a-7af030696824'] = $pane;
    $display->panels['middle'][2] = 'new-14f66ed4-075a-481c-a69a-7af030696824';
    $pane = new stdClass();
    $pane->pid = 'new-2d3b0f25-4708-47bb-89db-18f5e7070240';
    $pane->panel = 'top_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Hero Unit',
      'title' => '',
      'body' => '<h1>NERD Summit 2014</h1>
<p>Learn with the local tech community at a free three day conference of talks, workshops, coding challenges, food, and fun!</p>
<p class="highlight">September 17-19, UMASS, Amherst</p>
<p class="cta"><a class="button" href="/user/register">Register</a><b>Free, because this industry wants you!</b></p>
',
      'format' => 'full_html',
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
    $pane->uuid = '2d3b0f25-4708-47bb-89db-18f5e7070240';
    $display->content['new-2d3b0f25-4708-47bb-89db-18f5e7070240'] = $pane;
    $display->panels['top_left'][0] = 'new-2d3b0f25-4708-47bb-89db-18f5e7070240';
    $pane = new stdClass();
    $pane->pid = 'new-2721784a-1979-42b5-b11e-59329427f8eb';
    $pane->panel = 'top_right';
    $pane->type = 'views';
    $pane->subtype = 'news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'news_block',
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
    $pane->uuid = '2721784a-1979-42b5-b11e-59329427f8eb';
    $display->content['new-2721784a-1979-42b5-b11e-59329427f8eb'] = $pane;
    $display->panels['top_right'][0] = 'new-2721784a-1979-42b5-b11e-59329427f8eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2d3b0f25-4708-47bb-89db-18f5e7070240';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
