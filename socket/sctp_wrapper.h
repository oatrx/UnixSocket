/*
 * sctp_wrapper.h
 *
 *  Created on: Sep 20, 2017
 *      Author: centos
 */

#ifndef SCTP_WRAPPER_H_
#define SCTP_WRAPPER_H_
#include	"unpsys.h"
int
Sctp_recvmsg(int s, void *msg, size_t len,
	     struct sockaddr *from, socklen_t *fromlen,
	     struct sctp_sndrcvinfo *sinfo,
	     int *msg_flags);

int
Sctp_sendmsg (int s, void *data, size_t len, struct sockaddr *to,
	      socklen_t tolen, uint32_t ppid, uint32_t flags,
	      uint16_t stream_no, uint32_t timetolive, uint32_t context);

int
Sctp_bindx(int sock_fd,struct sockaddr_storage *at,int num,int op);

#endif /* SCTP_WRAPPER_H_ */
