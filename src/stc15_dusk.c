#include "stc15_dusk.h"

uint8_t _dusk_value = 0;
uint8_t _dusk_activate_threshold = 219;
uint8_t _dusk_deactivate_threshold = 190;

void nop_wait() {
__asm
  nop
__endasm;
}

uint8_t stc15_dusk_activate_threshold() {
  return _dusk_activate_threshold;
}

uint8_t stc15_dusk_deactivate_threshold() {
  return _dusk_deactivate_threshold;
}

void _set_dusk_activate_threshold(uint8_t val) {
  _dusk_activate_threshold = val;
}

void _set_dusk_deactivate_threshold(uint8_t val) {
  _dusk_deactivate_threshold = val;
}


void stc15_dusk_init() {
  /* initialize ADC */
  P1ASF |= 1 << STC15_DUSK_CHANNEL;
  ADC_RES = 0;
  ADC_CONTR = ADC_POWER | ADC_SPEEDLL;

  /* read thresholds from ds1302 */
}

void stc15_update_light_state() {
  ADC_CONTR = ADC_POWER | ADC_SPEEDHH | ADC_START | STC15_DUSK_CHANNEL;
  nop_wait();
  while(!(ADC_CONTR & ADC_FLAG)); /* wait for ADC result */
  ADC_CONTR &= ~ADC_FLAG;

  _dusk_value = ADC_RES;
}

bool stc15_can_exit_low_light() {
  return _dusk_value < stc15_dusk_deactivate_threshold();
}

bool stc15_is_low_light() {
  return _dusk_value > stc15_dusk_activate_threshold();
}

void stc15_dusk_change_activate_threshold(int8_t value) {
  int16_t temp = stc15_dusk_activate_threshold() + value;
  if (temp < 0) {
    _set_dusk_activate_threshold(255);
  } else if (temp > 255) {
    _set_dusk_activate_threshold(0);
  } else {
    _set_dusk_activate_threshold(temp);
  }
}

void stc15_dusk_change_deactivate_threshold(int8_t value) {
  int16_t temp = stc15_dusk_deactivate_threshold() + value;
  if (temp < 0) {
    _set_dusk_deactivate_threshold(255);
  } else if (temp > 255) {
    _set_dusk_deactivate_threshold(0);
  } else {
    _set_dusk_deactivate_threshold(temp);
  }
}

