/*
 * rtt.h
 *
 *  Created on: Oct 12, 2017
 *      Author: centos
 */

#ifndef RTT_H_
#define RTT_H_
#include	"unpsys.h"
static float
rtt_minmax(float rto);

void
rtt_init(struct rtt_info *ptr);

uint32_t
rtt_ts(struct rtt_info *ptr);

void
rtt_newpack(struct rtt_info *ptr);

int
rtt_start(struct rtt_info *ptr);

void
rtt_stop(struct rtt_info *ptr, uint32_t ms);

int
rtt_timeout(struct rtt_info *ptr);

void
rtt_debug(struct rtt_info *ptr);
#endif /* RTT_H_ */
