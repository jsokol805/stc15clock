#include "stc15_dusk.h"

#include "ds1302.h"

#define ACTIVATE_RAM_READ  0xC1
#define ACTIVATE_RAM_WRITE 0xC0
#define DEACTIVATE_RAM_READ  0xC3
#define DEACTIVATE_RAM_WRITE 0xC2

uint8_t _dusk_value = 0;

void nop_wait() {
__asm
  nop
__endasm;
}

uint8_t stc15_dusk_activate_threshold() {
  return ds1302_read(ACTIVATE_RAM_READ);
}

uint8_t stc15_dusk_deactivate_threshold() {
  return ds1302_read(DEACTIVATE_RAM_READ);
}

void _set_dusk_activate_threshold(uint8_t val) {
  ds1302_write(ACTIVATE_RAM_WRITE, val);
}

void _set_dusk_deactivate_threshold(uint8_t val) {
  ds1302_write(DEACTIVATE_RAM_WRITE, val);
}


void stc15_dusk_init() {
  /* initialize ADC */
  P1ASF |= 1 << STC15_DUSK_CHANNEL;
  ADC_RES = 0;
  ADC_CONTR = ADC_POWER | ADC_SPEEDLL;
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

