/*
 * sctp_strcli_un.h
 *
 *  Created on: Sep 21, 2017
 *      Author: centos
 */

#ifndef SCTP_STRCLI_UN_H_
#define SCTP_STRCLI_UN_H_
#include	"unpsys.h"
void
sctpstr_cli(FILE *fp, int sock_fd, struct sockaddr *to, socklen_t tolen);

#endif /* SCTP_STRCLI_UN_H_ */
