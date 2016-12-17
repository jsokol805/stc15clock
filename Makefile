%.hex : %.ihx
	packihx $< > $@

%.ihx : %.c stc15_display.rel
	sdcc -mmcs51 $?

%.rel : %.c
	sdcc -mmcs51 -c $<

all: stc15clock.hex

.PHONY: clean
clean:
	rm stc15clock.hex
