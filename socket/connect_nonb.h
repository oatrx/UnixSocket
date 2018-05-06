/*
 * connect_nonb.h
 *
 *  Created on: Oct 11, 2017
 *      Author: centos
 */

#ifndef CONNECT_NONB_H_
#define CONNECT_NONB_H_
#include "unpsys.h"
int
connect_nonb(int sockfd, const SA *saptr, socklen_t salen, int nsec);

#endif /* CONNECT_NONB_H_ */
