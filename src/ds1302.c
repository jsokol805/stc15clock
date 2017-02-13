#include "ds1302.h"

#define CE   P1_0
#define IO   P1_1
#define SCLK P1_2

void _3wire_reset() {
  SCLK = 0;
  CE = 0;
  CE = 1;
}

void _3wire_write(uint8_t byte) {
  uint8_t i;

  for(i = 0; i < 8; ++i) {
    IO = 0;
    if(byte & 0x01) {
      IO = 1; /* set port pin high to read data */
    }
    SCLK = 0;
    SCLK = 1;
    byte >>= 1;
  }
}

uint8_t _3wire_read() {
  uint8_t i, byte, tmp;

  byte = 0x00;
  IO = 1;
  for(i = 0; i < 8; i++) {
    SCLK = 1;
    SCLK = 0;
    tmp = (uint8_t)IO;
    tmp <<= 7;
    byte >>= 1;
    byte |= tmp; 
  }
  return byte;
}

void ds1302_write(uint8_t address, uint8_t data) {
  _3wire_reset();
  _3wire_write(address);
  _3wire_write(data);
  _3wire_reset();
}

uint8_t ds1302_read(uint8_t address) {
  uint8_t temp;

  _3wire_reset();
  _3wire_write(address);
  temp = _3wire_read();
  _3wire_reset();

  return temp;
}

void ds1302_get_time(uint8_t* hours_high,
                     uint8_t* hours_low,
                     uint8_t* minutes_high,
                     uint8_t* minutes_low,
                     uint8_t* seconds_mark) {
  uint8_t hours, minutes, seconds;
  hours   = ds1302_read(DS1302_HOUR_READ);
  minutes = ds1302_read(DS1302_MINUTE_READ);
  seconds = ds1302_read(DS1302_SECOND_READ);

  *seconds_mark = seconds & 0x01;
  *hours_high   = (hours & HOUR_HIGH) >> 4;
  *hours_low    = hours & HOUR_LOW;
  *minutes_high = (minutes & MINUTE_HIGH) >> 4;
  *minutes_low  = (minutes & MINUTE_LOW);
}

void ds1302_set_time(uint8_t hours_high,
                     uint8_t hours_low,
                     uint8_t minutes_high,
                     uint8_t minutes_low) {
  uint8_t hours, minutes, seconds;

  hours = (DS1302_MODE24 << 4)
        | (hours_high << 4)
        | (hours_low & HOUR_LOW);
  ds1302_write(DS1302_HOUR_WRITE, hours);

  minutes = (minutes_high << 4)
          | (minutes_low & MINUTE_LOW);
  ds1302_write(DS1302_MINUTE_WRITE, minutes);
  
  seconds = 0x00;
  ds1302_write(DS1302_SECOND_WRITE, seconds);
}

void ds1302_init() {
  ds1302_write(DS1302_WRITE_PROTECT, DS1302_WP_OFF_VALUE);
}

void ds1302_increase_hour() {
  uint8_t hour, tmp;
  tmp  =  ds1302_read(DS1302_HOUR_READ);
  hour = ((tmp & HOUR_HIGH) >> 4) * 10 + (tmp & HOUR_LOW);
  hour = (hour + 1) % 24;
  tmp  = ((hour / 10) << 4) | (hour % 10);
  ds1302_write(DS1302_HOUR_WRITE, tmp);
}

void ds1302_increase_minute() {
  uint8_t minute, tmp;
  tmp    = ds1302_read(DS1302_MINUTE_READ);
  minute = ((tmp & MINUTE_HIGH) >> 4) * 10 + (tmp & MINUTE_LOW);
  minute = (minute + 1) % 60;
  tmp    = ((minute / 10) << 4) | (minute % 10);
  ds1302_write(DS1302_MINUTE_WRITE, tmp);
}

void ds1302_run_clock() {
  uint8_t tmp;
  tmp = ds1302_read(DS1302_SECOND_READ);
  /* zero-out clock halt bit */
  tmp &= 0x7F;
  ds1302_write(DS1302_SECOND_WRITE, tmp);
}

