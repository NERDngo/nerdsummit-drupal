<?php

/**
 * This plugin array is more or less self documenting
 */
$plugin = array(
  // the title in the admin
  'title' => t('Session Management Pane'),
  // no one knows if "single" defaults to FALSE...
  'single' => TRUE,
  // oh joy, I get my own section of panel panes
  'category' => array(t('Conference Organizing'), -9),
  //'edit form' => 'cod_events_pane_content_type_edit_form',
  'render callback' => 'cod_session_pane_content_type_render'
);

/**
* Run-time rendering of the body of the block (content type)
* See ctools_plugin_examples for more advanced info
*/
function cod_session_pane_content_type_render($subtype, $conf, $context = NULL) {
  module_load_include('admin.inc', 'cod_session', 'includes/cod_session');
  // our output is generate by js. Any markup or theme functions
  // could go here.
  // that private js function is so bad that fixing it will be the
  // basis of the next tutorial
  $block = new stdClass();
  $block->title = t('Manage Published Sessions');

  if($node = node_load(array_shift($context))) {
    $block->content = cod_session_admin_sessions($node);
  } else {
    $block->content = t('Invalid Event Type');
  }
  return $block;
}


