<?php
/**
 * @file
 * humanitarianresponse_layout.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function humanitarianresponse_layout_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'contact';
  $fe_block_boxes->body = '<p>This site is part of the <a href="http://www.humanitarianresponse.info">HumanitarianResponse network</a>. Write to <a href="mailto:info@humanitarianresponse.info">info@humanitarianresponse.info</a> for more information.</p>
';

  $export['contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Calendar Text';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_calendar_text';
  $fe_block_boxes->body = '<p><img alt="Calendar icon" src="/profiles/humanitarianresponse/themes/humanitarianresponse/images/calendar.png">See what\'s happening on our <a href="coordination/calendar">calendar of meetings and events</a></p>';

  $export['home_calendar_text'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home COD Text';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_cod_text';
  $fe_block_boxes->body = '<p><img alt="COD icon" src="/profiles/humanitarianresponse/themes/humanitarianresponse/images/cod.png"><a href="maps/maps">Common and Fundamental Operational Data</a> (including GIS)</p>';

  $export['home_cod_text'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Legal';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'legal';
  $fe_block_boxes->body = '<p>Copyright 2012 UNOCHA</p>';

  $export['legal'] = $fe_block_boxes;

  return $export;
}
