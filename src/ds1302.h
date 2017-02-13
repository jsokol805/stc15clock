#ifndef __STC15_DS1302_H_
#define __STC15_DS1302_H_

#include <8052.h>
#include <stdint.h>

/* ds1302.h - interface for 3-wire communication with Maxim DS1302 RTC chip. */

/* high/low refers to tens and ones of clock values */
#define HOUR_HIGH   0x30
#define HOUR_LOW    0x0F
#define MINUTE_HIGH 0x70
#define MINUTE_LOW  0x0F

#define DS1302_MODE12      0x70
#define DS1302_MODE24      0x00

#define DS1302_HOUR_READ   0x85
#define DS1302_MINUTE_READ 0x83
#define DS1302_SECOND_READ 0x81

#define DS1302_HOUR_WRITE   0x84
#define DS1302_MINUTE_WRITE 0x82
#define DS1302_SECOND_WRITE 0x80

#define DS1302_WRITE_PROTECT 0x8E
#define DS1302_WP_ON_VALUE   1 << 7
#define DS1302_WP_OFF_VALUE  0

/* 'internal' set of functions - you shouldn't use them outside of ds1302.c */
void _3wire_reset();
void _3wire_write(uint8_t /* data */);
uint8_t _3wire_read();

/*
*  DS1302 write protection bit state on power-on is not guaranteed
*  so it's important to set it off before trying to write.
*/
void ds1302_init();

void ds1302_write(uint8_t /* address */, uint8_t /* data */);

uint8_t ds1302_read(uint8_t /* address */);

void ds1302_get_time(uint8_t* /* hours_high */,
                     uint8_t* /* hours_low  */,
                     uint8_t* /* minutes_high */,
                     uint8_t* /* minutes_low  */,
                     uint8_t* /* seconds_mark */);

/* seconds are reset to 0 on every call */
void ds1302_set_time(uint8_t /* hours_high */,
                     uint8_t /* hours_low */,
                     uint8_t /* minutes_high */,
                     uint8_t /* minutes_low */);

void ds1302_increase_hour();

void ds1302_increase_minute();

void ds1302_run_clock();

#endif  // __STC15_DS1302_H_

