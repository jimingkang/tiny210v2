SECTIONS
{
	. = 0xd0020010;
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
