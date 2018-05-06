/* include readline */
#ifndef __readline_h_
#define __readline_h_
#include	"unpsys.h"
ssize_t readline(int fd, void *vptr, size_t maxlen);
ssize_t readlinebuf(void **vptrptr);
ssize_t	Readline(int fd, void *ptr, size_t maxlen);
#endif //__readline_h_
