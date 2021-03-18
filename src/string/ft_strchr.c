#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*cp;

	cp = (char *)s;
	while (1)
	{
		if (*cp == c)
			return (cp);
		if (!*cp)
			break ;
		++cp;
	}
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*cp;

	cp = (char *)s;
	i = ft_strlen(s);
	while (i)
	{
		if (cp[i] == c)
			return (cp + i);
		--i;
	}
	if (cp[i] == c)
		return (cp + i);
	return (NULL);
}
