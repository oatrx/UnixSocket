/*
 * mcast_join.h
 *
 *  Created on: Oct 12, 2017
 *      Author: centos
 */

#ifndef MCAST_JOIN_H_
#define MCAST_JOIN_H_
#include	"unpsys.h"
void
Mcast_join(int sockfd, const SA *grp, socklen_t grplen,
		   const char *ifname, u_int ifindex);

void
Mcast_join_source_group(int sockfd, const SA *src, socklen_t srclen,
						const SA *grp, socklen_t grplen,
						const char *ifname, u_int ifindex);

void
Mcast_block_source(int sockfd, const SA *src, socklen_t srclen,
						const SA *grp, socklen_t grplen);

void
Mcast_unblock_source(int sockfd, const SA *src, socklen_t srclen,
						const SA *grp, socklen_t grplen);
#endif /* MCAST_JOIN_H_ */
