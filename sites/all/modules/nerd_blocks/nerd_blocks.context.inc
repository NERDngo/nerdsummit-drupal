<?php
/**
 * @file
 * nerd_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nerd_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nerd_save_the_date';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nerd_blocks-nerd_save_date' => array(
          'module' => 'nerd_blocks',
          'delta' => 'nerd_save_date',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['nerd_save_the_date'] = $context;

  return $export;
}
