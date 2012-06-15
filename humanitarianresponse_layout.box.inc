<?php
/**
 * @file
 * humanitarianresponse_layout.box.inc
 */

/**
 * Implements hook_default_box().
 */
function humanitarianresponse_layout_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact';
  $box->plugin_key = 'i18n';
  $box->title = 'Contact';
  $box->description = 'Contact';
  $box->options = array(
    'body' => array(
      'value' => '<p>This site is part of the <a href="http://www.humanitarianresponse.info">HumanitarianResponse network</a>. Write to <a href="mailto:info@humanitarianresponse.info">info@humanitarianresponse.info</a> for more information.</p>',
      'format' => 'filtered_html',
    ),
    'i18n_boxes' => array(
      'language' => '__LOCALIZE__',
    ),
    'additional_classes' => '',
  );
  $export['contact'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_calendar';
  $box->plugin_key = 'i18n';
  $box->title = '';
  $box->description = 'Home Calendar';
  $box->options = array(
    'body' => array(
      'value' => '<p><img alt="Calendar icon" src="/sites/all/themes/humanitarianresponse/images/calendar.png">See what\'s happening on our <a href="coordination/calendar">calendar of meetings and events</a></p>',
      'format' => 'full_html',
    ),
    'i18n_boxes' => array(
      'language' => '__LOCALIZE__',
    ),
    'additional_classes' => '',
  );
  $export['home_calendar'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_cod';
  $box->plugin_key = 'i18n';
  $box->title = '';
  $box->description = 'Home COD';
  $box->options = array(
    'body' => array(
      'value' => '<p style="display: inline;"><img alt="COD icon" src="/sites/all/themes/humanitarianresponse/images/cod.png"></p><p style="margin-left: 50px;"><a href="visuals-data/visuals">Common and Fundamental Operational Data</a> (including GIS)</p>',
      'format' => 'full_html',
    ),
    'i18n_boxes' => array(
      'language' => '__LOCALIZE__',
    ),
    'additional_classes' => '',
  );
  $export['home_cod'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'legal';
  $box->plugin_key = 'i18n';
  $box->title = 'Legal';
  $box->description = 'Legal';
  $box->options = array(
    'body' => array(
      'value' => '<p>Copyright 2012 UNOCHA</p>',
      'format' => 'filtered_html',
    ),
    'i18n_boxes' => array(
      'language' => '__LOCALIZE__',
    ),
    'additional_classes' => '',
  );
  $export['legal'] = $box;

  return $export;
}
