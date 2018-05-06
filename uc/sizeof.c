/*************************************************************************
	> File Name: sizeof.c
	> Author: Litch
	> Mail: Litch@163.com 
	> Created Time: Sun 13 Aug 2017 06:49:57 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdint.h>
int main()
{
	printf("sizeof char:%d\n", sizeof(char));
	printf("sizeof short:%d\n", sizeof(short));
	printf("sizeof int:%d\n", sizeof(int));
	printf("sizeof long:%ld\n", sizeof(long));
	printf("sizeof void*:%ld\n", sizeof(void*));
	printf("sizeof uint8_t:%ld\n", sizeof(uint8_t));
	printf("sizeof size_t:%ld\n", sizeof(size_t));
	printf("------------------------------\n");
	long k;
	int i = -2;
	unsigned int j = 1;
	k = i + j;
	printf("16进制k = %0x, i = %0x, j=%0x\n", k, i, j);
	printf("Answer:%ld\n", k);
}

