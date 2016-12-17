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

