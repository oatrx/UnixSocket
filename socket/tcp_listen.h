/*
 * tcp_listen.h
 *
 *  Created on: Oct 11, 2017
 *      Author: centos
 */

#ifndef TCP_LISTEN_H_
#define TCP_LISTEN_H_
#include	"unpsys.h"
int
Tcp_listen(const char *host, const char *serv, socklen_t *addrlenp);

#endif /* TCP_LISTEN_H_ */
