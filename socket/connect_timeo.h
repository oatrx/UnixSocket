/*
 * connect_timeo.h
 *
 *  Created on: Oct 11, 2017
 *      Author: centos
 */

#ifndef CONNECT_TIMEO_H_
#define CONNECT_TIMEO_H_
#include "unpsys.h"
void
Connect_timeo(int fd, const SA *sa, socklen_t salen, int sec);

#endif /* CONNECT_TIMEO_H_ */
