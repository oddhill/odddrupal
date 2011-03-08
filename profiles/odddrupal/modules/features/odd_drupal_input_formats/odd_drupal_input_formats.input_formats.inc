<?php

/**
 * Implementation of hook_input_formats().
 */
function odd_drupal_input_formats_input_formats() {
  $input_formats = array();

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Filtered HTML';
  $input_format->roles = array();
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      // Filter HTML tags
      'filter_html' => '1',
      // Allowed HTML tags
      'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <h2> <h3> <br> <p>',
      // Display HTML help
      'filter_html_help' => 1,
      // Spam link deterrent
      'filter_html_nofollow' => 0,
    ),
    // Settings for: spamspan module
    'spamspan' => array(
      // User name class
      'spamspan_usercla' => 'u',
      // Domain part class
      'spamspan_domaincla' => 'd',
      // Replacement for "@"
      'spamspan_' => ' [at] ',
      // Use a graphical replacement for "@"
      'spamspan_use_graph' => 0,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
      // Delta => Weight for: HTML filter
      '0' => '1',
      // Delta => Weight for: HTML corrector
      '3' => '10',
    ),
    'spamspan' => array(
      // Delta => Weight for: Hide email addresses using the SpamSpan technique
      '0' => '10',
    ),
  );
  $input_format->machine = 'filtered_html';
  $input_formats['filtered_html'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Full HTML';
  $input_format->roles = array();
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: spamspan module
    'spamspan' => array(
      // User name class
      'spamspan_usercla' => 'u',
      // Domain part class
      'spamspan_domaincla' => 'd',
      // Replacement for "@"
      'spamspan_' => ' [at] ',
      // Use a graphical replacement for "@"
      'spamspan_use_graph' => 0,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
      // Delta => Weight for: HTML corrector
      '3' => '10',
    ),
    'spamspan' => array(
      // Delta => Weight for: Hide email addresses using the SpamSpan technique
      '0' => '10',
    ),
  );
  $input_format->machine = 'full_html';
  $input_formats['full_html'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Unrestricted';
  $input_format->roles = array();
  $input_format->cache = TRUE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
  );
  $input_format->machine = 'unrestricted';
  $input_formats['unrestricted'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'PHP code';
  $input_format->roles = array();
  $input_format->cache = FALSE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'php' => array(
      // Delta => Weight for: PHP evaluator
      '0' => '0',
    ),
  );
  $input_format->machine = 'php_code';
  $input_formats['php_code'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Plain text';
  $input_format->roles = array(
    1 => 'anonymous user',
    2 => 'authenticated user',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      // Filter HTML tags
      'filter_html' => '1',
      // Allowed HTML tags
      'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>',
      // Display HTML help
      'filter_html_help' => 0,
      // Spam link deterrent
      'filter_html_nofollow' => 0,
    ),
    // Settings for: spamspan module
    'spamspan' => array(
      // User name class
      'spamspan_usercla' => 'u',
      // Domain part class
      'spamspan_domaincla' => 'd',
      // Replacement for "@"
      'spamspan_' => ' [at] ',
      // Use a graphical replacement for "@"
      'spamspan_use_graph' => 0,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
      // Delta => Weight for: HTML filter
      '0' => '1',
      // Delta => Weight for: Line break converter
      '1' => '2',
      // Delta => Weight for: HTML corrector
      '3' => '10',
    ),
    'spamspan' => array(
      // Delta => Weight for: Hide email addresses using the SpamSpan technique
      '0' => '10',
    ),
  );
  $input_format->machine = 'plain_text';
  $input_formats['plain_text'] = $input_format;

  return $input_formats;

}
