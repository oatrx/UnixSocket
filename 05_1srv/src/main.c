/*************************************************************************
	> File Name: main.c
	> Author: Litch
	> Mail: Litch@163.com 
	> Created Time: Sun 09 Jul 2017 02:14:59 PM CST
 ************************************************************************/
#include <signal.h>
#include "unp.h"


void sig_chld_main(int signo)
{
	pid_t pid;
	int stat;
	// 版本1
//	pid = wait(&stat);
//	printf("child %d terminate\n",pid);
	// 版本2 正确版本
	while ((pid = waitpid(-1,&stat,WNOHANG)) > 0)
		printf("child %d terminate\n",pid);
	return;
}
int main()
{	
	printf("%s\n",__FILE__);
	int 	listenfd, connfd;
	pid_t	childpid;
	socklen_t	clientlen;
	struct sockaddr_in clientaddr,servaddr;
	listenfd = Socket(AF_INET, SOCK_STREAM, 0);

	int reuse=1;
	Setsockopt(listenfd,SOL_SOCKET,SO_REUSEADDR,&reuse,sizeof(reuse));

	bzero(&servaddr,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(SERV_PORT); /* daytime server */

	Bind(listenfd,(struct sockaddr*)&servaddr,sizeof(servaddr));

	Listen(listenfd, LISTENQ);
	Signal(SIGCHLD,sig_chld_main);

	bzero(&clientaddr, sizeof(clientaddr));
	clientlen=sizeof(clientaddr);
	for(;;)
	{
		// 需要赋接收地址的变量大小，不然第一次客户的地址获取不到
		connfd = Accept(listenfd, (struct sockaddr*)&clientaddr, &clientlen);
		char IP[32] = {0};
		Inet_ntop(AF_INET,&clientaddr.sin_addr,IP,32);
		//Getsockname(connfd,);
		printf("receive connect from:%s connfd=%d\n", IP, connfd);
		bzero(&clientaddr, sizeof(clientaddr));
		if ((childpid = Fork()) == 0) // child progress
		{
			Close(listenfd);// close listen socket
			str_echo(connfd);// process the request
			exit(0);
		}
		Close(connfd);
	}
	return 0;
}


