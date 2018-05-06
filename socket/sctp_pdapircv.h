/*
 * sctp_pdapircv.h
 *
 *  Created on: Sep 20, 2017
 *      Author: centos
 */

#ifndef SCTP_PDAPIRCV_H_
#define SCTP_PDAPIRCV_H_
#include	"unpsys.h"
uint8_t *
pdapi_recvmsg(int sock_fd,
	      int *rdlen,
	      SA *from,
	      int *from_len,
	      struct sctp_sndrcvinfo *sri,
	      int *msg_flags);

#endif /* SCTP_PDAPIRCV_H_ */
