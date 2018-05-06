/*
 * sctp_strcli.h
 *
 *  Created on: Sep 21, 2017
 *      Author: centos
 */

#ifndef SCTP_STRCLI_H_
#define SCTP_STRCLI_H_
#include	"unpsys.h"
void
sctpstr_cli(FILE *fp, int sock_fd, struct sockaddr *to, socklen_t tolen);

#endif /* SCTP_STRCLI_H_ */
