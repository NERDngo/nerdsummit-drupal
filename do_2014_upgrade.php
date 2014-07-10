<?php

theme_disable(array('footheme', 'bartik', 'seven'));

theme_enable(array('nerdsummit'));

variable_set('theme_default', 'nerdsummit');

module_enable(array(
  'nerd_blocks',
  'nerd_community',
  'nerd_events',
  'nerd_homepage',
  'nerd_news',
  'nerd_requests',
  'nerd_sessions',
  'nerd_sponsors',
  'nerds_cta_boxes'
));