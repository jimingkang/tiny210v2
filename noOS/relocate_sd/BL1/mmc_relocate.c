typedef unsigned int (*copy_sd_mmc_to_mem) (unsigned int  channel, unsigned int  start_block, unsigned char block_size, unsigned int  *trg, unsigned int  init);
#include "Hsmmc.h"
/*
void copy_code_to_dram(void)
{
	unsigned long ch;
	void (*BL2)(void);
	ch = *(volatile unsigned int *)(0xD0037488);

	// ����ָ��
	copy_sd_mmc_to_mem copy_bl2 = (copy_sd_mmc_to_mem) (*(unsigned int *) (0xD0037F98));

	unsigned int ret;
	
	// ͨ��0
	if (ch == 0xEB000000)
	{
		// 0:channel 0
		// 49:Դ,����λ������49,1 sector = 512 bytes
		// 32:���ȣ�����32 sector����16K
		// 0x23E00000:Ŀ��,���ӵ�ַ0x23E00000
		ret = copy_bl2(0, 49, 32,(unsigned int *)0x23E00000, 0);
	}
	// ͨ��2
	else if (ch == 0xEB200000)
	{
		ret = copy_bl2(2, 49, 32,(unsigned int *)0x23E00000, 0);
	}
	else
		return;

	// ��ת��DRAM
    BL2 = (void *)0x23E00000;
    (*BL2)();
}
*/
char buff[10*1024];
void copy_code_to_dram(void)
{
	
	void (*BL2)(void);
	unsigned int ret;
	
	//ret = Hsmmc_ReadBlock((unsigned char *)buff[0],33, 32);
	//BL2 = (void *)buff[0];

	ret = Hsmmc_ReadBlock((unsigned char *)0x23E00000, 33, 32);
	printf("read return =%d\n",ret);
    	//BL2 = (void *)0x23F00000;
  	//(*BL2)();
///main();
}

