#ifndef __STC15_DISPLAY_H_
#define __STC15_DISPLAY_H_

#include <8052.h>

/* Delay execution by using hardware timer */
void timer_delay();

void digit(unsigned char /* position */,
           unsigned char /* value */,
           unsigned char /* dot */);

void show_time(unsigned char /* hours_high */,
               unsigned char /* hours_low  */,
               unsigned char /* minutes_high */,
               unsigned char /* minutes_lot  */,
               unsigned char /* dot */);

#endif  // __STC15_DISPLAY_H_
