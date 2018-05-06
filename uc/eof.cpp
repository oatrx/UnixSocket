/*************************************************************************
	> File Name: eof.cpp
	> Author: Litch
	> Mail: Litch@163.com 
	> Created Time: Thu 13 Jul 2017 11:26:09 PM CST
 ************************************************************************/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int c;
	// linux: ctrl+d = EOF, windows:ctrl + z
	while((c=getchar()) != EOF){
		printf("c = %d\n",c);
	}
	printf("end:%d\n", c);
	return 0;
}

