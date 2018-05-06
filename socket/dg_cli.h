/*
 * dg_cli.h
 *
 *  Created on: Sep 16, 2017
 *      Author: centos
 */

#ifndef DG_CLI_H_
#define DG_CLI_H_
#include "unpsys.h"
void
dg_cli(FILE *fp, int sockfd, const SA *pservaddr, socklen_t servlen);

#endif /* DG_CLI_H_ */
