/*
 * sctp_check_notify.h
 *
 *  Created on: Sep 21, 2017
 *      Author: centos
 */

#ifndef SCTP_CHECK_NOTIFY_H_
#define SCTP_CHECK_NOTIFY_H_
#include	"unpsys.h"
void
check_notification(int sock_fd,char *recvline,int rd_len);

#endif /* SCTP_CHECK_NOTIFY_H_ */
