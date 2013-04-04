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
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'clusters' => 'clusters',
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
          'weight' => '7',
        ),
        'views-documents-cluster_key' => array(
          'module' => 'views',
          'delta' => 'documents-cluster_key',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-contacts-block_2' => array(
          'module' => 'views',
          'delta' => 'contacts-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
    'breadcrumb' => 'clusters',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a cluster taxonomy term');
  t('taxonomy');
  $export['clusters'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clusters_all';
  $context->description = 'When accessing all pages within a cluster';
  $context->tag = 'taxonomy';
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
        'views-clusters-block' => array(
          'module' => 'views',
          'delta' => 'clusters-block',
          'region' => 'sidebar_first',
          'weight' => '-30',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing all pages within a cluster');
  t('taxonomy');
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
  $context->tag = 'taxonomy';
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
          'weight' => '10',
        ),
        'views-contacts-block_2' => array(
          'module' => 'views',
          'delta' => 'contacts-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-coordination_hubs-block' => array(
          'module' => 'views',
          'delta' => 'coordination_hubs-block',
          'region' => 'sidebar_first',
          'weight' => '-35',
        ),
      ),
    ),
    'breadcrumb' => 'coordination/coordination-hubs',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a coordination hub taxonomy term');
  t('taxonomy');
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
  $context->description = 'When accessing an emergency taxonomy term';
  $context->tag = 'taxonomy';
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
          'weight' => '10',
        ),
        'views-contacts-block_2' => array(
          'module' => 'views',
          'delta' => 'contacts-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-emergencies-block' => array(
          'module' => 'views',
          'delta' => 'emergencies-block',
          'region' => 'sidebar_first',
          'weight' => '-35',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing an emergency taxonomy term');
  t('taxonomy');
  $export['emergencies'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'emergencies_all';
  $context->description = 'Defined in emergency subpages';
  $context->tag = 'taxonomy';
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
          'weight' => '-35',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Defined in emergency subpages');
  t('taxonomy');
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
  $context->tag = 'taxonomy';
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
          'weight' => '7',
        ),
        'views-documents-funding_featured' => array(
          'module' => 'views',
          'delta' => 'documents-funding_featured',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-contacts-block_2' => array(
          'module' => 'views',
          'delta' => 'contacts-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
    'breadcrumb' => 'funding',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a funding taxonomy term');
  t('taxonomy');
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
        'views-documents-documents_home_key' => array(
          'module' => 'views',
          'delta' => 'documents-documents_home_key',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-maps_view-visuals_home' => array(
          'module' => 'views',
          'delta' => 'maps_view-visuals_home',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-media-block' => array(
          'module' => 'views',
          'delta' => 'media-block',
          'region' => 'content_second',
          'weight' => '-10',
        ),
        'views-news-block_2' => array(
          'module' => 'views',
          'delta' => 'news-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-documents-documents_home_rep' => array(
          'module' => 'views',
          'delta' => 'documents-documents_home_rep',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-events-block_2' => array(
          'module' => 'views',
          'delta' => 'events-block_2',
          'region' => 'sidebar_second',
          'weight' => '-38',
        ),
        'views-documents-documents_home_feat' => array(
          'module' => 'views',
          'delta' => 'documents-documents_home_feat',
          'region' => 'sidebar_second',
          'weight' => '-37',
        ),
        'boxes-quick_links' => array(
          'module' => 'boxes',
          'delta' => 'quick_links',
          'region' => 'sidebar_third',
          'weight' => '-10',
        ),
        'views-clusters-block_1' => array(
          'module' => 'views',
          'delta' => 'clusters-block_1',
          'region' => 'sidebar_third',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'front_page',
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
  $context->name = 'locations';
  $context->description = 'When accessing a location taxonomy term';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'locations' => 'locations',
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
          'weight' => '10',
        ),
        'views-contacts-block_2' => array(
          'module' => 'views',
          'delta' => 'contacts-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a location taxonomy term');
  t('taxonomy');
  $export['locations'] = $context;

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
  $context->name = 'themes';
  $context->description = 'When accessing a theme taxonomy term';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'themes' => 'themes',
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
          'weight' => '10',
        ),
        'views-contacts-block_2' => array(
          'module' => 'views',
          'delta' => 'contacts-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-themes-block' => array(
          'module' => 'views',
          'delta' => 'themes-block',
          'region' => 'sidebar_first',
          'weight' => '-35',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When accessing a theme taxonomy term');
  t('taxonomy');
  $export['themes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'themes_all';
  $context->description = 'Defined in themes subpages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'themes/*' => 'themes/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-themes-block' => array(
          'module' => 'views',
          'delta' => 'themes-block',
          'region' => 'sidebar_first',
          'weight' => '-35',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Defined in themes subpages');
  t('taxonomy');
  $export['themes_all'] = $context;

  return $export;
}
