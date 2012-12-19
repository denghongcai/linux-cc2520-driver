//////////////////////////////
// Configuration for driver
/////////////////////////////

// Physical mapping of GPIO pins on the CC2520
// to GPIO pins on the linux microcontroller.

#define CC2520_GPIO_0 0
#define CC2520_GPIO_1 1
#define CC2520_GPIO_2 2
#define CC2520_GPIO_3 3
#define CC2520_GPIO_4 4
#define CC2520_GPIO_5 5
#define CC2520_RESET 17

// Logical mapping of CC2520 GPIO pins to
// functions, we're going to keep these static
// for now, and map to the defaults, which
// mirror the CC2420 implementation.

// A 1Mhz Clock with 50% duty cycle.
#define CC2520_CLOCK CC2520_GPIO_0

// High when at least one byte is
// in the RX FIFO buffer
#define CC2520_FIFO CC2520_GPIO_1

// High when the number of bytes exceeds
// a programmed theshold or a full packet
// has been received.
#define CC2520_FIFOP CC2520_GPIO_2

// Clear channel assessment
#define CC2520_CCA CC2520_GPIO_3

// Start frame delimiter
#define CC2520_SFD CC2520_GPIO_4

//////////////////////////////
// Structs and definitions
/////////////////////////////