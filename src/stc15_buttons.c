#include "stc15_buttons.h"

#include "ds1302.h"

uint8_t _buttons[2] = {0, 0};

bool stc15_button_check(uint8_t index, uint8_t value) {
  if ( _buttons[index] != value ) {
    _buttons[index] = value;
    return value;
  }
  return false;
}

