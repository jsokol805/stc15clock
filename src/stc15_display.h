#ifndef __STC15_DISPLAY_H_
#define __STC15_DISPLAY_H_

#include <8052.h>
#include <stdint.h>

/* Delay execution by using hardware timer */
void timer_delay();

void digit(uint8_t /* position */,
           uint8_t /* value */,
           uint8_t /* dot */);

void show_time(uint8_t /* hours_high */,
               uint8_t /* hours_low  */,
               uint8_t /* minutes_high */,
               uint8_t /* minutes_lot  */,
               uint8_t /* dot */);

#endif  // __STC15_DISPLAY_H_
