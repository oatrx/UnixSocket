/*
 * sock_ntop.h
 *
 *  Created on: Aug 20, 2017
 *      Author: centos
 */

#ifndef SOCK_NTOP_H_
#define SOCK_NTOP_H_
#include "unpsys.h"
char *
Sock_ntop(const struct sockaddr *sa, socklen_t salen);


#endif /* SOCK_NTOP_H_ */
