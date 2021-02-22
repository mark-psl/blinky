/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "mbed_retarget.h"


// Blinking rate in milliseconds
#define BLINKING_ON_RATE     5s
#define BLINKING_OFF_RATE    2s



int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);
    led = 1;

    while (true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_ON_RATE);
        led = !led;
        ThisThread::sleep_for(BLINKING_OFF_RATE);

    }
}
