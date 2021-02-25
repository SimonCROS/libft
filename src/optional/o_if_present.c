#include "optional.h"
#include <stdlib.h>

void	o_if_presentp(t_opt opt, t_biconsumer f, void *p)
{
	if (!opt || !f)
		return ;
	f(opt, p);
}

void	o_if_present(t_opt opt, t_consumer f)
{
	if (!opt || !f)
		return ;
	f(opt);
}
