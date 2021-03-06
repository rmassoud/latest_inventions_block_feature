<?php
/**
 * @file
 * latest_inventions_block_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function latest_inventions_block_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-latest_inventions-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'latest_inventions-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
