#include "pico/stdlib.h"

int main() {
  // LD2 (Green LED) is tied directly to GPIO25 on the W6300-EVB-Pico2
  const uint LED_PIN = 25;

  // Initialize the chosen GPIO pin
  gpio_init(LED_PIN);

  // Set the pin direction to output
  gpio_set_dir(LED_PIN, GPIO_OUT);

  // Infinite loop to toggle the LED status
  while (true) {
    gpio_put(LED_PIN, 1); // Turn the LED on
    sleep_ms(500);        // Delay for 500 milliseconds
    gpio_put(LED_PIN, 0); // Turn the LED off
    sleep_ms(500);        // Delay for 500 milliseconds
  }
}
