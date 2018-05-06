/*
 * Wrapper functions for our own library functions.un
 * Most are included in the source file for the function itself.
 */

#ifndef __wraplib_h_
#define __wraplib_h_
#include	"unpsys.h"

const char *Inet_ntop(int family, const void *addrptr, char *strptr, size_t len);
void Inet_pton(int family, const char *strptr, void *addrptr);

#endif //__wraplib_h_
