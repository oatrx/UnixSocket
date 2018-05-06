/*************************************************************************
	> File Name: main.c
	> Author: Litch
	> Mail: Litch@163.com 
	> Created Time: Sun 09 Jul 2017 02:14:59 PM CST
 ************************************************************************/
#include "unp.h"
int main()
{	
	printf("%s\n",__FILE__);
	int listenfd, connfd;
	struct sockaddr_in servaddr;
	char buff[MAXLINE];
	time_t ticks;

	listenfd = Socket(AF_INET, SOCK_STREAM,0);
	int reuse=1;
	if((setsockopt(listenfd,SOL_SOCKET,SO_REUSEADDR,&reuse,sizeof(reuse)))<0)
	{
        err_sys("setsockopt");
	}

	bzero(&servaddr,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(8888); /* daytime server */
	Bind(listenfd,(struct sockaddr*)&servaddr,sizeof(servaddr));
	Listen(listenfd, LISTENQ);

	struct sockaddr_in clientaddr;
	bzero(&clientaddr, sizeof(clientaddr));
	socklen_t clientaddrlen=sizeof(clientaddr);
	for(;;)
	{
		// 需要赋接收地址的变量大小，不然第一次客户的地址获取不到
		connfd = Accept(listenfd, (struct sockaddr*)&clientaddr, &clientaddrlen);
		char IP[32] = {0};
		Inet_ntop(AF_INET,&clientaddr.sin_addr,IP,32);
		//Getsockname(connfd,);
		printf("receive connect from:%s connfd=%d\n", IP, connfd);
		bzero(&clientaddr, sizeof(clientaddr));
		ticks = time(NULL);
		snprintf(buff,sizeof(buff),"%.24s\r\n",ctime(&ticks));
		Writen(connfd,buff,strlen(buff));
	}
	return 0;
}


