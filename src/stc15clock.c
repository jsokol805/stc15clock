#include "stc15w404as.h"

#include <stdint.h>

#include "ds1302.h"
#include "stc15_buttons.h"
#include "stc15_display.h"
#include "stc15_dusk.h"

enum CLOCK_STATE {
  TIME = 0,
  DUSK_ACTIVATION_SET,
  DUSK_DEACTIVATION_SET,
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
  } else if (stc15_can_exit_low_light()) {
    P2M0 = 0xFF;
    P2M1 = 0x00;
    P3M0 |= 0x3C;
    P3M1 &= 0xC3;
  }
}

void check_buttons() {
  stc15_button_scan();

  if(stc15_both_button_pressed())
    current_state = (current_state + 1) % CLOCK_STATE_COUNT;

  if(stc15_button_check(LOWER_BTN)) {
    switch(current_state) {
      case TIME:
        ds1302_increase_minute();
        break;
      case DUSK_ACTIVATION_SET:
        stc15_dusk_change_activate_threshold(1);
        break;
      case DUSK_DEACTIVATION_SET:
        stc15_dusk_change_deactivate_threshold(1);
        break;
    }
  }

  if(stc15_button_check(UPPER_BTN)) {
    switch(current_state) {
      case TIME:
        ds1302_increase_hour();
        break;
      case DUSK_ACTIVATION_SET:
        stc15_dusk_change_activate_threshold(-1);
        break;
      case DUSK_DEACTIVATION_SET:
        stc15_dusk_change_deactivate_threshold(-1);
        break;
    }
  }
}

void main() {
  uint8_t hours_high, hours_low, minutes_high, minutes_low, seconds_mark;
  reset_io();

  ds1302_init();
  stc15_dusk_init();
  ds1302_get_time(&hours_high, &hours_low,
                  &minutes_high, &minutes_low,
                  &seconds_mark);
  ds1302_run_clock();

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
      case DUSK_ACTIVATION_SET:
        stc15_show_byte(stc15_dusk_activate_threshold(), 'A');
        break;
      case DUSK_DEACTIVATION_SET:
        stc15_show_byte(stc15_dusk_deactivate_threshold(), 'd');
        break;
    }
    check_low_light();
  }
}
