# stc15clock

Replacement software for cheap chinese DIY led clock based on STC15W404AS MCU

## Building

Compiler of choice is sdcc, avaliable on virually every platform. As my development envirnoment is based on Linux, this is the only OS currently tested.

Simply go into `src` directory, run `make` and you should get `stc15clock.hex` ready to be flashed onto MCU.

# Configuration

There are currently two hardware revisions supported, but further compile-time configuration has to be made in `src\stc15_display.h`. For display to function correctly you need to specify how common display pin should be driven (LOW or HIGH state).

* rev.A - integrated 4 digit display, *without* transistors for driving the display - `COMMON_PIN_ACTIVE_STATE = 1`
* rev.B - 4 single digits displays, *with* transistors present - `COMMON_PIN_ACTIVE_STATE = 0`

Schematics for both revisions are avaliable in `docs` folder.

## Flashing

I'm using `stcgal` (https://github.com/grigorig/stcgal) for uploading code to the device
