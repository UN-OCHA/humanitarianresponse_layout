<?php
/**
 * @file
 * humanitarianresponse_layout.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function humanitarianresponse_layout_default_fe_block_settings() {
  $export = array();

  // bartik
  $theme = array();

  $theme['block-contact'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Contact',
    'cache' => -1,
    'machine_name' => 'contact',
  );

  $theme['block-legal'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Legal',
    'cache' => -1,
    'machine_name' => 'legal',
  );

  $theme['follow-site'] = array(
    'module' => 'follow',
    'delta' => 'site',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );
  
  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );
  
  $theme['logintoboggan-logintoboggan_logged_in'] = array(
    'module' => 'logintoboggan',
    'delta' => 'logintoboggan_logged_in',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );
  
  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );
  
  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-links-block'] = array(
    'module' => 'views',
    'delta' => 'links-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['bartik'] = $theme;

  // humanitarianresponse
  $theme = array();

  $theme['block-contact'] = array(
    'module' => 'block',
    'theme' => 'humanitarianresponse',
    'status' => '1',
    'weight' => '0',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Contact',
    'cache' => -1,
    'machine_name' => 'contact',
  );

  $theme['block-legal'] = array(
    'module' => 'block',
    'theme' => 'humanitarianresponse',
    'status' => '1',
    'weight' => '0',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Legal',
    'cache' => -1,
    'machine_name' => 'legal',
  );

  $theme['follow-site'] = array(
    'module' => 'follow',
    'delta' => 'site',
    'theme' => 'humanitarianresponse',
    'status' => '1',
    'weight' => '0',
    'region' => 'postscript_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );
  
  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'humanitarianresponse',
    'status' => '1',
    'weight' => '-13',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );
  
  $theme['logintoboggan-logintoboggan_logged_in'] = array(
    'module' => 'logintoboggan',
    'delta' => 'logintoboggan_logged_in',
    'theme' => 'humanitarianresponse',
    'status' => '1',
    'weight' => '-8',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'humanitarianresponse',
    'status' => '1',
    'weight' => '-7',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );
  
  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'humanitarianresponse',
    'status' => '1',
    'weight' => '-13',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );
  
  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'humanitarianresponse',
    'status' => '1',
    'weight' => '-14',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-links-block'] = array(
    'module' => 'views',
    'delta' => 'links-block',
    'theme' => 'humanitarianresponse',
    'status' => '1',
    'weight' => '-5',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['humanitarianresponse'] = $theme;

  // seven
  $theme = array();

  $theme['block-contact'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'contact',
  );

  $theme['block-legal'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'legal',
  );

  $theme['follow-site'] = array(
    'module' => 'follow',
    'delta' => 'site',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 1,
  );
  
  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );
  
  $theme['logintoboggan-logintoboggan_logged_in'] = array(
    'module' => 'logintoboggan',
    'delta' => 'logintoboggan_logged_in',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );
  
  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );
  
  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-links-block'] = array(
    'module' => 'views',
    'delta' => 'links-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
