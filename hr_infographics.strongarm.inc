<?php
/**
 * @file
 * hr_infographics.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hr_infographics_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__hr_infographic';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '17',
        ),
        'redirect' => array(
          'weight' => '18',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__hr_infographic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_hr_infographic';
  $strongarm->value = '0';
  $export['language_content_type_hr_infographic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_hr_infographic';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_hr_infographic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_hr_infographic';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_hr_infographic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_hr_infographic';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_hr_infographic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_hr_infographic';
  $strongarm->value = '1';
  $export['node_preview_hr_infographic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_hr_infographic';
  $strongarm->value = 0;
  $export['node_submitted_hr_infographic'] = $strongarm;

  return $export;
}
