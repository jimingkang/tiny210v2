SECTIONS
{
	. = 0xd0020010;
 . = ALIGN(8);
	.text : {
		start.o
		* (.text)
	}
	.bss : {
		* (.bss)
	}
	.data : {
		* (.data)
	}	
}
