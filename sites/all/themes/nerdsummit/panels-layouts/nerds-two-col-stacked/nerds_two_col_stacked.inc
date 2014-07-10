<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('NERDS: Two column Stacked'),
  'category' => t('Columns: 2'),
  'icon' => 'twocol_bricks',
  'theme' => 'nerds_two_col_stacked',
  'theme arguments' => array('id', 'content'),
//  'css' => 'threecol_25_50_25.css',
  'regions' => array(
    'top_left' => t('Left Top'),
    'top_right' => t('Right Top'),
    'middle' => t('Middle'),
    'bottom' => t('Bottom')
  ),
);
