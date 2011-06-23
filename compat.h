#ifndef __COMPAT_H__
#define __COMPAT_H__

#ifdef WIN32

#include <windows.h>
#include <tchar.h>

#define MAX_KEY_LENGTH 255
#define MAX_VALUE_NAME 16383


#define CPUMINER_RKEY "SOFTWARE\\cpudonate\\cpuhash"
#define MAX_VALUE_NAME 16383

static inline void sleep(int secs)
{
	Sleep(secs * 1000);
}

enum {
	PRIO_PROCESS		= 0,
};

static inline int setpriority(int which, int who, int prio)
{
	/* FIXME - actually do something */
	return 0;
}

#else /* WIN32 */

static inline void Sleep(int ms)
{
	usleep(ms * 1000);
}

#endif /* WIN32 */

#endif /* __COMPAT_H__ */
