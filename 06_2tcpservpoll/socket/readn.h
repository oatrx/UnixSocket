/* include readn */
#ifndef	__readn_h_
#define __readn_h_

#include	"unpsys.h"
/* Read "n" bytes from a descriptor. */
ssize_t	readn(int fd, void *vptr, size_t n);
ssize_t Readn(int fd, void *ptr, size_t nbytes);
#endif //__readn_h_
