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

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Contact';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'contact';
  $fe_block_boxes->body = '<p>This site is part of the <a href="http://www.humanitarianresponse.info">HumanitarianResponse network</a>. Write to <a href="mailto:info@humanitarianresponse.info">info@humanitarianresponse.info</a> for more information.</p>
';

  $export['contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Legal';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'legal';
  $fe_block_boxes->body = '<p>Copyright 2012 UNOCHA</p>';

  $export['legal'] = $fe_block_boxes;

  return $export;
}
