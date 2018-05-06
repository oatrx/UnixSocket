/*
 * sock_set_port.h
 *
 *  Created on: Aug 20, 2017
 *      Author: centos
 */

#ifndef SOCK_SET_PORT_H_
#define SOCK_SET_PORT_H_
#include "unpsys.h"
void
sock_set_port(struct sockaddr *sa, socklen_t salen, int port);

#endif /* SOCK_SET_PORT_H_ */
