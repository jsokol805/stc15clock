%.hex : %.ihx
	packihx $< > $@

%.ihx : %.c stc15_buttons.rel stc15_display.rel ds1302.rel
	sdcc -mmcs51 $?

%.rel : %.c
	sdcc -mmcs51 -c $<

all: stc15clock.hex

.PHONY: clean
clean:
	rm stc15clock.hex
