#include "libft.h"

static void	*free_all(char **obj, int len)
{
	while (len--)
	{
		free(*obj);
		obj++;
	}
	free(obj);
	return (NULL);
}

static int	ft_init(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			++j;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

/**
 * @brief Split the string each character separator into an array of strings.
 * 
 * @param string the string to split
 * @param separator the separator
 * @return char** an array of strings
 */
char	**ft_split(const char *s, char c)
{
	int		i;
	char	*newstr;
	char	**output;

	output = ft_calloc(ft_init(s, c) + 1, sizeof(*output));
	if (!s || !output)
		return (NULL);
	i = 0;
	while (*s)
	{
		newstr = ft_strchr(s, c);
		if (!newstr)
			newstr = ft_strchr(s, 0);
		if (newstr - s)
		{
			output[i] = ft_substr(s, 0, newstr - s);
			if (!output[i++])
				return (free_all(output, --i));
			s = newstr;
		}
		else
			s++;
	}
	output[i] = 0;
	return (output);
}

/**
 * @brief Split the string each character separator into an array of strings,
 * then free the base string.
 * 
 * @param string the string to split
 * @param separator the separator
 * @return char** an array of strings
 */
char	**ft_splitf(char *s, char c)
{
	char	**output;

	output = ft_split(s, c);
	free(s);
	return (output);
}
