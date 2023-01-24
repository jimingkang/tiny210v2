buzzer.bin: start.o main.o buzzer.o
	arm-linux-ld -Ttext 0x0 -o buzzer.elf $^
	arm-linux-objcopy -O binary buzzer.elf buzzer.bin
	arm-linux-objdump -D buzzer.elf > buzzer_elf.dis
	gcc mkv210_image.c -o mkmini210
	./mkmini210 buzzer.bin 210.bin


%.o : %.S
	arm-linux-gcc -o $@ $< -c

%.o : %.c
	arm-linux-gcc -o $@ $< -c 

clean:
	rm *.o *.elf *.bin *.dis *.exe -f
