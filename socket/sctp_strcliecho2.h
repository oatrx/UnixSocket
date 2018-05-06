/*
 * sctp_strcliecho2.h
 *
 *  Created on: Sep 21, 2017
 *      Author: centos
 */

#ifndef SCTP_STRCLIECHO2_H_
#define SCTP_STRCLIECHO2_H_
#include	"unpsys.h"
void
sctpstr_cli_echoall(FILE *fp, int sock_fd, struct sockaddr *to, socklen_t tolen);

#endif /* SCTP_STRCLIECHO2_H_ */
