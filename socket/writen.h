/* include writen */
#ifndef __writen_h_
#define __writen_h_
#include "unpsys.h"
/* Write "n" bytes to a descriptor. */
ssize_t	writen(int fd, const void *vptr, size_t n);
void Writen(int fd, void *ptr, size_t nbytes);
#endif // __writen_h_
