/*
 * dgcliloop1.h
 *
 *  Created on: Sep 16, 2017
 *      Author: centos
 */

#ifndef DGCLILOOP1_H_
#define DGCLILOOP1_H_
#include "unpsys.h"

void
dg_cli(FILE *fp, int sockfd, const SA *pservaddr, socklen_t servlen);
#endif /* DGCLILOOP1_H_ */
