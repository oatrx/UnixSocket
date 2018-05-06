/* include read_fd */
#ifndef __read_fd_h_
#define __read_fd_h_
#include	"unpsys.h"

ssize_t	read_fd(int fd, void *ptr, size_t nbytes, int *recvfd);

ssize_t Read_fd(int fd, void *ptr, size_t nbytes, int *recvfd);

#endif // __read_fd_h_
