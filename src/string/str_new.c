#include "libft.h"

t_string	*as_string(char *str, t_string *container)
{
	t_string	string;

	if (!container)
		return (NULL);
	string.string = ft_strdup(str);
	if (!string.string)
		return (NULL);
	string.size = ft_strlen(str);
	return (container);
}

t_string	*str_new(t_string *container)
{
	return (as_string("", container));
}

void	str_destroy(t_string *container)
{
	free(container->string);
}
