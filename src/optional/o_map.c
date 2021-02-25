#include "optional.h"
#include <stdlib.h>

t_opt	o_mapp(t_opt opt, t_bifunction f, void *p)
{
	if (!opt || !f)
		return (NULL);
	return (f(opt, p));
}

t_opt	o_map(t_opt opt, t_function f)
{
	if (!opt || !f)
		return (NULL);
	return (f(opt));
}
