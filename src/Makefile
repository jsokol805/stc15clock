%.hex : %.ihx
	packihx $< > $@

%.ihx : %.c stc15_buttons.rel stc15_display.rel ds1302.rel
	sdcc -mmcs51 $^

%.rel : %.c %.h
	sdcc -mmcs51 -c $<

.PHONY: all
all: stc15clock.hex

.PHONY: clean
clean:
	$(RM) *.asm *.rel *.lst *.rst *.hex *.mem *.map *.sym *.lk *.ihx
