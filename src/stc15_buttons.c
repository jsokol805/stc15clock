#include "stc15_buttons.h"

#include "ds1302.h"

#define BUTTON_ACTIVATION_TICKS 6

enum BUTTON_STATE {
  BUTTON_OFF = 0,
  BUTTON_PRESS,
  BUTTON_PRESSED
};

uint8_t _buttons[2] = {0, 0};
uint8_t _buttons_state[2] = {0, 0};

bool stc15_both_button_pressed() {
  if( _buttons_state[0] == BUTTON_PRESS &&
      _buttons_state[1] == BUTTON_PRESS ) {
    _buttons_state[0] = _buttons_state[1] = BUTTON_PRESSED;
    return true;
  }
  return false;
}

bool stc15_button_check(uint8_t index) {
  if( _buttons_state[index] == BUTTON_PRESS && !_buttons[BUTTON_NUM - index - 1]) {
    _buttons_state[index] = BUTTON_PRESSED;
    return true;
  }
  return false;
}

void stc15_button_scan() {
  uint8_t loop;
  uint8_t values[BUTTON_NUM];
  values[UPPER_BTN] = UPPER_PIN;
  values[LOWER_BTN] = LOWER_PIN;

  for( loop = 0; loop < BUTTON_NUM; loop++ ) {
    if (_buttons_state[loop] == BUTTON_OFF) {
      if (values[loop]) {
        _buttons[loop] = 0;
      } else {
        _buttons[loop]++;
      }

      if (_buttons[loop] > BUTTON_ACTIVATION_TICKS) {
        _buttons_state[loop] = BUTTON_PRESS;
      } else if (_buttons[loop] &&
                 _buttons[loop] < _buttons[BUTTON_NUM - loop - 1]) {
      // Sync up values to properly detect both button press
      _buttons[loop] = _buttons[BUTTON_NUM - loop - 1];
      }

    } else if (values[loop]) {
      _buttons_state[loop] = BUTTON_OFF;
    }
  }
}

