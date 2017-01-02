#include "stc15_buttons.h"

#include <8052.h>

#include "ds1302.h"

uint8_t buttons[2] = {0, 0};

void button_check(uint8_t index, uint8_t value, void (*action)()) {
  if ( buttons[index] != value ) {
    if (value) (*action)();
    buttons[index] = value;
  }
}

void read_buttons() {
  button_check(HOUR_BTN, HOUR_PIN, &ds1302_increase_hour);
  button_check(MINUTE_BTN, MINUTE_PIN, &ds1302_increase_minute);
}

