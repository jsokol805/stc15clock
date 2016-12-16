%.hex : %.ihx
	packihx $< > $@

%.ihx : %.c
	sdcc -mmcs51 $<

all: stc15clock.hex

.PHONY: clean
clean:
	rm stc15clock.hex
