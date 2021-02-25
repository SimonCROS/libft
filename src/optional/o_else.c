#include "optional.h"

void	*o_else(t_opt opt, void *o)
{
	if (opt)
		return (opt);
	return (o);
}
