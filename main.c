/*
 * ================================================================
 * Project Name : LED Alternating Pattern
 * File Name    : main.c
 * Author       : Your Name
 * Platform     : AVR Microcontroller (ATmega328P / ATmega16 / ATmega32)
 * Clock Speed  : 16 MHz
 * Language     : Embedded C
 *
 * Description:
 * This program generates an alternating LED pattern using
 * PORTD pins (PD2–PD7). LEDs are divided into two groups.
 * Group A and Group B turn ON and OFF alternately every 500 ms.
 *
 * ================================================================
 */

#define F_CPU 16000000UL     // Define CPU clock frequency (16 MHz)

#include <avr/io.h>          // AVR I/O register definitions
#include <util/delay.h>      // Delay functions

int main(void)
{
    /*
     * ------------------------------------------------------------
     * Configure PORTD Pins as Output
     * PD2–PD7 → Output Pins (LEDs connected)
     * Binary: 11111100
     * PD0 & PD1 remain input (usually UART pins)
     * ------------------------------------------------------------
     */
    DDRD = 0b11111100;

    /*
     * Infinite loop
     * Microcontroller continuously runs this section
     */
    while (1)
    {
        /*
         * --------------------------------------------------------
         * Pattern 1
         * Group A LEDs ON  → PD2, PD4, PD6
         * Group B LEDs OFF → PD3, PD5, PD7
         * --------------------------------------------------------
         */
        PORTD = 0b01010100;
        _delay_ms(500);      // 500 ms delay

        /*
         * --------------------------------------------------------
         * Pattern 2
         * Group A LEDs OFF
         * Group B LEDs ON
         * --------------------------------------------------------
         */
        PORTD = 0b10101000;
        _delay_ms(500);      // 500 ms delay
    }
}
