<?php
/**
 * @file
 * hr_infographics.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hr_infographics_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:hr_infographic:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hr_infographic';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_bryant_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '68d4afa7-0cb9-4616-952e-8c1d58b6d2ff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-79ca7eac-2616-4734-a284-7489918bc739';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '79ca7eac-2616-4734-a284-7489918bc739';
    $display->content['new-79ca7eac-2616-4734-a284-7489918bc739'] = $pane;
    $display->panels['contentmain'][0] = 'new-79ca7eac-2616-4734-a284-7489918bc739';
    $pane = new stdClass();
    $pane->pid = 'new-f3b49e1f-c08e-4629-9bfb-11e58d8dcb6b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_infographics_panes-thumbnail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f3b49e1f-c08e-4629-9bfb-11e58d8dcb6b';
    $display->content['new-f3b49e1f-c08e-4629-9bfb-11e58d8dcb6b'] = $pane;
    $display->panels['contentmain'][1] = 'new-f3b49e1f-c08e-4629-9bfb-11e58d8dcb6b';
    $pane = new stdClass();
    $pane->pid = 'new-c7346f0f-c921-4dd1-858b-189fa86fe8cf';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:hr_core_share_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c7346f0f-c921-4dd1-858b-189fa86fe8cf';
    $display->content['new-c7346f0f-c921-4dd1-858b-189fa86fe8cf'] = $pane;
    $display->panels['contentmain'][2] = 'new-c7346f0f-c921-4dd1-858b-189fa86fe8cf';
    $pane = new stdClass();
    $pane->pid = 'new-a8930dee-b6ec-4d50-a0a6-38f0ba862a13';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files_collection';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'field_collection_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => TRUE,
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a8930dee-b6ec-4d50-a0a6-38f0ba862a13';
    $display->content['new-a8930dee-b6ec-4d50-a0a6-38f0ba862a13'] = $pane;
    $display->panels['contentmain'][3] = 'new-a8930dee-b6ec-4d50-a0a6-38f0ba862a13';
    $pane = new stdClass();
    $pane->pid = 'new-cc62b688-7b0a-4cb7-b9f0-673edf08e990';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'cc62b688-7b0a-4cb7-b9f0-673edf08e990';
    $display->content['new-cc62b688-7b0a-4cb7-b9f0-673edf08e990'] = $pane;
    $display->panels['contentmain'][4] = 'new-cc62b688-7b0a-4cb7-b9f0-673edf08e990';
    $pane = new stdClass();
    $pane->pid = 'new-34067174-4f68-4da5-b6ab-620b0318fe6d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '34067174-4f68-4da5-b6ab-620b0318fe6d';
    $display->content['new-34067174-4f68-4da5-b6ab-620b0318fe6d'] = $pane;
    $display->panels['contentmain'][5] = 'new-34067174-4f68-4da5-b6ab-620b0318fe6d';
    $pane = new stdClass();
    $pane->pid = 'new-5a47c1a9-7199-4891-b139-56f4b8177c1f';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5a47c1a9-7199-4891-b139-56f4b8177c1f';
    $display->content['new-5a47c1a9-7199-4891-b139-56f4b8177c1f'] = $pane;
    $display->panels['sidebar'][0] = 'new-5a47c1a9-7199-4891-b139-56f4b8177c1f';
    $pane = new stdClass();
    $pane->pid = 'new-0fcd3266-45a5-467e-883a-6ab09958de84';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organizations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0fcd3266-45a5-467e-883a-6ab09958de84';
    $display->content['new-0fcd3266-45a5-467e-883a-6ab09958de84'] = $pane;
    $display->panels['sidebar'][1] = 'new-0fcd3266-45a5-467e-883a-6ab09958de84';
    $pane = new stdClass();
    $pane->pid = 'new-3365845b-b5c8-42a7-b068-eec4be167383';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sectors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3365845b-b5c8-42a7-b068-eec4be167383';
    $display->content['new-3365845b-b5c8-42a7-b068-eec4be167383'] = $pane;
    $display->panels['sidebar'][2] = 'new-3365845b-b5c8-42a7-b068-eec4be167383';
    $pane = new stdClass();
    $pane->pid = 'new-ff85dd49-6859-4753-955c-5a4dbf5fee14';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bundles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ff85dd49-6859-4753-955c-5a4dbf5fee14';
    $display->content['new-ff85dd49-6859-4753-955c-5a4dbf5fee14'] = $pane;
    $display->panels['sidebar'][3] = 'new-ff85dd49-6859-4753-955c-5a4dbf5fee14';
    $pane = new stdClass();
    $pane->pid = 'new-283d5472-d1e7-4148-a6c2-cf5cf4455216';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_publication_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '283d5472-d1e7-4148-a6c2-cf5cf4455216';
    $display->content['new-283d5472-d1e7-4148-a6c2-cf5cf4455216'] = $pane;
    $display->panels['sidebar'][4] = 'new-283d5472-d1e7-4148-a6c2-cf5cf4455216';
    $pane = new stdClass();
    $pane->pid = 'new-afb5e1e4-87cd-4030-939a-69f3bbefd3bc';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_infographic_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'afb5e1e4-87cd-4030-939a-69f3bbefd3bc';
    $display->content['new-afb5e1e4-87cd-4030-939a-69f3bbefd3bc'] = $pane;
    $display->panels['sidebar'][5] = 'new-afb5e1e4-87cd-4030-939a-69f3bbefd3bc';
    $pane = new stdClass();
    $pane->pid = 'new-bf281996-18b9-4140-8da9-166b013b6aff';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_locations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'bf281996-18b9-4140-8da9-166b013b6aff';
    $display->content['new-bf281996-18b9-4140-8da9-166b013b6aff'] = $pane;
    $display->panels['sidebar'][6] = 'new-bf281996-18b9-4140-8da9-166b013b6aff';
    $pane = new stdClass();
    $pane->pid = 'new-e7787ab9-d452-461e-9bf3-d5520cb6ffe8';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_themes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e7787ab9-d452-461e-9bf3-d5520cb6ffe8';
    $display->content['new-e7787ab9-d452-461e-9bf3-d5520cb6ffe8'] = $pane;
    $display->panels['sidebar'][7] = 'new-e7787ab9-d452-461e-9bf3-d5520cb6ffe8';
    $pane = new stdClass();
    $pane->pid = 'new-f6776cb7-bc3f-46fa-8b09-1bd361c364f1';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_coordination_hubs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'f6776cb7-bc3f-46fa-8b09-1bd361c364f1';
    $display->content['new-f6776cb7-bc3f-46fa-8b09-1bd361c364f1'] = $pane;
    $display->panels['sidebar'][8] = 'new-f6776cb7-bc3f-46fa-8b09-1bd361c364f1';
    $pane = new stdClass();
    $pane->pid = 'new-ff07b1f1-3d78-4e5b-a839-834b58abe87f';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_disasters';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'ff07b1f1-3d78-4e5b-a839-834b58abe87f';
    $display->content['new-ff07b1f1-3d78-4e5b-a839-834b58abe87f'] = $pane;
    $display->panels['sidebar'][9] = 'new-ff07b1f1-3d78-4e5b-a839-834b58abe87f';
    $pane = new stdClass();
    $pane->pid = 'new-f70122b8-c759-4bb8-8ca2-055c8d4dd3c9';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'f70122b8-c759-4bb8-8ca2-055c8d4dd3c9';
    $display->content['new-f70122b8-c759-4bb8-8ca2-055c8d4dd3c9'] = $pane;
    $display->panels['sidebar'][10] = 'new-f70122b8-c759-4bb8-8ca2-055c8d4dd3c9';
    $pane = new stdClass();
    $pane->pid = 'new-4409f83f-ec67-4d0c-9f36-6c04ed569eab';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_methods';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '4409f83f-ec67-4d0c-9f36-6c04ed569eab';
    $display->content['new-4409f83f-ec67-4d0c-9f36-6c04ed569eab'] = $pane;
    $display->panels['sidebar'][11] = 'new-4409f83f-ec67-4d0c-9f36-6c04ed569eab';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-5a47c1a9-7199-4891-b139-56f4b8177c1f';
  $panelizer->display = $display;
  $export['node:hr_infographic:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:hr_infographic:default:search_result';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hr_infographic';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'search_result';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6b4fcae5-9918-44f9-b6df-392df1fb1243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9ff01383-1ddc-4045-a3da-b48800a6a6ff';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organizations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ff01383-1ddc-4045-a3da-b48800a6a6ff';
    $display->content['new-9ff01383-1ddc-4045-a3da-b48800a6a6ff'] = $pane;
    $display->panels['contentmain'][0] = 'new-9ff01383-1ddc-4045-a3da-b48800a6a6ff';
    $pane = new stdClass();
    $pane->pid = 'new-05c8d42f-f81b-432b-abdf-bac6bb42a528';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_publication_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '05c8d42f-f81b-432b-abdf-bac6bb42a528';
    $display->content['new-05c8d42f-f81b-432b-abdf-bac6bb42a528'] = $pane;
    $display->panels['contentmain'][1] = 'new-05c8d42f-f81b-432b-abdf-bac6bb42a528';
    $pane = new stdClass();
    $pane->pid = 'new-a9e5335d-0d6e-4429-98f4-fb55d117e5bd';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_infographic_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a9e5335d-0d6e-4429-98f4-fb55d117e5bd';
    $display->content['new-a9e5335d-0d6e-4429-98f4-fb55d117e5bd'] = $pane;
    $display->panels['contentmain'][2] = 'new-a9e5335d-0d6e-4429-98f4-fb55d117e5bd';
    $pane = new stdClass();
    $pane->pid = 'new-44df886e-c767-4935-a2bf-d9e34238aa2f';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:hr_core_share_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '44df886e-c767-4935-a2bf-d9e34238aa2f';
    $display->content['new-44df886e-c767-4935-a2bf-d9e34238aa2f'] = $pane;
    $display->panels['contentmain'][3] = 'new-44df886e-c767-4935-a2bf-d9e34238aa2f';
    $pane = new stdClass();
    $pane->pid = 'new-3dbbe856-d385-4d20-8e18-20a651a7ac79';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files_collection';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3dbbe856-d385-4d20-8e18-20a651a7ac79';
    $display->content['new-3dbbe856-d385-4d20-8e18-20a651a7ac79'] = $pane;
    $display->panels['contentmain'][4] = 'new-3dbbe856-d385-4d20-8e18-20a651a7ac79';
    $pane = new stdClass();
    $pane->pid = 'new-f412141a-7c07-4d88-a9be-5a07ccc62d57';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_infographics_panes-thumbnail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f412141a-7c07-4d88-a9be-5a07ccc62d57';
    $display->content['new-f412141a-7c07-4d88-a9be-5a07ccc62d57'] = $pane;
    $display->panels['sidebar'][0] = 'new-f412141a-7c07-4d88-a9be-5a07ccc62d57';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:hr_infographic:default:search_result'] = $panelizer;

  return $export;
}
