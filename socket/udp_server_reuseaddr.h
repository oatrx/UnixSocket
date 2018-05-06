/*
 * udp_server_reuseaddr.h
 *
 *  Created on: Oct 12, 2017
 *      Author: centos
 */

#ifndef UDP_SERVER_REUSEADDR_H_
#define UDP_SERVER_REUSEADDR_H_
#include	"unpsys.h"
int
Udp_server_reuseaddr(const char *host, const char *serv, socklen_t *addrlenp);

#endif /* UDP_SERVER_REUSEADDR_H_ */
