#include <8052.h>

#include "ds1302.h"
#include "stc15_display.h"

void reset_io() {
  P2 = 0xFF;
  // reset bits P3_2..5
  P3 &= 0xC3;
}

void main() {
  unsigned char hours_high, hours_low, minutes_high, minutes_low, seconds_mark;
  reset_io();

  ds1302_init();
  ds1302_set_time(1, 2, 0, 1);

  while(1) {
    ds1302_get_time(&hours_high, &hours_low, &minutes_high, &minutes_low, &seconds_mark);

    show_time(hours_high, hours_low, minutes_high, minutes_low, seconds_mark);
  }
}
