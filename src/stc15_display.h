#ifndef __STC15_DISPLAY_H_
#define __STC15_DISPLAY_H_

#include <stdint.h>

#define COMMON_PIN_ACTIVE_STATE 1

/* Delay execution by using hardware timer */
void _timer_delay();

void _digit(uint8_t /* position */,
            uint8_t /* value */,
            uint8_t /* dot */);

void stc15_show_time(uint8_t /* hours_high */,
                     uint8_t /* hours_low  */,
                     uint8_t /* minutes_high */,
                     uint8_t /* minutes_lot  */,
                     uint8_t /* dot */);

void stc15_show_byte(uint8_t /* value */);

#endif  // __STC15_DISPLAY_H_
