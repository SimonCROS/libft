#include "libft.h"

t_string	*str_append(t_string *container, char *str)
{
	char	*tmp;

	if (!container)
		return (NULL);
	if (!str)
		return (container);
	tmp = container->string;
	container->string = ft_strjoin(tmp, str);
	free(tmp);
	if (!container->string)
		return (NULL);
	container->size += ft_strlen(str);
	return (container);
}

t_string	*str_cappend(t_string *container, char c)
{
	char	*tmp;
	char	char_to_str[2];

	if (!container)
		return (NULL);
	tmp = container->string;
	char_to_str[0] = c;
	char_to_str[1] = 0;
	container->string = ft_strjoin(tmp, char_to_str);
	free(tmp);
	if (!container->string)
		return (NULL);
	container->size++;
	return (container);
}

t_string	*str_prepend(t_string *container, char *str)
{
	char	*tmp;

	if (!container)
		return (NULL);
	if (!str)
		return (container);
	tmp = container->string;
	container->string = ft_strjoin(str, tmp);
	free(tmp);
	if (!container->string)
		return (NULL);
	container->size += ft_strlen(str);
	return (container);
}
