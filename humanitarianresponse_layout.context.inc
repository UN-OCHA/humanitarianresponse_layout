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
  $context->name = 'assessments';
  $context->description = 'When accessing a node of type assessment';
  $context->tag = 'nodes';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'assessment' => 'assessment',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'resources/assessment-registry',
    'menu' => 'resources',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a node of type assessment');
  t('nodes');
  $export['assessments'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clusters';
  $context->description = 'When accessing a cluster taxonomy term';
  $context->tag = 'clusters';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'clusters/*' => 'clusters/*',
        '~clusters/*/*' => '~clusters/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
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
        'views-documents-cluster_guidelines' => array(
          'module' => 'views',
          'delta' => 'documents-cluster_guidelines',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-documents-block_per_term' => array(
          'module' => 'views',
          'delta' => 'documents-block_per_term',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-maps_view-block_1' => array(
          'module' => 'views',
          'delta' => 'maps_view-block_1',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-contacts-block_1' => array(
          'module' => 'views',
          'delta' => 'contacts-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-documents-cluster_key' => array(
          'module' => 'views',
          'delta' => 'documents-cluster_key',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-links-block_1' => array(
          'module' => 'views',
          'delta' => 'links-block_1',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
    'breadcrumb' => 'clusters',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a cluster taxonomy term');
  t('clusters');
  $export['clusters'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clusters_all';
  $context->description = 'When accessing all pages within a cluster';
  $context->tag = 'clusters';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'clusters/*' => 'clusters/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-cluster' => array(
          'module' => 'menu',
          'delta' => 'menu-cluster',
          'region' => 'sidebar_first',
          'weight' => '-35',
        ),
        'views-clusters-block' => array(
          'module' => 'views',
          'delta' => 'clusters-block',
          'region' => 'sidebar_first',
          'weight' => '-34',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing all pages within a cluster');
  t('clusters');
  $export['clusters_all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contacts';
  $context->description = 'When accessing a node of type contact';
  $context->tag = 'nodes';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contact' => 'contact',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'coordination/operational-presence',
    'menu' => 'node/1',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a node of type contact');
  t('nodes');
  $export['contacts'] = $context;

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
      'blocks' => array(
        'views-highlight-block_1' => array(
          'module' => 'views',
          'delta' => 'highlight-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-documents-block_per_term' => array(
          'module' => 'views',
          'delta' => 'documents-block_per_term',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-meeting_minutes-block_1' => array(
          'module' => 'views',
          'delta' => 'meeting_minutes-block_1',
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
      ),
    ),
    'breadcrumb' => 'coordination/coordination-hubs',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a coordination hub taxonomy term');
  $export['coordination_hub'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'documents';
  $context->description = 'When accessing a node of type document';
  $context->tag = 'nodes';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'document' => 'document',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'resources',
    'menu' => 'resources',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a node of type document');
  t('nodes');
  $export['documents'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'emergencies';
  $context->description = '';
  $context->tag = 'emergencies';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'emergencies' => 'emergencies',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
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
        'views-documents-block_per_term' => array(
          'module' => 'views',
          'delta' => 'documents-block_per_term',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-maps_view-block_1' => array(
          'module' => 'views',
          'delta' => 'maps_view-block_1',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-emergencies-block' => array(
          'module' => 'views',
          'delta' => 'emergencies-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-contacts-block_1' => array(
          'module' => 'views',
          'delta' => 'contacts-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-links-block_1' => array(
          'module' => 'views',
          'delta' => 'links-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('emergencies');
  $export['emergencies'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'emergencies_all';
  $context->description = 'Defined in emergency subpages';
  $context->tag = 'emergencies';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'emergencies/*' => 'emergencies/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-emergencies-block' => array(
          'module' => 'views',
          'delta' => 'emergencies-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Defined in emergency subpages');
  t('emergencies');
  $export['emergencies_all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events';
  $context->description = 'When accessing a node of type event';
  $context->tag = 'nodes';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'media-center/events',
    'menu' => 'node/3',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a node of type event');
  t('nodes');
  $export['events'] = $context;

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
      'blocks' => array(
        'views-highlight-block_1' => array(
          'module' => 'views',
          'delta' => 'highlight-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-documents-block_per_term' => array(
          'module' => 'views',
          'delta' => 'documents-block_per_term',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-contacts-block_1' => array(
          'module' => 'views',
          'delta' => 'contacts-block_1',
          'region' => 'sidebar_second',
          'weight' => '-31',
        ),
        'views-documents-funding_featured' => array(
          'module' => 'views',
          'delta' => 'documents-funding_featured',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'breadcrumb' => 'funding',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a funding taxonomy term');
  $export['funding'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-media-media_home_slideshow' => array(
          'module' => 'views',
          'delta' => 'media-media_home_slideshow',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-documents-documents_home_rep' => array(
          'module' => 'views',
          'delta' => 'documents-documents_home_rep',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-maps_view-visuals_home' => array(
          'module' => 'views',
          'delta' => 'maps_view-visuals_home',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-documents-documents_home_feat' => array(
          'module' => 'views',
          'delta' => 'documents-documents_home_feat',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-clusters-block_1' => array(
          'module' => 'views',
          'delta' => 'clusters-block_1',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-documents-documents_home_key' => array(
          'module' => 'views',
          'delta' => 'documents-documents_home_key',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-news-news_home' => array(
          'module' => 'views',
          'delta' => 'news-news_home',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-home_calendar' => array(
          'module' => 'boxes',
          'delta' => 'home_calendar',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'boxes-home_cod' => array(
          'module' => 'boxes',
          'delta' => 'home_cod',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-media-media_home_block' => array(
          'module' => 'views',
          'delta' => 'media-media_home_block',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['home_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'humanitarian_profiles';
  $context->description = 'When accessing a node of type humanitarian profile';
  $context->tag = 'nodes';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'humanitarian_profile' => 'humanitarian_profile',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'visuals-data/humanitarian-profile',
    'menu' => 'node/2',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a node of type humanitarian profile');
  t('nodes');
  $export['humanitarian_profiles'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'maps';
  $context->description = 'When accessing a node of type map';
  $context->tag = 'nodes';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'map' => 'map',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'visuals-data/visuals',
    'menu' => 'node/2',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a node of type map');
  t('nodes');
  $export['maps'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = 'When accessing a node of type news';
  $context->tag = 'nodes';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'media-center/news',
    'menu' => 'node/3',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a node of type news');
  t('nodes');
  $export['news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = 'On search pages';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-Shb0Q1vWgCArrHrjHszTyhl2jaEhIjzW' => array(
          'module' => 'facetapi',
          'delta' => 'Shb0Q1vWgCArrHrjHszTyhl2jaEhIjzW',
          'region' => 'sidebar_second',
          'weight' => '-31',
        ),
        'facetapi-Nars6CXEF2stEbUlZR8NEnqEtBDARTb1' => array(
          'module' => 'facetapi',
          'delta' => 'Nars6CXEF2stEbUlZR8NEnqEtBDARTb1',
          'region' => 'sidebar_second',
          'weight' => '-30',
        ),
        'facetapi-SRTVUTAsjHh8QrIHE2NMBl3MM1s3qOKp' => array(
          'module' => 'facetapi',
          'delta' => 'SRTVUTAsjHh8QrIHE2NMBl3MM1s3qOKp',
          'region' => 'sidebar_second',
          'weight' => '-29',
        ),
        'facetapi-cpoyWFNPOVLHvKGY6t6bb8LVM41Xs2Dm' => array(
          'module' => 'facetapi',
          'delta' => 'cpoyWFNPOVLHvKGY6t6bb8LVM41Xs2Dm',
          'region' => 'sidebar_second',
          'weight' => '-28',
        ),
        'facetapi-YQrWdaYB0Jm9BGw7VcgHFswJHlxawCsl' => array(
          'module' => 'facetapi',
          'delta' => 'YQrWdaYB0Jm9BGw7VcgHFswJHlxawCsl',
          'region' => 'sidebar_second',
          'weight' => '-27',
        ),
        'facetapi-WaEgyIn8f6HkMj1R536Y3vBptvKRj30W' => array(
          'module' => 'facetapi',
          'delta' => 'WaEgyIn8f6HkMj1R536Y3vBptvKRj30W',
          'region' => 'sidebar_second',
          'weight' => '-26',
        ),
        'facetapi-FKBVzvYt9xMqDr8L58X0KOiiv1D8E5Ao' => array(
          'module' => 'facetapi',
          'delta' => 'FKBVzvYt9xMqDr8L58X0KOiiv1D8E5Ao',
          'region' => 'sidebar_second',
          'weight' => '-25',
        ),
        'facetapi-UrbbwTPM31dQGgHrSt9Tjdnblkw12f6E' => array(
          'module' => 'facetapi',
          'delta' => 'UrbbwTPM31dQGgHrSt9Tjdnblkw12f6E',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'facetapi-X58ryLY6CGnPf1gQI0rVOUGTHXHh4EfL' => array(
          'module' => 'facetapi',
          'delta' => 'X58ryLY6CGnPf1gQI0rVOUGTHXHh4EfL',
          'region' => 'sidebar_second',
          'weight' => '-23',
        ),
        'facetapi-rOO3lO2B480jNa51cz03IJgosO6bbCBm' => array(
          'module' => 'facetapi',
          'delta' => 'rOO3lO2B480jNa51cz03IJgosO6bbCBm',
          'region' => 'sidebar_second',
          'weight' => '-22',
        ),
        'facetapi-JAKZs3absS9kL1zrH6idqbCFj61Z4SpL' => array(
          'module' => 'facetapi',
          'delta' => 'JAKZs3absS9kL1zrH6idqbCFj61Z4SpL',
          'region' => 'sidebar_second',
          'weight' => '-21',
        ),
        'facetapi-stEMVIWfiMnc0Su1rCOk69GTqqvFjXLz' => array(
          'module' => 'facetapi',
          'delta' => 'stEMVIWfiMnc0Su1rCOk69GTqqvFjXLz',
          'region' => 'sidebar_second',
          'weight' => '-20',
        ),
        'facetapi-Uz43FkEp5BeMap09k2L4q5cxiMpioh2N' => array(
          'module' => 'facetapi',
          'delta' => 'Uz43FkEp5BeMap09k2L4q5cxiMpioh2N',
          'region' => 'sidebar_second',
          'weight' => '-19',
        ),
      ),
    ),
    'breadcrumb' => '<front>',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('On search pages');
  $export['search'] = $context;

  return $export;
}
