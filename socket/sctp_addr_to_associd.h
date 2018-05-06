/*
 * sctp_addr_to_associd.h
 *
 *  Created on: Sep 21, 2017
 *      Author: centos
 */

#ifndef SCTP_ADDR_TO_ASSOCID_H_
#define SCTP_ADDR_TO_ASSOCID_H_
#include	"unpsys.h"
sctp_assoc_t
sctp_address_to_associd(int sock_fd, struct sockaddr *sa, socklen_t salen);

#endif /* SCTP_ADDR_TO_ASSOCID_H_ */
