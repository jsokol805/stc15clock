#ifndef __STC15_DS1302_H_
#define __STC15_DS1302_H_

#include <8052.h>

/* ds1302.h - interface for 3-wire communication with Maxim DS1302 RTC chip. */

/* high/low refers to tens and ones of clock values */
#define HOUR_HIGH   0x30
#define HOUR_LOW    0x0F
#define MINUTE_HIGH 0x70
#define MINUTE_LOW  0x0F

#define DS1302_MODE12      0x00
#define DS1302_MODE24      0x01

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
void _3wire_write(unsigned char);
unsigned char _3wire_read();

/*
*  DS1302 write protection bit state on power-on is not guaranteed
*  so it's important to set it off before trying to write.
*/
void ds1302_init();

void ds1302_write(unsigned char /* address */, unsigned char /* data */);

void ds1302_get_time(unsigned char* /* hours_high */,
                     unsigned char* /* hours_low  */,
                     unsigned char* /* minutes_high */,
                     unsigned char* /* minutes_low  */,
                     unsigned char* /* seconds_mark */);

/* seconds are reset to 0 on every call */
void ds1302_set_time(unsigned char /* hours_high */,
                     unsigned char /* hours_low */,
                     unsigned char /* minutes_high */,
                     unsigned char /* minutes_low */);

void ds1302_increase_hour();
void ds1302_increase_minute();

#endif  // __STC15_DS1302_H_

