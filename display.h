#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdbool.h>

// Function to initialize the display.
bool display_init();

// Function to update the display content.
void display_update();

// Function to set text on the display.
void display_set_text(const char* text);

#endif // DISPLAY_H