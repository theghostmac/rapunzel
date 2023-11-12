#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/time.h"
#include "hardware/gpio.h"

// Use the default LED pin provided by the Pico SDK
#define LED_PIN PICO_DEFAULT_LED_PIN

int main() {
    stdio_init_all(); // Initialize stdio for printing to the console

    // Initialize the Pico SDK runtime environment
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (1) {
        // Toggle the LED
        gpio_put(LED_PIN, 1);
        sleep_ms(500);
        gpio_put(LED_PIN, 0);
        sleep_ms(500);
    }

    return 0;
}
