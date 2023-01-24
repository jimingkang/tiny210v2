SECTIONS
{
	. = 0x23e00000;
	
	.text : {
		start.o
		memory.o
		clock.o
		uart.o
                                main.o
		Hsmmc.o
		* (.text)
	}
    		
	.data : {
		* (.data)
	}
	
	bss_start = .; 
	.bss : {
		* (.bss)
	}
	
	bss_end  = .;	
}
