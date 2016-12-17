#include "stc15w404as.h"

#include "ds1302.h"
#include "stc15_buttons.h"
#include "stc15_display.h"

void reset_io() {
  P2 = 0xFF;
  // reset bits P3_2..5
  P3 &= 0xC3;

  /* set P2 into push-pull mode */
  P2M0 = 0xFF;
  P2M1 = 0x00;

  /* set P3_2..5 into push-pull mode */
  P3M0 |= 0x3C;
  P3M1 &= 0xC3;
}

void main() {
  unsigned char hours_high, hours_low, minutes_high, minutes_low, seconds_mark;
  reset_io();

  ds1302_init();

  while(1) {
    ds1302_get_time(&hours_high, &hours_low, &minutes_high, &minutes_low, &seconds_mark);
    show_time(hours_high, hours_low, minutes_high, minutes_low, seconds_mark);
    read_buttons();
  }
}
