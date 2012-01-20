<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function asc_people_form_imagecache_default_presets() {
  $items = array(
    'events_thumb' => array(
      'presetname' => 'events_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '70',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'news-events_large_thumb' => array(
      'presetname' => 'news-events_large_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '120',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'news_tiny_thumb' => array(
      'presetname' => 'news_tiny_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '40',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'person_med_thumb' => array(
      'presetname' => 'person_med_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '56',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'person_small_thumb' => array(
      'presetname' => 'person_small_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '60',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'person_tiny_thumb' => array(
      'presetname' => 'person_tiny_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '46',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function asc_people_form_node_info() {
  $items = array(
    'appointment' => array(
      'name' => t('Appointment'),
      'module' => 'features',
      'description' => t('Appointments for People'),
      'has_title' => '1',
      'title_label' => t('Appointment Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'people' => array(
      'name' => t('People'),
      'module' => 'features',
      'description' => t('Add people for the site.'),
      'has_title' => '1',
      'title_label' => t('Last Name'),
      'has_body' => '1',
      'body_label' => t('Narrative Biography'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function asc_people_form_views_api() {
  return array(
    'api' => '2',
  );
}
