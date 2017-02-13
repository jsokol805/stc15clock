#ifndef __STC15_DISPLAY_H_
#define __STC15_DISPLAY_H_

#include <stdint.h>

#define COMMON_PIN_ACTIVE_STATE 1

/* Delay execution by using hardware timer */
void _timer_delay();

/* Convert digit to 7 segment display value */
uint8_t _digit_value(uint8_t /* digit */);

/* Convert char to 7 segment display value */
uint8_t _char_value(char /* mark */);

void _digit(uint8_t /* position */,
            uint8_t /* value */,
            uint8_t /* dot */);

void _char(uint8_t /* position */,
           char /* value */,
           uint8_t /* dot */);

/*
 * Display value on 7 segment display
 * Position is numbered from right (0) to left (3)
 * val should be in form of (n/c, g, f, e, d, c, b, a)
 */
void _display(uint8_t pos, uint8_t val, uint8_t dot);

void stc15_show_time(uint8_t /* hours_high */,
                     uint8_t /* hours_low  */,
                     uint8_t /* minutes_high */,
                     uint8_t /* minutes_lot  */,
                     uint8_t /* dot */);

/* Show byte value, preceded with one ASCII character mark */
void stc15_show_byte(uint8_t /* value */, char /* mark */);

#endif  // __STC15_DISPLAY_H_
