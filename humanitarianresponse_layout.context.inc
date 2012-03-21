<?php
/**
 * @file
 * humanitarianresponse_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function humanitarianresponse_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clusters';
  $context->description = 'When accessing a cluster taxonomy term';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'clusters/*' => 'clusters/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'disable_core_blocks' => '1',
      'blocks' => array(
        'views-clusters-block' => array(
          'module' => 'views',
          'delta' => 'clusters-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-cluster' => array(
          'module' => 'menu',
          'delta' => 'menu-cluster',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-contacts-block_1' => array(
          'module' => 'views',
          'delta' => 'contacts-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-links-block_1' => array(
          'module' => 'views',
          'delta' => 'links-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a cluster taxonomy term');
  $export['clusters'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'coordination_hub';
  $context->description = 'When accessing a coordination hub taxonomy term';
  $context->tag = '';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'coordination_hubs' => 'coordination_hubs',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'disable_core_blocks' => '1',
      'blocks' => array(
        'views-highlight-block_1' => array(
          'module' => 'views',
          'delta' => 'highlight-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-meeting_minutes-block_1' => array(
          'module' => 'views',
          'delta' => 'meeting_minutes-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-documents-block_1' => array(
          'module' => 'views',
          'delta' => 'documents-block_1',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-maps_view-block_1' => array(
          'module' => 'views',
          'delta' => 'maps_view-block_1',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-coordination_hubs-block' => array(
          'module' => 'views',
          'delta' => 'coordination_hubs-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-contacts-block_1' => array(
          'module' => 'views',
          'delta' => 'contacts-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'dashboard_inactive',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a coordination hub taxonomy term');
  $export['coordination_hub'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'funding';
  $context->description = 'When accessing a funding taxonomy term';
  $context->tag = '';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'funding' => 'funding',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'disable_core_blocks' => '1',
      'blocks' => array(
        'views-highlight-block_1' => array(
          'module' => 'views',
          'delta' => 'highlight-block_1',
          'region' => 'content',
          'weight' => '-31',
        ),
        'views-documents-block_1' => array(
          'module' => 'views',
          'delta' => 'documents-block_1',
          'region' => 'content',
          'weight' => '-30',
        ),
        'views-funding-block' => array(
          'module' => 'views',
          'delta' => 'funding-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-contacts-block_1' => array(
          'module' => 'views',
          'delta' => 'contacts-block_1',
          'region' => 'sidebar_second',
          'weight' => '-31',
        ),
        'views-documents-block_4' => array(
          'module' => 'views',
          'delta' => 'documents-block_4',
          'region' => 'sidebar_second',
          'weight' => '-30',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'dashboard_inactive',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a funding taxonomy term');
  $export['funding'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide context';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'disable_core_blocks' => '1',
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'logintoboggan-logintoboggan_logged_in' => array(
          'module' => 'logintoboggan',
          'delta' => 'logintoboggan_logged_in',
          'region' => 'user_second',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_second',
          'weight' => '-8',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'facetapi-JAKZs3absS9kL1zrH6idqbCFj61Z4SpL' => array(
          'module' => 'facetapi',
          'delta' => 'JAKZs3absS9kL1zrH6idqbCFj61Z4SpL',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-Nars6CXEF2stEbUlZR8NEnqEtBDARTb1' => array(
          'module' => 'facetapi',
          'delta' => 'Nars6CXEF2stEbUlZR8NEnqEtBDARTb1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-Uz43FkEp5BeMap09k2L4q5cxiMpioh2N' => array(
          'module' => 'facetapi',
          'delta' => 'Uz43FkEp5BeMap09k2L4q5cxiMpioh2N',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-SRTVUTAsjHh8QrIHE2NMBl3MM1s3qOKp' => array(
          'module' => 'facetapi',
          'delta' => 'SRTVUTAsjHh8QrIHE2NMBl3MM1s3qOKp',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-YQrWdaYB0Jm9BGw7VcgHFswJHlxawCsl' => array(
          'module' => 'facetapi',
          'delta' => 'YQrWdaYB0Jm9BGw7VcgHFswJHlxawCsl',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-rOO3lO2B480jNa51cz03IJgosO6bbCBm' => array(
          'module' => 'facetapi',
          'delta' => 'rOO3lO2B480jNa51cz03IJgosO6bbCBm',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-WaEgyIn8f6HkMj1R536Y3vBptvKRj30W' => array(
          'module' => 'facetapi',
          'delta' => 'WaEgyIn8f6HkMj1R536Y3vBptvKRj30W',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-FKBVzvYt9xMqDr8L58X0KOiiv1D8E5Ao' => array(
          'module' => 'facetapi',
          'delta' => 'FKBVzvYt9xMqDr8L58X0KOiiv1D8E5Ao',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-stEMVIWfiMnc0Su1rCOk69GTqqvFjXLz' => array(
          'module' => 'facetapi',
          'delta' => 'stEMVIWfiMnc0Su1rCOk69GTqqvFjXLz',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-X58ryLY6CGnPf1gQI0rVOUGTHXHh4EfL' => array(
          'module' => 'facetapi',
          'delta' => 'X58ryLY6CGnPf1gQI0rVOUGTHXHh4EfL',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-Shb0Q1vWgCArrHrjHszTyhl2jaEhIjzW' => array(
          'module' => 'facetapi',
          'delta' => 'Shb0Q1vWgCArrHrjHszTyhl2jaEhIjzW',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-UrbbwTPM31dQGgHrSt9Tjdnblkw12f6E' => array(
          'module' => 'facetapi',
          'delta' => 'UrbbwTPM31dQGgHrSt9Tjdnblkw12f6E',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-cpoyWFNPOVLHvKGY6t6bb8LVM41Xs2Dm' => array(
          'module' => 'facetapi',
          'delta' => 'cpoyWFNPOVLHvKGY6t6bb8LVM41Xs2Dm',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-links-block' => array(
          'module' => 'views',
          'delta' => 'links-block',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'follow-site' => array(
          'module' => 'follow',
          'delta' => 'site',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'postscript_fourth',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide context');
  $export['sitewide'] = $context;

  return $export;
}
