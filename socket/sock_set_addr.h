/*
 * sock_set_addr.h
 *
 *  Created on: Aug 20, 2017
 *      Author: centos
 */

#ifndef SOCK_SET_ADDR_H_
#define SOCK_SET_ADDR_H_
#include "unpsys.h"
void
sock_set_addr(struct sockaddr *sa, socklen_t salen, const void *addr);

#endif /* SOCK_SET_ADDR_H_ */
