#ifndef __STC15_DISPLAY_H_
#define __STC15_DISPLAY_H_
void timer_delay();
void digit(unsigned char pos, unsigned char val, __bit dot);
void show_time(unsigned char hours, unsigned char minutes);
#endif  // __STC15_DISPLAY_H_
