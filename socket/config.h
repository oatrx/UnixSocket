/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */
#ifndef __config_h_
#define __config_h_
///////////////////////////// 增加
//#ifndef OPEN_MAX
//#define OPEN_MAX	20
//#endif // OPEN_MAX


/* Following could be derived from SOMAXCONN in <sys/socket.h>, but many
   kernels still #define it as 5, while actually supporting many more */
#define	LISTENQ		1024	/* 2nd argument to listen() */

/* Miscellaneous constants */
#define	MAXLINE		4096	/* max text line length */
#define	MAXSOCKADDR  128	/* max socket address structure size */
#define	BUFFSIZE	8192	/* buffer size for reads and writes */

/* Define some port number that can be used for client-servers */
#define	SERV_PORT		 9877			/* TCP and UDP client-servers */
#define	SERV_PORT_STR	"9877"			/* TCP and UDP client-servers */
/* Some things for SCTP */
#define SCTP_PDAPI_INCR_SZ 65535	/* increment size for pdapi when adding buf space */
#define SCTP_PDAPI_NEED_MORE_THRESHOLD 1024	/* need more space threshold */
#define SERV_MAX_SCTP_STRM	10	/* normal maximum streams */
#define SERV_MORE_STRMS_SCTP	20	/* larger number of streams */


#define	UNIXSTR_PATH	"/tmp/unix.str"	/* Unix domain stream cli-serv */
#define	UNIXDG_PATH		"/tmp/unix.dg"	/* Unix domain datagram cli-serv */
///////////////////////////////

/* CPU, vendor, and operating system */
#define CPU_VENDOR_OS "x86_64-unknown-linux-gnu"

/* Define to 1 if <netdb.h> defines struct addrinfo */
#define HAVE_ADDRINFO_STRUCT 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define to 1 if the /dev/streams/xtiso/tcp device exists */
/* #undef HAVE_DEV_STREAMS_XTISO_TCP */

/* Define to 1 if the /dev/tcp device exists */
/* #undef HAVE_DEV_TCP */

/* Define to 1 if the /dev/xti/tcp device exists */
/* #undef HAVE_DEV_XTI_TCP */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* define if getaddrinfo prototype is in <netdb.h> */
#define HAVE_GETADDRINFO_PROTO 1

/* Define to 1 if you have the `gethostbyname2' function. */
#define HAVE_GETHOSTBYNAME2 1

/* Define to 1 if you have the `gethostbyname_r' function. */
#define HAVE_GETHOSTBYNAME_R 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* define if gethostname prototype is in <unistd.h> */
#define HAVE_GETHOSTNAME_PROTO 1

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* define if getnameinfo prototype is in <netdb.h> */
#define HAVE_GETNAMEINFO_PROTO 1

/* define if getrusage prototype is in <sys/resource.h> */
#define HAVE_GETRUSAGE_PROTO 1

/* Define to 1 if you have the `hstrerror' function. */
#define HAVE_HSTRERROR 1

/* define if hstrerror prototype is in <netdb.h> */
#define HAVE_HSTRERROR_PROTO 1

/* Define to 1 if <net/if.h> defines struct if_nameindex */
#define HAVE_IF_NAMEINDEX_STRUCT 1

/* Define to 1 if you have the `if_nametoindex' function. */
#define HAVE_IF_NAMETOINDEX 1

/* define if if_nametoindex prototype is in <net/if.h> */
#define HAVE_IF_NAMETOINDEX_PROTO 1

/* Define to 1 if you have the `inet6_rth_init' function. */
#define HAVE_INET6_RTH_INIT 1

/* Define to 1 if you have the `inet_aton' function. */
#define HAVE_INET_ATON 1

/* define if inet_aton prototype is in <arpa/inet.h> */
#define HAVE_INET_ATON_PROTO 1

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* define if inet_pton prototype is in <arpa/inet.h> */
#define HAVE_INET_PTON_PROTO 1

/* Define to 1 if you have the `kevent' function. */
/* #undef HAVE_KEVENT */

/* Define to 1 if you have the `kqueue' function. */
/* #undef HAVE_KQUEUE */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `pthreads' library (-lpthreads). */
/* #undef HAVE_LIBPTHREADS */

/* Define to 1 if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* Define to 1 if you have the `xti' library (-lxti). */
/* #undef HAVE_LIBXTI */

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* define if struct msghdr contains the msg_control member */
#define HAVE_MSGHDR_MSG_CONTROL 1

/* Define to 1 if you have the <netconfig.h> header file. */
/* #undef HAVE_NETCONFIG_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netdir.h> header file. */
/* #undef HAVE_NETDIR_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <net/if_dl.h> header file. */
/* #undef HAVE_NET_IF_DL_H */

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the `pselect' function. */
#define HAVE_PSELECT 1

/* define if pselect prototype is in <sys/stat.h> */
#define HAVE_PSELECT_PROTO 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* define if snprintf prototype is in <stdio.h> */
#define HAVE_SNPRINTF_PROTO 1

/* Define to 1 if <net/if_dl.h> defines struct sockaddr_dl */
/* #undef HAVE_SOCKADDR_DL_STRUCT */

/* define if socket address structures have length fields */
/* #undef HAVE_SOCKADDR_SA_LEN */

/* Define to 1 if you have the `sockatmark' function. */
#define HAVE_SOCKATMARK 1

/* define if sockatmark prototype is in <sys/socket.h> */
#define HAVE_SOCKATMARK_PROTO 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <stropts.h> header file. */
/* #undef HAVE_STROPTS_H */

/* Define to 1 if `ifr_mtu' is member of `struct ifreq'. */
#define HAVE_STRUCT_IFREQ_IFR_MTU 1

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if <time.h> or <sys/time.h> defines struct timespec */
#define HAVE_TIMESPEC_STRUCT 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <xti.h> header file. */
/* #undef HAVE_XTI_H */

/* Define to 1 if you have the <xti_inet.h> header file. */
/* #undef HAVE_XTI_INET_H */

/* Define to 1 if the system supports IPv4 */
#define IPV4 1

/* Define to 1 if the system supports IPv6 */
#define IPV6 1

/* Define to 1 if the system supports IPv4 */
#define IPv4 1

/* Define to 1 if the system supports IPv6 */
#define IPv6 1

/* Define to 1 if the system supports IP Multicast */
#define MCAST 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* the size of the sa_family field in a socket address structure */
/* #undef SA_FAMILY_T */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if the system supports UNIX domain sockets */
#define UNIXDOMAIN 1

/* Define to 1 if the system supports UNIX domain sockets */
#define UNIXdomain 1

/* 16 bit signed type */
/* #undef int16_t */

/* 32 bit signed type */
/* #undef int32_t */

/* the type of the sa_family struct member */
/* #undef sa_family_t */

/* unsigned integer type of the result of the sizeof operator */
/* #undef size_t */

/* a type appropriate for address */
/* #undef socklen_t */

/* define to __ss_family if sockaddr_storage has that instead of ss_family */
/* #undef ss_family */

/* a signed type appropriate for a count of bytes or an error indication */
/* #undef ssize_t */

/* scalar type */
#define t_scalar_t int32_t

/* unsigned scalar type */
#define t_uscalar_t uint32_t

/* 16 bit unsigned type */
/* #undef uint16_t */

/* 32 bit unsigned type */
/* #undef uint32_t */

/* 8-bit unsigned type */
/* #undef uint8_t */

#endif //__config_h_
