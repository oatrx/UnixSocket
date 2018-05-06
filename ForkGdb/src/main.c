/*
 * main.c
 *
 *  Created on: Jul 21, 2017
 *      Author: centos
 * 然后在执行fork命令的代码前 在console输入set follow-fork-mode child 就可以接下来步进入子进程。	
 * 在出子进程时输入 set follow-fork-mode parent 步进到父进程
 */
#include "unpsys.h"
void child_fun()
{
	pid_t pid = getpid();
	printf("子进程%d 调试测验\n",pid);
}
int main()
{
	int a = 0;
	a++;
	pid_t pid;
	if ((pid = fork()) == 0)
	{
		printf("子进程进入\n");
		child_fun();
		printf("子进程结束\n");
	}
	int stat;
	pid_t childpid = wait(&stat);
	return 0;
}



