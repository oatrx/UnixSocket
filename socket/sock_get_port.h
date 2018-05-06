/*
 * sock_get_port.h
 *
 *  Created on: Aug 20, 2017
 *      Author: centos
 */

#ifndef SOCK_GET_PORT_H_
#define SOCK_GET_PORT_H_
#include "unpsys.h"
int
sock_get_port(const struct sockaddr *sa, socklen_t salen);

#endif /* SOCK_GET_PORT_H_ */
