/*
 * dgcliaddr.h
 *
 *  Created on: Sep 16, 2017
 *      Author: centos
 */

#ifndef DGCLIADDR_H_
#define DGCLIADDR_H_
#include "unpsys.h"

void
dg_cli(FILE *fp, int sockfd, const SA *pservaddr, socklen_t servlen);
#endif /* DGCLIADDR_H_ */
