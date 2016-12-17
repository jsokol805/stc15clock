# stc15clock

Replacement software for cheap chinese DIY led clock based on STC15W404AS MCU

## Building

Compiler of choice is sdcc, avaliable on virually every platform. As my development envirnoment is based on Linux, this is the only OS currently tested.

Simply go into `src` directory run `make` and you should get `stc15clock.hex` ready to be flashed onto MCU.

## Flashing

I'm using `stcgal` (https://github.com/grigorig/stcgal) for uploading code to the device
