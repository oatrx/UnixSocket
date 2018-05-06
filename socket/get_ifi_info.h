/*
 * get_ifi_info.h
 *
 *  Created on: Oct 11, 2017
 *      Author: centos
 */

#ifndef GET_IFI_INFO_H_
#define GET_IFI_INFO_H_
#include "unpsys.h"
struct ifi_info *
Get_ifi_info(int family, int doaliases);

#endif /* GET_IFI_INFO_H_ */
