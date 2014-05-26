#ifndef __Itimes
#define __Itimes

#include <xmacros.h>

_C_LIB_DECL

#ifndef __size_t
#define	__size_t
_TYPE_size_t;
#endif

/*sfh add , in May 26, 2014,9:55:34
#ifndef __clock_t*/
#if !defined(_CLOCK_T) && !defined(__clock_t)&& !defined(__clock_t_defined)
#define _CLOCK_T
#define __clock_t_defined
//sfh add end .

#define	__clock_t
typedef size_t clock_t;
#endif

struct tms {
	clock_t	tms_utime;
	clock_t	tms_stime;
	clock_t	tms_cutime;
	clock_t	tms_cstime;
};

extern clock_t times(struct tms *);

_END_C_LIB_DECL

#endif
