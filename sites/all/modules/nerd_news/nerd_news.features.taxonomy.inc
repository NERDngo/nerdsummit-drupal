<?php
/**
 * @file
 * nerd_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nerd_news_taxonomy_default_vocabularies() {
  return array(
    'news_type' => array(
      'name' => 'News type',
      'machine_name' => 'news_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
