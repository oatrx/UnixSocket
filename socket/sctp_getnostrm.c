#include	"sctp_getnostrm.h"

int 
sctp_get_no_strms(int sock_fd,struct sockaddr *to, socklen_t tolen)
{
	int retsz;
	struct sctp_status status;
	retsz = sizeof(status);	
	bzero(&status,sizeof(status));

	status.sstat_assoc_id = sctp_address_to_associd(sock_fd,to,tolen);
	// sctp_opt_info
	// getsockopt 可能不支持sctp, 可以考虑上面的sctp_opt_info
	Getsockopt(sock_fd,IPPROTO_SCTP, SCTP_STATUS,
		   &status, &retsz);
//	if (sctp_opt_info(sock_fd, status.sstat_assoc_id, SCTP_STATUS, &status, &retsz) < 0)
//	{
//		// EINVAL: Invalid argument
//		err_sys("sctp_opt_info error");
//	}
	return(status.sstat_outstrms);
}
