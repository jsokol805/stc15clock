#ifndef __STC15_DUSK_H_
#define __STC15_DUSK_H_

#include "stc15w404as.h"

#include <stdint.h>
#include <stdbool.h>

#define STC15_DUSK_CHANNEL 6

#define ADC_POWER   0x80
#define ADC_FLAG    0x10
#define ADC_START   0x08
#define ADC_SPEEDLL 0x00
#define ADC_SPEEDL  0x20
#define ADC_SPEEDH  0x40
#define ADC_SPEEDHH 0x60

void stc15_dusk_init();

void stc15_update_light_state();

bool stc15_can_exit_low_light();

bool stc15_is_low_light();

/* value is set to 0 on overflow, 255 on underflow */
void stc15_dusk_change_activate_threshold(int8_t /* value */);

/* value is set to 0 on overflow, 255 on underflow */
void stc15_dusk_change_deactivate_threshold(int8_t /* value */);

uint8_t stc15_dusk_activate_threshold();
uint8_t stc15_dusk_deactivate_threshold();

#endif  // __STC15_DUSK_H_

