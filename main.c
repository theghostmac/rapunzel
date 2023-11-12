#include "display.h"
#include "pico/stdlib.h"

int main(void) {
    // initialize pico SDK and other necessary components.
    stdio_init_all();

    // initialize the display hardware.
    display_init();

    // main loop is endless.
    while (1) {
        // update the display with new content.
        display_update();
    }

    return 0;
}
