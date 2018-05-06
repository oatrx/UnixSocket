/*
 * mcast_set_if.h
 *
 *  Created on: Oct 12, 2017
 *      Author: centos
 */

#ifndef MCAST_SET_IF_H_
#define MCAST_SET_IF_H_
#include	"unpsys.h"

void
Mcast_set_if(int sockfd, const char *ifname, u_int ifindex);
#endif /* MCAST_SET_IF_H_ */
