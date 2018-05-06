/* include signal */
#ifndef __Signal_h_
#define __Signal_h_
#include	"unpsys.h"

Sigfunc *signal(int signo, Sigfunc *func);

Sigfunc *Signal(int signo, Sigfunc *func);	/* for our signal() function */

#endif // __Signal_h_
