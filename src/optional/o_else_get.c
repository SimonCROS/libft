#include "optional.h"

void	*o_else_getp(t_opt opt, t_function f, void *p)
{
	if (opt)
		return (opt);
	return (f(p));
}

void	*o_else_get(t_opt opt, t_supplier f)
{
	if (opt)
		return (opt);
	return (f());
}
