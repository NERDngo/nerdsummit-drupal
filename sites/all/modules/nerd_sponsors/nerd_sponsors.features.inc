<?php
/**
 * @file
 * nerd_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nerd_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function nerd_sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
