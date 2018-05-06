/*
 * dgcliconnect.h
 *
 *  Created on: Sep 16, 2017
 *      Author: centos
 */

#ifndef DGCLICONNECT_H_
#define DGCLICONNECT_H_
#include "unpsys.h"

void
dg_cli(FILE *fp, int sockfd, const SA *pservaddr, socklen_t servlen);
#endif /* DGCLICONNECT_H_ */
