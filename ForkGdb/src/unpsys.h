/*
 * unpsys.h
 *
 *  Created on: Jul 9, 2017
 *      Author: centos
 */

#ifndef SRC_UNPSYS_H_
#define SRC_UNPSYS_H_
#include	"config.h"
#include	<sys/types.h>	/* basic system data types */
#include	<sys/socket.h>	/* basic socket definitions */
#include	<sys/time.h>	/* timeval{} for select() */
#include	<sys/time.h>	/* includes <time.h> unsafely */
#include	<netinet/in.h>	/* sockaddr_in{} and other Internet defns */
#include	<arpa/inet.h>	/* inet(3) functions */
#include	<errno.h>
#include	<fcntl.h>		/* for nonblocking */
#include	<netdb.h>
#include	<signal.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	<sys/stat.h>	/* for S_xxx file mode constants */
#include	<sys/uio.h>		/* for iovec{} and readv/writev */
#include	<unistd.h>
#include	<sys/wait.h>
#include	<sys/un.h>		/* for Unix domain sockets */
#include	<sys/select.h>	/* for convenience */
#include	<sys/param.h>	/* OpenBSD prereq for sysctl.h */
#include	<sys/sysctl.h>
#include 	<sys/syslog.h>
#include	<poll.h>		/* for convenience */
#include	<strings.h>		/* for convenience */
#include	<sys/ioctl.h>
#include	<pthread.h>
#include	<stdarg.h>
// 简化 void (*signal(int signo, void (*fun)(int)));
typedef void Sigfunc(int);// 配合自定义signal.h
// Sigfunc* signal(int signo, Sigfunc* func);

#endif /* SRC_UNPSYS_H_ */
