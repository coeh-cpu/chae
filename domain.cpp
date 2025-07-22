#include <stdio.h>

int main(void)
{

	volatile char* p = (volatile char*)0x30000000;
	int i;
	while (1) {
		*p |= 0x1;
		for (i = 0; i < 100000; i++);
		*p &= ~(0x1);
		for (i = 0; i < 100000; i++);
	}

}