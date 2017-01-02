#ifndef __STC15_BUTTONS_H_
#define __STC15_BUTTONS_H_

#include <8052.h>
#include <stdint.h>
#include <stdbool.h>

#define UPPER_BTN 0
#define UPPER_PIN P3_1
#define LOWER_BTN 1
#define LOWER_PIN P3_0

/* checks button state, retuns true if state changes to high */
bool stc15_button_check(uint8_t /* index */, uint8_t /* value */);

#endif  // __STC15_BUTTONS_H_

