/* include write_fd */
#ifndef __write_fd_h_
#define __write_fd_h_
#include	"unpsys.h"

ssize_t write_fd(int fd, void *ptr, size_t nbytes, int sendfd);
ssize_t Write_fd(int fd, void *ptr, size_t nbytes, int sendfd);
#endif // __write_fd_h_
