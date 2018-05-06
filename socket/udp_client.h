/*
 * udp_client.h
 *
 *  Created on: Oct 12, 2017
 *      Author: centos
 */

#ifndef UDP_CLIENT_H_
#define UDP_CLIENT_H_
#include	"unpsys.h"
int
Udp_client(const char *host, const char *serv, SA **saptr, socklen_t *lenptr);

#endif /* UDP_CLIENT_H_ */
