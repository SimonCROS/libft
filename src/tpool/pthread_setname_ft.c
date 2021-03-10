#include "private/use_gnu.h"
#include <pthread.h>

#if defined __APPLE__
int	pthread_setname_ft(char *name)
{
	return (pthread_setname_np(name));
}

#elif defined __linux__
int	pthread_setname_ft(char *name)
{
	return (pthread_setname_np(pthread_self(), name));
}
#endif
