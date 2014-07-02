<?php
/**
 * @file
 * nerds_cta_boxes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nerds_cta_boxes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'learn_call_to_action';
  $context->description = 'learn call to action box';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'learn' => 'learn',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-learn_cta_box' => array(
          'module' => 'boxes',
          'delta' => 'learn_cta_box',
          'region' => 'banner',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('learn call to action box');
  $export['learn_call_to_action'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsor_call_to_action';
  $context->description = 'sponsor call to action box';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support' => 'support',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-support_cta' => array(
          'module' => 'boxes',
          'delta' => 'support_cta',
          'region' => 'banner',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sponsor call to action box');
  $export['sponsor_call_to_action'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'teach_call_to_action';
  $context->description = 'teach page call to action box';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'teach' => 'teach',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-teach_cta' => array(
          'module' => 'boxes',
          'delta' => 'teach_cta',
          'region' => 'banner',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('teach page call to action box');
  $export['teach_call_to_action'] = $context;

  return $export;
}
