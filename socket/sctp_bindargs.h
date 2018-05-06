/*
 * sctp_bindargs.h
 *
 *  Created on: Sep 21, 2017
 *      Author: centos
 */

#ifndef SCTP_BINDARGS_H_
#define SCTP_BINDARGS_H_
#include	"unpsys.h"
int
sctp_bind_arg_list(int sock_fd, char **argv, int argc);

#endif /* SCTP_BINDARGS_H_ */
