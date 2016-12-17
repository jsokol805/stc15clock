#include <8052.h>

#include "stc15_display.h"

void reset_io() {
  P2 = 0xFF;
  // reset bits P3_2..5
  P3 &= 0xC3;
}

void main() {
  reset_io();

  while(1) {
    show_time(2, 43);
  }
}
