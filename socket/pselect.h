/*
 * pselect.h
 *
 *  Created on: Oct 12, 2017
 *      Author: centos
 */

#ifndef PSELECT_H_
#define PSELECT_H_
#include	"unpsys.h"
int
pselect(int nfds, fd_set *rset, fd_set *wset, fd_set *xset,
		const struct timespec *ts, const sigset_t *sigmask);

#endif /* PSELECT_H_ */
