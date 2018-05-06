/* include signal_intr */
#ifndef __signal_intr_h_
#define __signal_intr_h_
#include	"unpsys.h"

Sigfunc *signal_intr(int signo, Sigfunc *func);

Sigfunc *Signal_intr(int signo, Sigfunc *func);

#endif // __signal_intr_h_
