#include "libft.h"

t_string	*as_string(char *str, t_string *container)
{
	if (!container)
		return (NULL);
	container->string = ft_strdup(str);
	if (!container->string)
		return (NULL);
	container->size = ft_strlen(str);
	return (container);
}

t_string	*str_new(void)
{
	t_string	*container;

	container = malloc(sizeof(t_string));
	if (!as_string("", container))
	{
		free(container);
		return (NULL);
	}
	return (container);
}

void	str_destroy(t_string *container)
{
	free(container->string);
}
