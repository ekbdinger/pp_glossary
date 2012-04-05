<?php

/**
 * Implementation of hook_views_default_views().
 */
function pp_glossary_views_default_views() {
  $views = array();

  // Exported view: pp_glossary
  $view = new view;
  $view->name = 'pp_glossary';
  $view->description = 'A list of all content, by letter.';
  $view->tag = 'pp-cck';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Title',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 1,
        'path' => '/pp/[title]/flex',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'name' => array(
      'label' => 'Author',
      'link_to_user' => 1,
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
    ),
    'changed' => array(
      'label' => 'Last update',
      'date_format' => 'large',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'changed',
      'table' => 'node',
      'field' => 'changed',
      'relationship' => 'none',
    ),
    'name_1' => array(
      'label' => 'Term',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_taxonomy' => 0,
      'exclude' => 1,
      'id' => 'name_1',
      'table' => 'term_data',
      'field' => 'name',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'title' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'glossary' => 1,
      'ignorecase' => 0,
      'limit' => '1',
      'case' => 'upper',
      'path_case' => 'lower',
      'transform_dash' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'default_argument_user' => 0,
      'default_argument_fixed' => 'a',
      'default_argument_php' => '',
      'validate_argument_vocabulary' => array(
        1 => 0,
        2 => 0,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_php' => '',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        3 => 0,
        9 => 0,
        6 => 0,
        10 => 0,
        5 => 0,
        4 => 0,
        8 => 0,
        7 => 0,
      ),
      'override' => array(
        'button' => 'Override',
      ),
      'default_options_div_prefix' => '',
      'default_taxonomy_tid_term_page' => 0,
      'default_taxonomy_tid_node' => 0,
      'default_taxonomy_tid_limit' => 0,
      'default_taxonomy_tid_vids' => array(
        1 => 0,
        2 => 0,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'validate_argument_node_type' => array(
        'pp' => 0,
        'document_upload' => 0,
        'quiz' => 0,
        'forum' => 0,
        'panel' => 0,
        'administrative_content' => 0,
        'content_chunk' => 0,
        'interface_team' => 0,
        'page' => 0,
        'primary_page' => 0,
        'public_content' => 0,
        'sap' => 0,
        'security_attribute' => 0,
        'story' => 0,
        'video' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'pp' => 'pp',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
    'role' => array(),
    'perm' => '',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 0);
  $handler->override_option('use_ajax', '1');
  $handler->override_option('items_per_page', 70);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'name' => 'name',
      'changed' => 'changed',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'changed' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'title',
  ));
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->override_option('header', '<h3><strong><a href="http://ecwknowledgebase.com/pressflow/pp/glossary">Show All Primary Pages</a></strong></h3>
<br />');
  $handler->override_option('path', 'pp/glossary');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Glossary',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('attachment', 'Attachment', 'attachment');
  $handler->override_option('arguments', array(
    'title' => array(
      'default_action' => 'summary asc',
      'style_plugin' => 'unformatted_summary',
      'style_options' => array(
        'count' => 1,
        'override' => 0,
        'items_per_page' => '25',
        'inline' => 1,
        'separator' => ' | ',
      ),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'glossary' => 1,
      'limit' => '1',
      'case' => 'upper',
      'path_case' => 'lower',
      'transform_dash' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'default_argument_user' => 0,
      'default_argument_fixed' => 'a',
      'validate_argument_vocabulary' => array(),
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('attachment_position', 'before');
  $handler->override_option('inherit_arguments', 0);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('inherit_pager', FALSE);
  $handler->override_option('render_pager', TRUE);
  $handler->override_option('displays', array(
    'default' => 'default',
    'page' => 'page',
  ));

  $views[$view->name] = $view;

  return $views;
}
