#include "stc15_display.h"

#include <8052.h>

/*
* State of 7 segment display
* Assumes dot to be inactive
*/
unsigned char digits[11] = {
  0xC0, // 0
  0xF9, // 1
  0xA4, // 2
  0xB0, // 3
  0x99, // 4
  0x92, // 5
  0x82, // 6
  0xF8, // 7
  0x80, // 8
  0x90, // 9
  0xFF  // NONE
};

/* Masks used to extract single segment value */
unsigned char masks[7] = {
  0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF
};

void timer_delay() {
  TMOD = 0x03;     // Timer 0, mode 3
  TH0 = 0xFF;
  TR0 = 1;         // Start timer
  while (TF0==0);
  TR0 = 0;         // Stop timer
  TF0 = 0;         // Clear flag
}

void digit(unsigned char pos, unsigned char val, unsigned char dot) {
  unsigned char i;

  /* reset bits P3_2..5 */
  P3 &= 0xC3;
  P3 |= 4 << (3 - pos);

  /* Light up single segments to ensure even brightness */
  for(i = 0; i < 7; ++i) {
    P2 = masks[i] | digits[val]; 
    timer_delay();
  }

  P2 = dot ? 0x7F : 0xFF;
  timer_delay();

  /* Reset segments */
  P2 = 0xFF;
}

void show_time(unsigned char hours_high,
               unsigned char hours_low,
               unsigned char minutes_high,
               unsigned char minutes_low,
               unsigned char seconds_mark) {
  digit(0, minutes_low, 0);
  digit(1, minutes_high, 0);
  digit(2, hours_low, seconds_mark);
  /* Don't show if last digit if hour < 10 */
  digit(3, hours_high ? hours_high : 10, 0);
}

