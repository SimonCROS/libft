#include "libft.h"

t_string	*str_rmlast(t_string *container)
{
	char	*res;
	int		i;

	if (!container)
		return (NULL);
	if (container->size > 0)
	{
		res = malloc(container->size--);
		if (!res)
			return (NULL);
		i = -1;
		while (++i < container->size)
			res[i] = container->string[i];
		res[i] = 0;
		free(container->string);
		container->string = res;
	}
	return (container);
}
