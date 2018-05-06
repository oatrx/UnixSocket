/*
 * Standard I/O wrapper functions.
 */
#ifndef __wrapstdio_h_
#define __wrapstdio_h_
#include	"unpsys.h"

void   Fclose(FILE *fp);
FILE * Fdopen(int fd, const char *type);
char * Fgets(char *ptr, int n, FILE *stream);
FILE * Fopen(const char *filename, const char *mode);

void  Fputs(const char *ptr, FILE *stream);


#endif // __wrapstdio_h_
