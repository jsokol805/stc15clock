#ifndef __STC15_BUTTONS_H_
#define __STC15_BUTTONS_H_

#include <8052.h>
#include <stdint.h>
#include <stdbool.h>

#define UPPER_BTN 0
#define UPPER_PIN P3_1
#define LOWER_BTN 1
#define LOWER_PIN P3_0

#define BUTTON_NUM 2

/* check is both buttons are pressed - SHOULD BE CALLED BEFORE ANY stc15_button_check!! */
bool stc15_both_button_pressed();

/* checks button state, retuns true if state changes to high */
bool stc15_button_check(uint8_t /* index */);

/* scans current button state */
void stc15_button_scan();

#endif  // __STC15_BUTTONS_H_

