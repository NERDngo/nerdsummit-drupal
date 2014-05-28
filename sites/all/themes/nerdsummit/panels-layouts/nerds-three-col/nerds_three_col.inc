<?php

$plugin = array(
  'title' => t('NERDS: Three column Stacked'),
  'category' => t('Columns: 3'),
  'theme' => 'nerds_three_col',
  'theme arguments' => array('id', 'content'),
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'main' => t('Main'),
    'right' => t('Right'),
  ),
);