<?php

// $Id: themekey_example_mappers.inc,v 1.1.2.2 2011/02/04 16:58:49 mkalkbrenner Exp $

/**
 * @file
 *   Mapping functions of ThemeKey Example.
 */


/**
 * ThemeKey mapping function to set a
 * ThemeKey property's value (destination)
 * with the aid of another ThemeKey property (source).
 *
 * src: system:dummy
 * dst: example:number_one
 *
 * @param $dummy
 *   string containing current value of ThemeKey property system:dummy
 *
 * @return
 *   string "1"
 */
function themekey_example_dummy2number_one($dummy) {
  return "1";
}
