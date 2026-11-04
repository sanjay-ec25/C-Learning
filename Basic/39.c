#include<stdio.h>
#include<stdint.h>
int main()
{
	struct sanjay{
		uint8_t A:1;
		uint8_t B:7;
	};
	printf("%zu",sizeof(struct sanjay));
}


