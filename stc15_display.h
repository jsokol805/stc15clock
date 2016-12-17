#ifndef __STC15_DISPLAY_H_
#define __STC15_DISPLAY_H_

#include <8052.h>

void timer_delay();
void digit(unsigned char, unsigned char, __bit);
void show_time(unsigned char, unsigned char, unsigned char, unsigned char,
               __bit);
#endif  // __STC15_DISPLAY_H_
