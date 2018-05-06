/*************************************************************************
	> File Name: fd_set.c
	> Author: Litch
	> Mail: Litch@163.com 
	> Created Time: Mon 31 Jul 2017 10:48:36 PM CST
 ************************************************************************/
#include "unpsys.h"
int main()
{
	fd_set set;
	printf("size of set:%d\t size of int:%d\n",sizeof(set),sizeof(int));
	FD_ZERO(&set);
	FD_SET(1,&set);
	FD_SET(2,&set);
	int* pset = (int*)&set;
	for (int i=0;i<32;i++)
	{
		if (i%8 == 0)
			printf("\n");
		printf("%0x ", pset[i]);
	}
	printf("\n");
	if (FD_ISSET(1,&set))
	{
		printf("set 1\n");
	}
	FD_SET(3,&set);
//	FD_CLR(1,&set);
	FD_SET(1023,&set);
	for (int i=0;i<32;i++)
	{
		if (i%8 == 0)
			printf("\n");
		printf("%0x ", pset[i]);
	}
	printf("\n");
}

