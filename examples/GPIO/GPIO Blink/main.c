/*
 * Project: GPIO Blink Example
 * Author: Kiran Jojare
 * Date: June 2024
 * Description: This program blinks an LED connected to a GPIO pin on the STM32 Nucleo F401RE board.
 *              The LED will toggle its state every 500 milliseconds.
 * 
 * Hardware: STM32 Nucleo F401RE
 * IDE: STM32CubeIDE
 * 
 * Pin Configuration:
 * - LED connected to GPIO pin PA5 (User LED)
 */

#include "stm32f4xx.h"

// Delay function prototype
void delay_ms(uint32_t ms);

int main(void) {
    // Enable the GPIOA peripheral clock
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    // Configure PA5 as output
    GPIOA->MODER &= ~(0x3 << (5 * 2)); // Clear mode bits for PA5
    GPIOA->MODER |= (0x1 << (5 * 2));  // Set mode bits for PA5 to output

    while (1) {
        // Toggle PA5
        GPIOA->ODR ^= (0x1 << 5);

        // Delay 500 ms
        delay_ms(500);
    }
}

void delay_ms(uint32_t ms) {
    // Simple delay loop
    for (uint32_t i = 0; ms * 16000; i++) {
        __NOP(); // No Operation, just to pass time
    }
}
