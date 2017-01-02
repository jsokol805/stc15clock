#ifndef __STC15_BUTTONS_H_
#define __STC15_BUTTONS_H_

#include <8052.h>
#include <stdint.h>

#define HOUR_BTN 0
#define HOUR_PIN P3_1
#define MINUTE_BTN 1
#define MINUTE_PIN P3_0

/* checks button state and calls 'action' if state changes to high */
void button_check(uint8_t /* index */,
                  uint8_t /* value */,
                  void (* /* action */)());

void read_buttons();

#endif  // __STC15_BUTTONS_H_

