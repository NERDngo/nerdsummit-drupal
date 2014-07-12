<?php
/**
 * @file
 * nerd_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nerd_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'featured_sessions_banner';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_sessions-block' => array(
          'module' => 'views',
          'delta' => 'featured_sessions-block',
          'region' => 'banner',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['featured_sessions_banner'] = $context;

  return $export;
}
