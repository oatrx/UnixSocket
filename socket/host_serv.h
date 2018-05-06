/*
 * host_serv.h
 *
 *  Created on: Sep 22, 2017
 *      Author: centos
 */

#ifndef HOST_SERV_H_
#define HOST_SERV_H_
#include "unpsys.h"
struct addrinfo *
Host_serv(const char *host, const char *serv, int family, int socktype);

#endif /* HOST_SERV_H_ */
