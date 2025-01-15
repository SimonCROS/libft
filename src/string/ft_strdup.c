#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	size_t	size;
	int		i;

	if (!s1)
		return (NULL);
	size = ft_strlen(s1) + 1;
	pointer = malloc(size);
	if (!pointer)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		pointer[i] = s1[i];
		i++;
	}
	pointer[i] = 0;
	return (pointer);
}

char	*ft_strndup(char *ptr, size_t n)
{
	char	*line;

	line = malloc(n + 1);
	if (!line)
		return (NULL);
	ft_memcpy(line, ptr, n);
	line[n] = '\0';
	return (line);
}
