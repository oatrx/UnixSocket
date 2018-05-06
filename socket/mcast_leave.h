/*
 * mcast_leave.h
 *
 *  Created on: Oct 12, 2017
 *      Author: centos
 */

#ifndef MCAST_LEAVE_H_
#define MCAST_LEAVE_H_
#include	"unpsys.h"
void
Mcast_leave(int sockfd, const SA *grp, socklen_t grplen);

void
Mcast_leave_source_group(int sockfd, const SA *src, socklen_t srclen,
						const SA *grp, socklen_t grplen);

#endif /* MCAST_LEAVE_H_ */
