//============================================================================
// Name        : daytimeTcpClient.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "unp.h"
#define LISTENO 20
// a.out 206.168.112.96
void fun(int temp)
{

}
int main(int argc,char** argv) {
	printf("%s %d",__FILE__ , __LINE__ );
	fun(2);
	int sockfd,n;
	char recvline[MAXLINE+1];
	struct sockaddr_in servaddr;
	if(2!=argc){
		perror("usage: a.out <IP address>");
		return -1;
	}
	sockfd = Socket(AF_INET,SOCK_STREAM,0);
//	if((sockfd=socket(AF_INET,SOCK_STREAM,0)) < 0)
//	{
//		perror("socket error");
//		return -1;
//
//	}
	bzero(&servaddr,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(8888);/* daytime server*/
	if(inet_pton(AF_INET,argv[1],&servaddr.sin_addr)<=0)
	{
		perror("inet_pton error for IP");
		return -1;
	}
	if(connect(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr))<0)
	{
		perror("connect error");
		return -1;
	}
	printf("buile connect sockfd:%d\n", sockfd);
	while((n=read(sockfd,recvline,MAXLINE))>0)
	{
		recvline[n]=0; /* null terminate*/
		if(fputs(recvline,stdout) == EOF){
			perror("fputs error");
		}
	}
	if(n<0)
	{
		perror("read error");
		return -1;
	}

	return 0;
}
