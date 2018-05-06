/*
 * sock_cmp_addr.h
 *
 *  Created on: Aug 20, 2017
 *      Author: centos
 */

#ifndef SOCK_CMP_ADDR_H_
#define SOCK_CMP_ADDR_H_
#include "unpsys.h"

int
sock_cmp_port(const struct sockaddr *sa1, const struct sockaddr *sa2,
			 socklen_t salen);



#endif /* SOCK_CMP_ADDR_H_ */
