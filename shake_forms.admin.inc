<?php
// $Id: shake_forms.admin.inc 

/**
 * @file
 * Shake Forms administration functions.
 */

/**
 * Form constructor for Shake Forms settings.
 */
function shake_forms_admin_form($form, &$form_state) {
$form = array();
 $form['shake_forms_error_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Border Color for Error Field'),
    '#description' => t('By default #a94442.'),
    '#default_value' => variable_get('shake_forms_error_color', '#a94442'),
    '#size' => 10,
    '#maxlength' => 7,
  );
 $form['shake_forms_success_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Border Color for Success Field'),
    '#description' => t('By default #3c763d.'),
    '#default_value' => variable_get('shake_forms_success_color', '#3c763d'),
    '#size' => 10,
    '#maxlength' => 7,
  );
 $form['shake_forms_descriptions'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide field descriptions'),
    '#default_value' => variable_get('shake_forms_descriptions', TRUE),
  );
 $form['shake_forms_enable_admin_theme'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable on administration theme.'),
    '#description' => t('Enable Shake Forms on administartion theme.'),
    '#default_value' => variable_get('shake_forms_enable_admin_theme', TRUE),
  );

  return system_settings_form($form);
}

