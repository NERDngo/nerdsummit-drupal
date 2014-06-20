<?php
/**
 * @file
 * nerds_cta_boxes.box.inc
 */

/**
 * Implements hook_default_box().
 */
function nerds_cta_boxes_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'learn_cta_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'the learn page call to action box';
  $box->options = array(
    'body' => array(
      'value' => '<h1>Learn&nbsp;</h1>

<p>No matter what your skill level&nbsp;the&nbsp;<span>NERDs team of developers are&nbsp;ready, willing and able&nbsp;to help.&nbsp;</span>Join us in&nbsp;discussing:</p>

<ul class="rteindent2">
	<li class="rteindent3"><span>Content Managment Systems like Drupal and Wordpress!</span></li>
	<li class="rteindent2"><span>Coding languages like HTML5 CSS3 Javascript, Php&nbsp;and more!</span></li>
	<li class="rteindent2"><span>Important&nbsp;concepts such as responsive design, ​<span>efficient workflow, SEO, and mobile-first development strategies!&nbsp;</span></span></li>
</ul>

<p><a class="button" href="#">What do you want to learn?</a></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['learn_cta_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'support_cta';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'the support page call to action box';
  $box->options = array(
    'body' => array(
      'value' => '<h1><span style="line-height: 1.2em;">Become a Sponsor</span></h1>

<p>NERDs is only possible with contributions from sponsors like you!</p>

<p>Steps to apply:</p>

<ol>
	<li>Review attached sponsor levels.</li>
	<li>Register to sponsor. (If already registered, proceed to step 5.)</li>
	<li>Recieve confirmation email with more info.</li>
	<li>Confirm account, login, get access to apply to sponsor</li>
	<li>Complete Sponsor form.</li>
	<li>Recieve confirmation email asking which level you are interested in and to recieve payment.</li>
</ol>

<p><em>You can also contact us for more info.</em></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['support_cta'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'teach_cta';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'the teach page call to action box';
  $box->options = array(
    'body' => array(
      'value' => '<h1>Become an Educator</h1>

<p>While the Pioneer Valley in particular is home to a variety of educational institutions, including the Five College Consortium, a flagship research university, two Seven Sisters women’s colleges, and a host of community colleges, the lack of practical development experience that undergraduates entering the workforce presents a problem that New England Regional Developers, Inc, believes can be solved with the mentoring program outlined here.</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['teach_cta'] = $box;

  return $export;
}
