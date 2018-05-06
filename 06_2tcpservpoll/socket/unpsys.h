/*
 * unpsys.h
 *
 *  Created on: Jul 9, 2017
 *      Author: centos
 */

#ifndef SRC_UNPSYS_H_
#define SRC_UNPSYS_H_
#include	"config.h"
#include	<netinet/in.h>	/* sockaddr_in{} and other Internet defns */
#include	<arpa/inet.h>	/* inet(3) functions */
#include	<errno.h>
#include	<fcntl.h>	/* for nonblocking */
#include	<netdb.h>
#include	<signal.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	<unistd.h>
#include	<sys/types.h>	/* basic system data types */
#include	<sys/socket.h>	/* basic socket definitions */
#include	<sys/time.h>	/* timeval{} for select() */
#include	<sys/time.h>	/* includes <time.h> unsafely */
#include	<sys/stat.h>	/* for S_xxx file mode constants */
#include	<sys/uio.h>	/* for iovec{} and readv/writev */
#include	<sys/wait.h>
#include	<sys/un.h>	/* for Unix domain sockets */
#include	<sys/select.h>	/* for convenience */
#include	<sys/param.h>	/* OpenBSD prereq for sysctl.h */
#include	<sys/sysctl.h>
#include 	<sys/syslog.h>
#include 	<sys/resource.h>
#include	<poll.h>		/* for convenience */
#include	<strings.h>		/* for convenience */
#include	<sys/ioctl.h>
#include	<pthread.h>
#include	<stdarg.h>
#include	<linux/kernel.h>
#include	<math.h>

typedef struct sockaddr SA;

// 简化 void (*signal(int signo, void (*fun)(int)));
typedef void Sigfunc(int);// 配合自定义signal.h
// Sigfunc* signal(int signo, Sigfunc* func);

#define min(x,y) ({ typeof(x) _x = (x); typeof(y) _y = (y); (void) (&_x == &_y); _x < _y ? _x : _y; })
#define max(x,y) ({ typeof(x) _x = (x); typeof(y) _y = (y); (void) (&_x == &_y); _x > _y ? _x : _y; })

/* POSIX requires that an #include of <poll.h> DefinE INFTIM, but many
   systems still DefinE it in <sys/stropts.h>.  We don't want to include
   all the STREAMS stuff if it's not needed, so we just DefinE INFTIM here.
   This is the standard value, but there's no guarantee it is -1. */
#ifndef INFTIM
#define INFTIM          (-1)    /* infinite poll timeout */
/* $$.Ic INFTIM$$ */
#ifdef	HAVE_POLL_H
#define	INFTIM_UNPH				/* tell unpxti.h we defined it */
#endif
#endif

#ifndef OPEN_MAX
#define OPEN_MAX	1024	// centos7 没有，自己定义了一个
#endif // OPEN_MAX

#endif /* SRC_UNPSYS_H_ */
