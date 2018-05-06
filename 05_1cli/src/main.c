/*************************************************************************
	> File Name: main.c
	> Author: Litch
	> Mail: Litch@163.com 
	> Created Time: Sun 09 Jul 2017 02:14:59 PM CST
 ************************************************************************/
#include "unp.h"
int main(int argc,char** argv)
{	
	printf("%s\n",__FILE__);
	int 	sockfd;
	struct sockaddr_in servaddr;
	if (argc != 2){
		err_quit("usage:a.out <IPaddress>");
	}
	sockfd = Socket(AF_INET, SOCK_STREAM, 0);

	int reuse=1;
	Setsockopt(sockfd,SOL_SOCKET,SO_REUSEADDR,&reuse,sizeof(reuse));

	bzero(&servaddr,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(SERV_PORT); /* daytime server */
	Inet_pton(AF_INET, argv[1], &servaddr.sin_addr);

	Connect(sockfd, &servaddr, sizeof(servaddr));

	str_cli(stdin, sockfd); // do it all

	return 0;
}


