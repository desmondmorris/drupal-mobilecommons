<?php

/**
 * @file
 * Content administration and module settings UI.
 */

/**
 * System settings form for basic configurations settings
 */
function mobilecommons_config_form($form, &$form_state)  {

  $form['authentication'] = array(
    '#type' => 'fieldset',
    '#title' => t('Authentication')
  );

  $form['authentication']['mobilecommons_api_auth_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email'),
    '#required' => TRUE,
    '#default_value' => variable_get('mobilecommons_api_auth_email', ''),
  );

  $form['authentication']['mobilecommons_api_auth_password'] = array(
    '#type' => 'password',
    '#title' => t('Password'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
