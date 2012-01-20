<?php

/**
 * Implementation of hook_custom_formatters_defaults().
 */
function asc_people_form_custom_formatters_defaults() {
  return array(
    'image_alt' => array(
      'name' => 'image_alt',
      'label' => 'Image with Alt and Title',
      'field_types' => 'a:1:{i:0;s:9:"filefield";}',
      'multiple' => '0',
      'description' => 'A news image with its node\'s title as its title and alt text',
      'mode' => 'advanced',
      'code' => 'return "<img src=\\"/{$element[\'#item\'][\'filepath\']}\\" alt=\\"{$element[\'#node\']->title}\\" title=\\"{$element[\'#node\']->title}\\" />";',
      'status' => '1',
      'source' => 'database',
    ),
    'newline_to_br' => array(
      'name' => 'newline_to_br',
      'label' => 'Newline to BR',
      'field_types' => 'a:1:{i:0;s:4:"text";}',
      'multiple' => '0',
      'description' => 'Translates \\n to <br/>',
      'mode' => 'advanced',
      'code' => 'return str_replace("\\n", "<br/>", $element[\'#item\'][\'value\']);',
      'status' => '1',
      'source' => 'database',
    ),
    'phone' => array(
      'name' => 'phone',
      'label' => 'Phone Number',
      'field_types' => 'a:1:{i:0;s:4:"text";}',
      'multiple' => '0',
      'description' => '',
      'mode' => 'advanced',
      'code' => '$default_area_code = "614";
    
    $phone = $element[\'#item\'][\'value\'];
    $phone_split = array();
    preg_match(\'/((\\(?([0-9]{3})\\)?[. -]?)?([0-9]{3})[. -]?([0-9]{4}))/\', $phone, $phone_split);
    
    if($phone_split[4] && $phone_split[5] && $phone_split[3] || count($default_area_code)){
        if($phone_split[3]){
            $area_code = $phone_split[3].\'.\';
        }else{
            $area_code = $default_area_code.\'.\';
        }
        $phone = $area_code.$phone_split[4].\'.\'.$phone_split[5];
    }
    
    return $phone;',
      'status' => '1',
      'source' => 'database',
    ),
  );
}
