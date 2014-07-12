<?php
/**
 * @file
 * nerd_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nerd_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nerd_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function nerd_events_image_default_styles() {
  $styles = array();

  // Exported image style: 1110x350_for_featured.
  $styles['1110x350_for_featured'] = array(
    'name' => '1110x350_for_featured',
    'label' => '1110x350 for featured',
    'effects' => array(
      12 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1110,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
