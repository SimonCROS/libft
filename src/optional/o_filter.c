#include "types.h"
#include "optional.h"
#include <stdlib.h>

t_opt	o_filterp(t_opt opt, t_bipredicate f, void *p)
{
	if (!opt || !f || !f(opt, p))
		return (NULL);
	return (opt);
}

t_opt	o_filter(t_opt opt, t_predicate f)
{
	if (!opt || !f || !f(opt))
		return (NULL);
	return (opt);
}
