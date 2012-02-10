<?php
/**
 * @file
 * humanitarianresponse_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;
  
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dhtml_menu_settings';
  $strongarm->value = array(
    'nav' => 'none',
    'animation' => array(
      'effects' => array(
        'opacity' => 'opacity',
        'height' => 0,
        'width' => 0,
      ),
      'speed' => '500',
    ),
    'effects' => array(
      'siblings' => 'close-same-tree',
      'children' => 'none',
      'remember' => 'collapse',
    ),
    'filter' => array(
      'type' => 'blacklist',
      'list' => array(
        'main-menu' => 0,
        'management' => 0,
        'navigation' => 0,
        'shortcut-set-1' => 0,
        'user-menu' => 0,
      ),
    ),
  );
  $export['dhtml_menu_settings'] = $strongarm;
  
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_login_block_type';
  $strongarm->value = '1';
  $export['logintoboggan_login_block_type'] = $strongarm;
  
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'index';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'humanitarianresponse';
  $export['theme_default'] = $strongarm;

  return $export;
}
