<?php

/**
 * Implementation of hook_strongarm().
 */
function fbib_base_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addi_wsdl_url';
  $strongarm->value = 'http://moreinfo.addi.dk/2.1/';
  $export['addi_wsdl_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_da';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 1,
    'popup_position' => 0,
    'popup_info' => array(
      'value' => '<p>Vi bruger cookies på fredericiabib.dk<br>
<p>Du accepterer brug af cookies når du klikker på hjemmesiden</p>',
      'format' => '1',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_agreed' => array(
      'value' => '<h2>Thank you for accepting cookies</h2>
<p>You can now hide this message or find out more about cookies.</p>',
      'format' => '2',
    ),
    'popup_link' => 'http://www.fredericiabib.dk/privatlivspolitik',
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
  );
  $export['eu_cookie_compliance_da'] = $strongarm;

  return $export;
}
