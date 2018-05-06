/*
 * Socket wrapper functions.
 * These could all go into separate files, so only the ones needed cause
 * the corresponding function to be added to the executable.  If sockets
 * are a library (SVR4) this might make a difference (?), but if sockets
 * are in the kernel (BSD) it doesn't matter.
 *
 * These wrapper functions also use the same prototypes as POSIX.1g,
 * which might differ from many implementations (i.e., POSIX.1g specifies
 * the fourth argument to getsockopt() as "void *", not "char *").
 *
 * If your system's headers are not correct [i.e., the Solaris 2.5
 * <sys/socket.h> omits the "const" from the second argument to both
 * bind() and connect()], you'll get warnings of the form:
 *warning: passing arg 2 of `bind' discards `const' from pointer target type
 *warning: passing arg 2 of `connect' discards `const' from pointer target type
 */
#ifndef __wrapunix_h_
#define __wrapunix_h_
#include	"unpsys.h"

void *Calloc(size_t n, size_t size);

void Close(int fd);
void Dup2(int fd1, int fd2);

int Fcntl(int fd, int cmd, int arg);

void Gettimeofday(struct timeval *tv, void *foo);
int Ioctl(int fd, int request, void *arg);
pid_t Fork(void);
void *Malloc(size_t size);

int Mkstemp(char *template);
#include	<sys/mman.h>

void * Mmap(void *addr, size_t len, int prot, int flags, int fd, off_t offset);

int Open(const char *pathname, int oflag, mode_t mode);
void Pipe(int *fds);
ssize_t Read(int fd, void *ptr, size_t nbytes);
void Sigaddset(sigset_t *set, int signo);
void Sigdelset(sigset_t *set, int signo);
void Sigemptyset(sigset_t *set);
void Sigfillset(sigset_t *set);

int Sigismember(const sigset_t *set, int signo);
void Sigpending(sigset_t *set);
void Sigprocmask(int how, const sigset_t *set, sigset_t *oset);
char * Strdup(const char *str);
long Sysconf(int name);

#ifdef	HAVE_SYS_SYSCTL_H
void Sysctl(int *name, u_int namelen, void *oldp, size_t *oldlenp,
	   void *newp, size_t newlen);
#endif

void Unlink(const char *pathname);
pid_t Wait(int *iptr);
pid_t Waitpid(pid_t pid, int *iptr, int options);
void Write(int fd, void *ptr, size_t nbytes);
#endif // __wrapunix_h_
