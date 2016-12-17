#include "ds1302.h"

#define CE   P1_0
#define IO   P1_1
#define SCLK P1_2

void _3wire_reset() {
  SCLK = 0;
  CE = 0;
  CE = 1;
}

void _3wire_write(unsigned char byte) {
  unsigned char i;

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

unsigned char _3wire_read() {
  unsigned char i;
  unsigned char byte;
  unsigned char tmp;

  byte = 0x00;
  IO = 1;
  for(i = 0; i < 8; i++) {
    SCLK = 1;
    SCLK = 0;
    tmp = (unsigned char)IO;
    tmp <<= 7;
    byte >>= 1;
    byte |= tmp; 
  }
  return byte;
}

void ds1302_write(unsigned char address, unsigned char data) {
  _3wire_reset();
  _3wire_write(address);
  _3wire_write(data);
  _3wire_reset();
}

unsigned char ds1302_read(unsigned char address) {
  unsigned char temp;

  _3wire_reset();
  _3wire_write(address);
  temp = _3wire_read();
  _3wire_reset();

  return temp;
}

void ds1302_get_time(unsigned char* hours_high,
                     unsigned char* hours_low,
                     unsigned char* minutes_high,
                     unsigned char* minutes_low,
                     unsigned char* seconds_mark) {
  unsigned char hours, minutes, seconds;
  hours = ds1302_read(0x85);
  minutes =  ds1302_read(0x83);
  seconds = ds1302_read(0x81);

  *seconds_mark = seconds & 0x01;
  *hours_high = (hours & 0x30) >> 4;
  *hours_low = hours & 0x0F;
  *minutes_high = (minutes & 0x50) >> 4;
  *minutes_low = (minutes & 0x0F);
}

void ds1302_set_time(unsigned char hours_high,
                     unsigned char hours_low,
                     unsigned char minutes_high,
                     unsigned char minutes_low) {
  unsigned char hours, minutes, seconds;

  hours = (0x01 << 4) | ((hours_high & 0x03) << 4) | (hours_low & 0x0F);
  ds1302_write(0x84, hours);

  minutes = ((minutes_high & 0x05) << 4) | (minutes_low & 0x0F);
  ds1302_write(0x82, minutes);
  
  seconds = 0x00;
  ds1302_write(0x80, seconds);
}

void ds1302_init() {
  ds1302_write(0x8E, 0);
}

