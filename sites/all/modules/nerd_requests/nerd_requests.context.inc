<?php
/**
 * @file
 * nerd_requests.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nerd_requests_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nerd_requested_sessions';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'teach' => 'teach',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-reqested_sessions-block' => array(
          'module' => 'views',
          'delta' => 'reqested_sessions-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['nerd_requested_sessions'] = $context;

  return $export;
}
