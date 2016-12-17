#ifndef __STC15_DS1302_H_
#define __STC15_DS1302_H_

#include <8052.h>

void _3wire_reset();
void _3wire_write(unsigned char);
unsigned char _3wire_read();
void ds1302_write(unsigned char, unsigned char);

#endif  // __STC15_DS1302_H_

