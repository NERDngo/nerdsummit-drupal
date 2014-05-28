<?php
/**
 * @file
 * nerd_requests.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nerd_requests_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nerd_requests_node_info() {
  $items = array(
    'request' => array(
      'name' => t('Request'),
      'base' => 'node_content',
      'description' => t('The tech space offers jobs that can pay well and be flexible. But whether you’re a newbie or very experienced, keeping up with change and jargon can feel overwhelming. Request sessions on topics that interest you here.'),
      'has_title' => '1',
      'title_label' => t('Please give your request a title.'),
      'help' => '',
    ),
  );
  return $items;
}
