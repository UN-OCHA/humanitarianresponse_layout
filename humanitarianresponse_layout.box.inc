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
  $box->delta = 'home_calendar';
  $box->plugin_key = 'i18n';
  $box->title = '';
  $box->description = 'Home Calendar';
  $box->options = array(
    'body' => array(
      'value' => '<p><img alt="Calendar icon" src="/sites/all/themes/humanitarianresponse/images/calendar.png">Our <a href="coordination/calendar">calendar of meetings and events</a></p>',
      'format' => 'full_html',
    ),
    'i18n_boxes' => array(
      'language' => '__LOCALIZE__',
    ),
    'additional_classes' => 'grid-2 alpha block-boxes-home',
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
      'value' => '<p style="display: inline;"><img alt="COD icon" src="/sites/all/themes/humanitarianresponse/images/cod.png"></p><p style="margin-left: 50px;"><a href="visuals-data/visuals">Common and Fundamental Operational Data</a></p>',
      'format' => 'full_html',
    ),
    'i18n_boxes' => array(
      'language' => '__LOCALIZE__',
    ),
    'additional_classes' => 'grid-2 omega block-boxes-home',
  );
  $export['home_cod'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'quick_links';
  $box->plugin_key = 'i18n';
  $box->title = 'Quick Links';
  $box->description = 'Quick Links';
  $box->options = array(
    'body' => array(
      'value' => '<p><img alt="COD icon" src="/sites/all/themes/humanitarianresponse/images/cod.png"><a href="visuals-data/cod-fod-data">Common and Fundamental Operational Data</a></p><p><img alt="Calendar icon" src="/sites/all/themes/humanitarianresponse/images/calendar.png">Our <a href="coordination/calendar">calendar of meetings and events</a></p><p><img alt="Contacts icon" src="/sites/all/themes/humanitarianresponse/images/contacts.png"><a href="coordination/operational-presence">Contacts</a></p><p><img alt="Calendar icon" src="/sites/all/themes/humanitarianresponse/images/visuals.png">Our <a href="visuals-data/visuals">Visuals &amp; Data</a></p>',
      'format' => 'full_html',
    ),
    'i18n_boxes' => array(
      'language' => '__LOCALIZE__',
    ),
    'additional_classes' => '',
  );
  $export['quick_links'] = $box;

  return $export;
}
