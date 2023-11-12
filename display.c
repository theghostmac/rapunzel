#include "display.h"

// In-memory representation of the display.
static uint16_t display_buffer[DISPLAY_WIDTH * DISPLAY_HEIGHT];

// Initialize the display.
void display_init(void) {
    // initialize the display hardware.

    // Clear the display buffer.
    for (int i = 0; i < DISPLAY_WIDTH * DISPLAY_HEIGHT; i++) {
        display_buffer[i] = 0;
    }
}

void display_update(void) {
    // update the display hardware with contents of the display buffer.
}

void display_draw_pixel(int x, int y, uint16_t color) {
    // draw a pixel at (x, y) with color.
    if (x >= 0 && x < DISPLAY_WIDTH && y >= 0 && y < DISPLAY_HEIGHT) {
        display_buffer[y * DISPLAY_WIDTH + x] = color;
    }
}