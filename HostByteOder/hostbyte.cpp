/*************************************************************************
	> File Name: hostbyte.cpp
	> Author: Litch
	> Mail: Litch@163.com 
	> Created Time: Sat 01 Jul 2017 05:12:14 PM CST
 ************************************************************************/
#include "unp.h"

int main()
{
	union {
		short s;
		char c[sizeof(short)];
	} un;
	un.s = 0x0102;
//	printf("%s: ", CPU_VENDOR_OS);
	if (sizeof(short) == 2)
	{
		if (un.c[0] == 1 && un.c[1] == 2)
			printf("big-endian\n");
		else if (un.c[0] == 2 && un.c[1] == 1)
			printf("little-endian\n");
		else
			printf("unKnown\n");
	}
	else
	{
		printf("sizeof(short) = %d\n", sizeof(short));
	}
	exit(0);
}

