#include <stdio.h>

int main(void) {
	int ret = 0;

	ret = printf("Ola mundo!\n");
	printf("%x - %x - %x - %c\n", ret, 10, 0xa, 0x41);
	return 0;
}