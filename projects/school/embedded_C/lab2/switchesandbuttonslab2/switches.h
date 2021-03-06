/*
 * buttons.h
 *
 *  Created on: Sept 16, 2014
 *      Author: Colt Thomas
 */

#ifndef SWITCHES_H_
#define SWITCHES_H_
#include <stdint.h>

// Constants used to indicate init status
#define SWITCHES_INIT_STATUS_OK 1
#define SWITCHES_INIT_STATUS_FAIL 0

// Base address value for the slide switches
#define XPAR_GPIO_SLIDE_SWITCHES_BASEADDR 0x41280000

// Value used to terminate test as all switches are up.
#define SWITCH_MAX_VALUE 15


// Initializes the SWITCHES driver software and hardware. Returns one of the STATUS values defined above.
int switches_init();

// Returns the current value of all 4 SWITCHESs as the lower 4 bits of the returned value.
// bit3 = SW3, bit2 = SW2, bit1 = SW1, bit0 = SW0.
int32_t switches_read();

// Runs a test of the switches. As you slide the switches, LEDs directly above the switches will illuminate.
// The test will run until all switches are slid upwards. When all 4 slide switches are slid upward,
// this function will return.
void switches_runTest();


#endif
