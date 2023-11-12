/*
 * The display module will use the size dimensions of the magic mirror.
 * give higher resolution for higher quality.
 * use LCD or OLED display.
 * viewing angle should be wide to allow for better viewing.
 * possibly add touch capability.
 * higher brightness for better contrast.
 * TFT LCD display, like the 2.8-inch Adafruit PiTFT fits.
 * Buy this later: https://hub360.com.ng/product/3-2-inches-tft-touch-lcd-module/
 */

#include "display.h"
#include <stdio.h>
#include "pico/stdlib.h"
#include "tft"