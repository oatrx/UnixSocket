/*
 * udp_server.h
 *
 *  Created on: Oct 11, 2017
 *      Author: centos
 */

#ifndef UDP_SERVER_H_
#define UDP_SERVER_H_
#include	"unpsys.h"
int
Udp_server(const char *host, const char *serv, socklen_t *addrlenp);

#endif /* UDP_SERVER_H_ */
