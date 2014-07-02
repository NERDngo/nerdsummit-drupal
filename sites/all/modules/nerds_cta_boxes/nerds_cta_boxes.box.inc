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
      'value' => '<h1>No Matter What Your Skill Level</h1>

<h2><span style="line-height: 1.6em;">the&nbsp;</span><span style="line-height: 1.6em;">NERDs team of developers are&nbsp;ready, willing and able&nbsp;to help.&nbsp;</span></h2>

<h2><strong style="font-size: 13px; line-height: 1.6em;"><span style="line-height: 1.6em;">Join us in&nbsp;discussing:</span></strong></h2>

<ul class="rteindent2">
	<li class="rteindent3"><span>Content Managment Systems like Drupal and Wordpress!</span></li>
	<li class="rteindent2"><span>Coding languages like HTML5 CSS3 Javascript, PHP&nbsp;and more!</span></li>
	<li class="rteindent2"><span>Important&nbsp;concepts such as responsive design, ​<span>efficient workflow, SEO, and mobile-first development strategies!</span></span></li>
</ul>

<p class="rteindent2"><span><span><span><span>​If you don\'t see something of interest below, please make a request!</span></span></span></span></p>

<p><a class="button" href="/learn/requests">What do you want to learn about?</a></p>
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

<p>Propose a session for the upcoming NERDSummit or apply to teach an entirely new or an existing learning event. It can be a new topic or ideaor it may draw from the list of requested topics below.&nbsp;</p>

<p><a class="button" href="/node/add/session">Propose a Session</a></p>

<p><a class="button" href="/teach/apply">Apply to be a NERDs Educator</a></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['teach_cta'] = $box;

  return $export;
}
