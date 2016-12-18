#include "stc15_dusk.h"

#define STC15_LIGHT_THRESHOLD 219

unsigned char dusk_value = 0;

void nop_wait() {
__asm
  nop
__endasm;
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

  dusk_value = ADC_RES;
}

unsigned char stc15_is_low_light() {
  return dusk_value > STC15_LIGHT_THRESHOLD;
}

