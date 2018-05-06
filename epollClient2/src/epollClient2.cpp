//============================================================================
// Name        : epollClient2.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
#define MAXLINE 1024

int main() {
	int sockfd;
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
		perror("socket:");
		exit(1);
	}

    char *host="127.0.0.1";
    int port=8000;
	struct sockaddr_in servaddr;
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr(host);
    servaddr.sin_port = htons(port);

	if((connect(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr))) == -1) {
		perror("server is not open or connect:");
		close(sockfd);
		exit(1);
	}


    char *split="\r\n";
    char *cmd="GET";

    char buf[MAXLINE]="abcdefghijklmnopqrstuvwxyz";
    char msg[MAXLINE];
    char line[MAXLINE];

    strcpy(msg,cmd);

    strcat(msg,split);
    char c[32]={0};
    sprintf(c,"%d",strlen(buf));

    strcat(msg,c);
    strcat(msg,split);
    strcat(msg,buf);
    msg[strlen(msg)]='\0';

	int loop = 10;
    int i=0, n = 0;
    time_t start=clock();
    for(;i<loop;i++)
    {
    	if(write(sockfd,msg,strlen(msg))==-1)
    		cout << "\n** write_1**\n" << endl;

//    	if((n = read(sockfd, line, MAXLINE)) < 0)
//    	{
//            if (errno == ECONNRESET) {
//                close(sockfd);
//            } else
//                std::cout<<"readline error"<<std::endl;
//    	}
//        line[n] = '\0';
//        cout << "read: " << line << endl;

    }
    time_t end=clock();
    double cost=(double)(end-start)/CLOCKS_PER_SEC;
	return 0;
}
