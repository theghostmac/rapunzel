#include <stdint.h>

#ifndef DISPLAY_H
#define DISPLAY_H

// Define display dimensions.
#define DISPLAY_WIDTH 240
#define DISPLAY_HEIGHT 135

// function to initialize the display
void display_init(void);

// function to update the display with new content.
void display_update(void);

// function to draw a pixed at (x, y) with color.
void display_draw_pixel(int x, int y, uint16_t color);

#endif