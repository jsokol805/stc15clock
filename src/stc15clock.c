#include "stc15w404as.h"

#include <stdint.h>

#include "ds1302.h"
#include "stc15_buttons.h"
#include "stc15_display.h"
#include "stc15_dusk.h"

enum CLOCK_STATE {
  TIME = 0,
  DUSK_SETTING,
  CLOCK_STATE_COUNT
};

uint8_t current_state = TIME;

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

void check_low_light() {
  stc15_update_light_state();
  if(stc15_is_low_light()) {
    P2M0 = 0x00;
    P2M1 = 0x00;
    P3M0 &= 0xC3;
    P3M1 &= 0xC3;
  } else {
    P2M0 = 0xFF;
    P2M1 = 0x00;
    P3M0 |= 0x3C;
    P3M1 &= 0xC3;
  }
}

void check_buttons() {
  if(stc15_button_check(UPPER_BTN, UPPER_PIN))
    current_state = (current_state + 1) % CLOCK_STATE_COUNT;

  if(stc15_button_check(LOWER_BTN, LOWER_PIN)) {
    switch(current_state) {
      case TIME:
        ds1302_increase_minute();
        break;
      case DUSK_SETTING:
        stc15_dusk_change_activate_threshold(1);
        break;
    }
  }
}

void main() {
  uint8_t hours_high, hours_low, minutes_high, minutes_low, seconds_mark;
  reset_io();

  ds1302_init();
  stc15_dusk_init();

  while(1) {
    check_buttons();
    switch(current_state) {
      case TIME:
        ds1302_get_time(&hours_high, &hours_low,
                        &minutes_high, &minutes_low,
                        &seconds_mark);
        stc15_show_time(hours_high, hours_low,
                        minutes_high, minutes_low,
                        seconds_mark);
        break;
      case DUSK_SETTING:
        stc15_show_byte(stc15_dusk_activate_threshold);
        break;
    }
    check_low_light();
  }
}
