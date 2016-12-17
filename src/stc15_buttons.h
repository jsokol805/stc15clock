#ifndef __STC15_BUTTONS_H_
#define __STC15_BUTTONS_H_

#include <8052.h>

#define HOUR_BTN 0
#define HOUR_PIN P3_1
#define MINUTE_BTN 1
#define MINUTE_PIN P3_0

void button_check(unsigned char index, unsigned char value, void (*action)());
void read_buttons();

#endif  // __STC15_BUTTONS_H_

