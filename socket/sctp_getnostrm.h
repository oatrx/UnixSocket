/*
 * sctp_getnostrm.h
 *
 *  Created on: Sep 20, 2017
 *      Author: centos
 */

#ifndef SCTP_GETNOSTRM_H_
#define SCTP_GETNOSTRM_H_
#include	"unpsys.h"
int
sctp_get_no_strms(int sock_fd,struct sockaddr *to, socklen_t tolen);

#endif /* SCTP_GETNOSTRM_H_ */
